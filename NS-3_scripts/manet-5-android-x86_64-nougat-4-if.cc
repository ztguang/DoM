/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2009 University of Washington
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

//
// This program configures a grid (default 5x5) of nodes on an 
// 802.11b physical layer, with
// 802.11b NICs in adhoc mode, and by default, sends one packet of 1000 
// (application) bytes to node 1.
//
// The default layout is like this, on a 2-D grid.
/*
 *         /M2\
 *        /    \
 *       /      \
 *     M1---M3---M5     //----M6
 *       \      /
 *        \    /
 *         \M4/
  */
// the layout is affected by the parameters given to GridPositionAllocator;
// by default, GridWidth is 5 and numNodes is 25..
//
// There are a number of command-line options available to control
// the default behavior.  The list of available command-line options
// can be listed with the following command:
// ./waf --run "wifi-simple-adhoc-grid --help"
//
// Note that all ns-3 attributes (not just the ones exposed in the below
// script) can be changed at command line; see the ns-3 documentation.
//
// For instance, for this configuration, the physical layer will
// stop successfully receiving packets when distance increases beyond
// the default of 500m.
// To see this effect, try running:
//
// refer to:    /opt/tools/network_simulators/ns3/ns-allinone-3.26/ns-3.26/examples/wireless/wifi-adhoc.cc
// refer to:    
// refer to:    
// refer to:    

// scp manet-5-android-x86_64-nougat-4-if.cc 10.109.252.82:/opt/tools/network_simulators/ns3/ns-allinone-3.26/ns-3.26/scratch/

// ./waf --run scratch/manet-5-android-x86_64-nougat-4-if --vis

#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/mobility-module.h"
#include "ns3/config-store-module.h"
#include "ns3/wifi-module.h"
//#include "ns3/internet-module.h"
//#include "ns3/olsr-helper.h"
//#include "ns3/ipv4-static-routing-helper.h"
//#include "ns3/ipv4-list-routing-helper.h"

#include "ns3/tap-bridge-module.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("WifiSimpleAdhocGrid");

void ReceivePacket (Ptr<Socket> socket)
{
  while (socket->Recv ())
    {
      NS_LOG_UNCOND ("Received one packet!");
    }
}

static void GenerateTraffic (Ptr<Socket> socket, uint32_t pktSize, 
                             uint32_t pktCount, Time pktInterval )
{
  if (pktCount > 0)
    {
      socket->Send (Create<Packet> (pktSize));
      Simulator::Schedule (pktInterval, &GenerateTraffic, 
                           socket, pktSize,pktCount-1, pktInterval);
    }
  else
    {
      socket->Close ();
    }
}


int main (int argc, char *argv[])
{
  std::string phyMode ("DsssRate1Mbps");
  double distance = 500;  // m
  uint32_t packetSize = 1000; // bytes
  uint32_t numPackets = 1;
  uint32_t numNodes = 5;  // numNodes
  //uint32_t numIFs = 4;  // num of network interface cards
  uint32_t sinkNode = 0;
  uint32_t sourceNode = 4;  // sourceNode
  double interval = 1.0; // seconds
  bool verbose = false;
  bool tracing = false;

  int nodeSpeed = 6; //in m/s
  int nodePause = 1; //int nodePause = 7200; in s
  double txpDistance = 80.0;		// refer to: ns-allinone-3.26/ns-3.26/src/dsr/examples/dsr.cc

  CommandLine cmd;

  cmd.AddValue ("phyMode", "Wifi Phy mode", phyMode);
  cmd.AddValue ("distance", "distance (m)", distance);
  cmd.AddValue ("packetSize", "size of application packet sent", packetSize);
  cmd.AddValue ("numPackets", "number of packets generated", numPackets);
  cmd.AddValue ("interval", "interval (seconds) between packets", interval);
  cmd.AddValue ("verbose", "turn on all WifiNetDevice log components", verbose);
  cmd.AddValue ("tracing", "turn on ascii and pcap tracing", tracing);
  cmd.AddValue ("numNodes", "number of nodes", numNodes);
  cmd.AddValue ("sinkNode", "Receiver node number", sinkNode);
  cmd.AddValue ("sourceNode", "Sender node number", sourceNode);

  cmd.Parse (argc, argv);
  // Convert to time object
  Time interPacketInterval = Seconds (interval);

  // disable fragmentation for frames below 2200 bytes
  Config::SetDefault ("ns3::WifiRemoteStationManager::FragmentationThreshold", StringValue ("2200"));
  // turn off RTS/CTS for frames below 2200 bytes
  Config::SetDefault ("ns3::WifiRemoteStationManager::RtsCtsThreshold", StringValue ("2200"));
  // Fix non-unicast data rate to be the same as that of unicast
  Config::SetDefault ("ns3::WifiRemoteStationManager::NonUnicastMode", 
                      StringValue (phyMode));

  NodeContainer adhocNodes;
  adhocNodes.Create (numNodes);


  // The below set of helpers will help us to put together the wifi NICs we want
  WifiHelper wifi;
  if (verbose)
    {
      wifi.EnableLogComponents ();  // Turn on all Wifi logging
    }

  YansWifiPhyHelper wifiPhy =  YansWifiPhyHelper::Default ();
  // set it to zero; otherwise, gain will be added
  wifiPhy.Set ("RxGain", DoubleValue (-10) ); 
  // ns-3 supports RadioTap and Prism tracing extensions for 802.11b
  wifiPhy.SetPcapDataLinkType (YansWifiPhyHelper::DLT_IEEE802_11_RADIO); 

  YansWifiChannelHelper wifiChannel;
  wifiChannel.SetPropagationDelay ("ns3::ConstantSpeedPropagationDelayModel");
  //wifiChannel.AddPropagationLoss ("ns3::FriisPropagationLossModel", "Frequency", DoubleValue (5e9));
  wifiChannel.AddPropagationLoss ("ns3::FriisPropagationLossModel");
  // refer to: ns-allinone-3.26/ns-3.26/src/dsr/examples/dsr.cc
  wifiChannel.AddPropagationLoss ("ns3::RangePropagationLossModel", "MaxRange", DoubleValue (txpDistance));
  wifiPhy.SetChannel (wifiChannel.Create ());

  // Add an upper mac and disable rate control
  WifiMacHelper wifiMac;
  wifi.SetStandard (WIFI_PHY_STANDARD_80211b);
  wifi.SetRemoteStationManager ("ns3::ConstantRateWifiManager",
                                "DataMode",StringValue (phyMode),
                                "ControlMode",StringValue (phyMode));
  // Set it to adhoc mode
  wifiMac.SetType ("ns3::AdhocWifiMac");
  NetDeviceContainer adhocDevices_11 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(0));
  NetDeviceContainer adhocDevices_12 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(0));
  NetDeviceContainer adhocDevices_13 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(0));
  NetDeviceContainer adhocDevices_14 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(0));

  NetDeviceContainer adhocDevices_21 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(1));
  NetDeviceContainer adhocDevices_22 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(1));
  NetDeviceContainer adhocDevices_23 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(1));
  NetDeviceContainer adhocDevices_24 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(1));

  NetDeviceContainer adhocDevices_31 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(2));
  NetDeviceContainer adhocDevices_32 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(2));
  NetDeviceContainer adhocDevices_33 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(2));
  NetDeviceContainer adhocDevices_34 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(2));

  NetDeviceContainer adhocDevices_41 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(3));
  NetDeviceContainer adhocDevices_42 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(3));
  NetDeviceContainer adhocDevices_43 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(3));
  NetDeviceContainer adhocDevices_44 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(3));

  NetDeviceContainer adhocDevices_51 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(4));
  NetDeviceContainer adhocDevices_52 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(4));
  NetDeviceContainer adhocDevices_53 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(4));
  NetDeviceContainer adhocDevices_54 = wifi.Install (wifiPhy, wifiMac, adhocNodes.Get(4));

//----------------------------------------------------------------------
  MobilityHelper mobilityAdhoc;

  // for fixed position of 5 nodes
  Ptr<ListPositionAllocator> positionAlloc = CreateObject<ListPositionAllocator> ();
  positionAlloc->Add (Vector (-50.0, 0.0, 0.0));
  positionAlloc->Add (Vector (50.0, 0.0, 0.0));
  positionAlloc->Add (Vector (0, -50.0, 0.0));
  positionAlloc->Add (Vector (0, 0.0, 0.0));
  positionAlloc->Add (Vector (0, 50.0, 0.0));

  //positionAlloc->Add (Vector (100.0, 0.0, 0.0));

// comments lines for streamIndex, 如果注释 6 行，则，默认执行 [src/core/model/random-variable-stream.cc] 中的 if (stream == -1) 
  int64_t streamIndex = 0; // used to get consistent mobility across scenarios

  ObjectFactory pos;
  pos.SetTypeId ("ns3::RandomRectanglePositionAllocator");
  pos.Set ("X", StringValue ("ns3::UniformRandomVariable[Min=0.0|Max=300.0]"));
  pos.Set ("Y", StringValue ("ns3::UniformRandomVariable[Min=0.0|Max=1500.0]"));

  Ptr<PositionAllocator> taPositionAlloc = pos.Create ()->GetObject<PositionAllocator> ();

  // 设置 AssignStreams (streamIndex); 中的 streamIndex 值，可以调整 5 个结点的运行轨迹
  //streamIndex += taPositionAlloc->AssignStreams (streamIndex);
  //streamIndex += taPositionAlloc->AssignStreams (-1);
  streamIndex += taPositionAlloc->AssignStreams (streamIndex);

  std::cout << "streamIndex: " << streamIndex << "\n";

  std::stringstream ssSpeed;
  ssSpeed << "ns3::UniformRandomVariable[Min=0.0|Max=" << nodeSpeed << "]";
  std::stringstream ssPause;
  ssPause << "ns3::ConstantRandomVariable[Constant=" << nodePause << "]";

//-------------------------------------------------------------------------------------------------------------
// 为了让 4个重叠结点 同步移动，进行如下分析：
//------------------------------------------------------------------------------------------------------------- no use

// streamIndex += mobilityAdhoc.AssignStreams (adhocNodes, streamIndex);
// streamIndex must be  >= -1
//assert failed. cond="stream >= -1", file=../src/core/model/random-variable-stream.cc, line=102

//msg="invalid Seed 0", file=../src/core/model/rng-stream.cc, line=373

/*
./src/mobility/helper/mobility-helper.h:  int64_t AssignStreams (NodeContainer c, int64_t stream);
./src/mobility/helper/mobility-helper.cc:MobilityHelper::AssignStreams (NodeContainer c, int64_t stream)
./src/mobility/helper/mobility-helper.cc:          currentStream += mobility->AssignStreams (currentStream);
*/
//-------------------------------------------------------------------------------------------------------------


  //----------------------------------------------------------------------------------------------------
  // FOR 5 nodes
  //----------------------------------------------------------------------------------------------------
//*
  // mobility.SetMobilityModel ("ns3::RandomWaypointMobilityModel",
  // mobility.SetMobilityModel ("ns3::RandomDirection2dMobilityModel",
  mobilityAdhoc.SetMobilityModel ("ns3::RandomWaypointMobilityModel",
                                  "Speed", StringValue (ssSpeed.str ()),
                                  "Pause", StringValue (ssPause.str ()),
                                  "PositionAllocator", PointerValue (taPositionAlloc));
//*/
//mobilityAdhoc.SetMobilityModel ("ns3::ConstantPositionMobilityModel");

  // for fixed position of 5 nodes
  mobilityAdhoc.SetPositionAllocator (positionAlloc);
  mobilityAdhoc.Install (adhocNodes);

  // 设置 AssignStreams (streamIndex); 中的 streamIndex 值，可以调整 5 个结点的运行轨迹
  //streamIndex += mobilityAdhoc.AssignStreams (adhocNodes, streamIndex);
  //streamIndex += taPositionAlloc->AssignStreams (-1);
  streamIndex += mobilityAdhoc.AssignStreams (adhocNodes, -1);

  std::cout << "streamIndex: " << streamIndex << "\n";
  //----------------------------------------------------------------------------------------------------


  //----------------------------------------------------------------------------------------------------
  // Use the TapBridgeHelper to connect to the pre-configured tap devices for 
  // the left side.  We go with "UseBridge" mode since the CSMA devices support
  // promiscuous mode and can therefore make it appear that the bridge is 
  // extended into ns-3.  The install method essentially bridges the specified
  // tap to the specified CSMA device.
  //
  TapBridgeHelper tapBridge;
  tapBridge.SetAttribute ("Mode", StringValue ("UseLocal"));
  //tapBridge.SetAttribute ("Mode", StringValue ("UseBridge"));

  //tapBridge.SetAttribute ("Gateway", Ipv4AddressValue ("10.1.1.1"));
  //tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_1"));
  //tapBridge.Install (adhocInterFaces.Get(0), adhocDevices.Get(0));
  //tapBridge.SetAttribute ("Gateway", Ipv4AddressValue ("10.1.1.2"));
  //tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_2"));
  //tapBridge.Install (adhocInterFaces.Get(1), adhocDevices.Get(1));
  //Add New Lines via sed
  //sed -i '256a \\n  tapBridge.Install (adhocInterFaces.Get(1), adhocDevices.Get(1));\n  newline;' manet-seem-template.cc

  // set the first interface of the 5 nodes
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_10"));
  tapBridge.Install (adhocNodes.Get(0), adhocDevices_11.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_20"));
  tapBridge.Install (adhocNodes.Get(1), adhocDevices_21.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_30"));
  tapBridge.Install (adhocNodes.Get(2), adhocDevices_31.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_40"));
  tapBridge.Install (adhocNodes.Get(3), adhocDevices_41.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_50"));
  tapBridge.Install (adhocNodes.Get(4), adhocDevices_51.Get(0));

  // set the second interface of the 5 nodes
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_11"));
  tapBridge.Install (adhocNodes.Get(0), adhocDevices_12.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_21"));
  tapBridge.Install (adhocNodes.Get(1), adhocDevices_22.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_31"));
  tapBridge.Install (adhocNodes.Get(2), adhocDevices_32.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_41"));
  tapBridge.Install (adhocNodes.Get(3), adhocDevices_42.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_51"));
  tapBridge.Install (adhocNodes.Get(4), adhocDevices_52.Get(0));

  // set the third interface of the 5 nodes
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_12"));
  tapBridge.Install (adhocNodes.Get(0), adhocDevices_13.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_22"));
  tapBridge.Install (adhocNodes.Get(1), adhocDevices_23.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_32"));
  tapBridge.Install (adhocNodes.Get(2), adhocDevices_33.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_42"));
  tapBridge.Install (adhocNodes.Get(3), adhocDevices_43.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_52"));
  tapBridge.Install (adhocNodes.Get(4), adhocDevices_53.Get(0));

  // set the fourth interface of the 5 nodes
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_13"));
  tapBridge.Install (adhocNodes.Get(0), adhocDevices_14.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_23"));
  tapBridge.Install (adhocNodes.Get(1), adhocDevices_24.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_33"));
  tapBridge.Install (adhocNodes.Get(2), adhocDevices_34.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_43"));
  tapBridge.Install (adhocNodes.Get(3), adhocDevices_44.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_53"));
  tapBridge.Install (adhocNodes.Get(4), adhocDevices_54.Get(0));



//*/
//----------------------------------------------------------------------------------------------------


  Simulator::Stop (Seconds (33.0));
  Simulator::Run ();
  Simulator::Destroy ();

  return 0;
}

