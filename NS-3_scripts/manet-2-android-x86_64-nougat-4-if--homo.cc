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
 *     M1---M2
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

// scp manet-8-android-x86_64-nougat-4-if.cc 10.109.252.82:/opt/tools/network_simulators/ns3/ns-allinone-3.27/ns-3.27/scratch/

// ./waf --run scratch/manet-8-android-x86_64-nougat-4-if --vis

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
  uint32_t numNodes = 2;  // numNodes
  //uint32_t numIFs = 4;  // num of network interface cards
  uint32_t sinkNode = 0;
  uint32_t sourceNode = 4;  // sourceNode
  double interval = 1.0; // seconds
  bool verbose = false;
  bool tracing = false;

  int nodeSpeed = 1; //in m/s
  int nodePause = 7200; //in s, = 7200
  // √5000 = 70.710678119; 73×73 = 5329; 2500+3600=6100
  double txpDistance = 73.0;	// refer to: ns-allinone-3.26/ns-3.26/src/dsr/examples/dsr.cc

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


/*
ns3::WifiPhyStandard    set     transmission rate

enum ns3::WifiPhyStandard

Enumerator:
    WIFI_PHY_STANDARD_80211a:     OFDM PHY for the 5 GHz band (Clause 17)
    OfdmRate6Mbps, OfdmRate9Mbps,
        OfdmRate12Mbps, OfdmRate18Mbps, OfdmRate24Mbps,
        OfdmRate36Mbps, OfdmRate48Mbps, and OfdmRate54Mbps.

    WIFI_PHY_STANDARD_80211b:     DSSS PHY (Clause 15) and HR/DSSS PHY (Clause 18)
    DsssRate1Mbps, DsssRate2Mbps,
    DsssRate5_5Mbps, and DsssRate11Mbps.


    WIFI_PHY_STANDARD_80211g:    ERP-OFDM PHY (Clause 19, Section 19.5)
    DsssRate1Mbps, DsssRate2Mbps,
        DsssRate5_5Mbps, DsssRate11Mbps, ErpOfdmRate6Mbps,
        ErpOfdmRate9Mbps, ErpOfdmRate12Mbps, ErpOfdmRate18Mbps,
        ErpOfdmRate24Mbps, ErpOfdmRate36Mbps,
        ErpOfdmRate48Mbps, and ErpOfdmRate54Mbps.
*/


/*
        // Using the WifiNetDevice，refer to: https://www.nsnam.org/docs/models/html/wifi-user.html

        // wifi standard (e.g. 802.11b, 802.11g, 802.11a, 802.11n, 802.11ac or 802.11ax)

        //---------------------------------------------------------------------------------------------------- begin
        //AdHoc WifiNetDevice configuration: 80211a
        //----------------------------------------------------------------------------------------------------
        std::string phyMode1 ("OfdmRate12Mbps");

        WifiHelper wifi1;
        wifi1.SetStandard (WIFI_PHY_STANDARD_80211a);

        YansWifiPhyHelper wifiPhy1 =  YansWifiPhyHelper::Default ();
        // ns-3 supports RadioTap and Prism tracing extensions for 802.11
        wifiPhy1.SetPcapDataLinkType (WifiPhyHelper::DLT_IEEE802_11_RADIO);

        YansWifiChannelHelper wifiChannel1;
        wifiChannel1.SetPropagationDelay ("ns3::ConstantSpeedPropagationDelayModel");
        //wifiChannel.AddPropagationLoss ("ns3::FriisPropagationLossModel", "Frequency", DoubleValue (5e9));
        wifiChannel1.AddPropagationLoss ("ns3::FriisPropagationLossModel");
        wifiChannel1.AddPropagationLoss ("ns3::RangePropagationLossModel", "MaxRange", DoubleValue (txpDistance));
        wifiPhy1.SetChannel (wifiChannel1.Create ());

        // Add a non-QoS upper mac, and disable rate control (i.e. ConstantRateWifiManager)
        WifiMacHelper wifiMac1;
        wifi1.SetRemoteStationManager ("ns3::ConstantRateWifiManager",
                                      "DataMode",StringValue (phyMode1),
                                      "ControlMode",StringValue (phyMode1));
        // Set it to adhoc mode
        wifiMac1.SetType ("ns3::AdhocWifiMac");
        // NetDeviceContainer adhocDevices_1 = wifi1.Install (wifiPhy1, wifiMac1, adhocNodes);    // 给 8 个结点安装第 1 块网卡
        //---------------------------------------------------------------------------------------------------- end
//*/


/*
        //---------------------------------------------------------------------------------------------------- begin
        //AdHoc WifiNetDevice configuration: 80211b
        //----------------------------------------------------------------------------------------------------
        std::string phyMode2 ("DsssRate1Mbps");

        WifiHelper wifi2;
        wifi2.SetStandard (WIFI_PHY_STANDARD_80211b);

        YansWifiPhyHelper wifiPhy2 =  YansWifiPhyHelper::Default ();
        // ns-3 supports RadioTap and Prism tracing extensions for 802.11
        wifiPhy2.SetPcapDataLinkType (WifiPhyHelper::DLT_IEEE802_11_RADIO);

        YansWifiChannelHelper wifiChannel2;
        // reference loss must be changed since 802.11b is operating at 2.4GHz
        wifiChannel2.SetPropagationDelay ("ns3::ConstantSpeedPropagationDelayModel");
        //wifiChannel.AddPropagationLoss ("ns3::FriisPropagationLossModel", "Frequency", DoubleValue (5e9));
        wifiChannel2.AddPropagationLoss ("ns3::FriisPropagationLossModel");
        wifiChannel2.AddPropagationLoss ("ns3::RangePropagationLossModel", "MaxRange", DoubleValue (txpDistance));
        wifiPhy2.SetChannel (wifiChannel2.Create ());

        // Add a non-QoS upper mac, and disable rate control (i.e. ConstantRateWifiManager)
        WifiMacHelper wifiMac2;
        wifi2.SetRemoteStationManager ("ns3::ConstantRateWifiManager",
                                      "DataMode",StringValue (phyMode2),
                                      "ControlMode",StringValue (phyMode2));
        // Set it to adhoc mode
        wifiMac2.SetType ("ns3::AdhocWifiMac");
        // NetDeviceContainer adhocDevices_2 = wifi2.Install (wifiPhy2, wifiMac2, adhocNodes);    // 给 8 个结点安装第 2 块网卡
        //---------------------------------------------------------------------------------------------------- end
//*/


/*
  // 这段不管用
  //---------------------------------------------------------------------------------------------------- begin
    WifiHelper wifi1;
    wifi1.SetStandard(WIFI_PHY_STANDARD_80211a); //设置标准
    wifi1.SetRemoteStationManager("ns3::ConstantRateWifiManager","DataMode",StringValue("OfdmRate6Mbps"));

    YansWifiChannelHelper wifiChannel1 = YansWifiChannelHelper::Default ();
    YansWifiPhyHelper wifiPhy1 = YansWifiPhyHelper::Default ();
    wifiPhy1.SetChannel (wifiChannel1.Create ());
 
    NqosWifiMacHelper wifiMac1 = NqosWifiMacHelper::Default ();
    wifiMac1.SetType ("ns3::AdhocWifiMac",
                   "Slot", StringValue ("16us"));

  //NetDeviceContainer adhocDevices = wifi1.Install (wifiPhy1, wifiMac1, adhocNodes);
  //---------------------------------------------------------------------------------------------------- end
//*/



/*
  // 这段不管用
  //---------------------------------------------------------------------------------------------------- begin
  std::string phyMode1 ("OfdmRate12Mbps");

  // The below set of helpers will help us to put together the wifi1 NICs we want
  WifiHelper wifi1;
  wifi1.SetStandard (WIFI_PHY_STANDARD_80211a);
  wifi1.SetRemoteStationManager ("ns3::ConstantRateWifiManager",
                                "DataMode",StringValue (phyMode1),
                                "ControlMode",StringValue (phyMode1));

  YansWifiPhyHelper wifiPhy1 =  YansWifiPhyHelper::Default ();
  // set it to zero; otherwise, gain will be added
  //wifiPhy1.Set ("RxGain", DoubleValue (-10) ); 
  // ns-3 supports RadioTap and Prism tracing extensions for 802.11b
  wifiPhy1.SetPcapDataLinkType (WifiPhyHelper::DLT_IEEE802_11_RADIO);

  YansWifiChannelHelper wifiChannel1;
  wifiChannel1.SetPropagationDelay ("ns3::ConstantSpeedPropagationDelayModel");
  wifiChannel1.AddPropagationLoss ("ns3::RangePropagationLossModel", "MaxRange", DoubleValue (txpDistance));
  wifiPhy1.SetChannel (wifiChannel1.Create ());

  // Add an upper mac and disable rate control
  WifiMacHelper wifiMac1;
  // Set it to adhoc mode
  wifiMac1.SetType ("ns3::AdhocWifiMac");

  //NetDeviceContainer adhocDevices = wifi1.Install (wifiPhy1, wifiMac1, adhocNodes);
  //---------------------------------------------------------------------------------------------------- end
//*/



//*
  // 这段管用
  //---------------------------------------------------------------------------------------------------- begin
  std::string phyMode1 ("DsssRate11Mbps");

  // The below set of helpers will help us to put together the wifi1 NICs we want
  WifiHelper wifi1;
  wifi1.SetStandard (WIFI_PHY_STANDARD_80211b);
  wifi1.SetRemoteStationManager ("ns3::ConstantRateWifiManager",
                                "DataMode",StringValue (phyMode1),
                                "ControlMode",StringValue (phyMode1));

  YansWifiPhyHelper wifiPhy1 =  YansWifiPhyHelper::Default ();
  // set it to zero; otherwise, gain will be added
  wifiPhy1.Set ("RxGain", DoubleValue (-10) ); 
  // ns-3 supports RadioTap and Prism tracing extensions for 802.11b
  wifiPhy1.SetPcapDataLinkType (YansWifiPhyHelper::DLT_IEEE802_11_RADIO); 

  YansWifiChannelHelper wifiChannel1;
  wifiChannel1.SetPropagationDelay ("ns3::ConstantSpeedPropagationDelayModel");
  //wifiChannel1.AddPropagationLoss ("ns3::FriisPropagationLossModel", "Frequency", DoubleValue (5e9));
  //wifiChannel1.AddPropagationLoss ("ns3::FriisPropagationLossModel");
  // refer to: ns-allinone-3.26/ns-3.26/src/dsr/examples/dsr.cc
  wifiChannel1.AddPropagationLoss ("ns3::RangePropagationLossModel", "MaxRange", DoubleValue (txpDistance));
  wifiPhy1.SetChannel (wifiChannel1.Create ());

  // Add an upper mac and disable rate control
  WifiMacHelper wifiMac1;
  // Set it to adhoc mode
  wifiMac1.SetType ("ns3::AdhocWifiMac");

  //NetDeviceContainer adhocDevices = wifi1.Install (wifiPhy1, wifiMac1, adhocNodes);
  //---------------------------------------------------------------------------------------------------- end
//*/


  // 这段管用
  //---------------------------------------------------------------------------------------------------- begin
  std::string phyMode2 ("DsssRate11Mbps");

  // The below set of helpers will help us to put together the wifi2 NICs we want
  WifiHelper wifi2;
  wifi2.SetStandard (WIFI_PHY_STANDARD_80211b);
  wifi2.SetRemoteStationManager ("ns3::ConstantRateWifiManager",
                                "DataMode",StringValue (phyMode2),
                                "ControlMode",StringValue (phyMode2));

  YansWifiPhyHelper wifiPhy2 =  YansWifiPhyHelper::Default ();
  // set it to zero; otherwise, gain will be added
  wifiPhy2.Set ("RxGain", DoubleValue (-10) ); 
  // ns-3 supports RadioTap and Prism tracing extensions for 802.11b
  wifiPhy2.SetPcapDataLinkType (YansWifiPhyHelper::DLT_IEEE802_11_RADIO); 

  YansWifiChannelHelper wifiChannel2;
  wifiChannel2.SetPropagationDelay ("ns3::ConstantSpeedPropagationDelayModel");
  //wifiChannel2.AddPropagationLoss ("ns3::FriisPropagationLossModel", "Frequency", DoubleValue (5e9));
  //wifiChannel2.AddPropagationLoss ("ns3::FriisPropagationLossModel");
  // refer to: ns-allinone-3.26/ns-3.26/src/dsr/examples/dsr.cc
  wifiChannel2.AddPropagationLoss ("ns3::RangePropagationLossModel", "MaxRange", DoubleValue (txpDistance));
  wifiPhy2.SetChannel (wifiChannel2.Create ());

  // Add an upper mac and disable rate control
  WifiMacHelper wifiMac2;
  // Set it to adhoc mode
  wifiMac2.SetType ("ns3::AdhocWifiMac");

  //NetDeviceContainer adhocDevices = wifi2.Install (wifiPhy2, wifiMac2, adhocNodes);
  //---------------------------------------------------------------------------------------------------- end


  // 这段管用
  //---------------------------------------------------------------------------------------------------- begin
  std::string phyMode3 ("DsssRate11Mbps");

  // The below set of helpers will help us to put together the wifi3 NICs we want
  WifiHelper wifi3;
  wifi3.SetStandard (WIFI_PHY_STANDARD_80211b);
  wifi3.SetRemoteStationManager ("ns3::ConstantRateWifiManager",
                                "DataMode",StringValue (phyMode3),
                                "ControlMode",StringValue (phyMode3));

  YansWifiPhyHelper wifiPhy3 =  YansWifiPhyHelper::Default ();
  // set it to zero; otherwise, gain will be added
  wifiPhy3.Set ("RxGain", DoubleValue (-10) ); 
  // ns-3 supports RadioTap and Prism tracing extensions for 802.11b
  wifiPhy3.SetPcapDataLinkType (YansWifiPhyHelper::DLT_IEEE802_11_RADIO); 

  YansWifiChannelHelper wifiChannel3;
  wifiChannel3.SetPropagationDelay ("ns3::ConstantSpeedPropagationDelayModel");
  //wifiChannel3.AddPropagationLoss ("ns3::FriisPropagationLossModel", "Frequency", DoubleValue (5e9));
  //wifiChannel3.AddPropagationLoss ("ns3::FriisPropagationLossModel");
  // refer to: ns-allinone-3.26/ns-3.26/src/dsr/examples/dsr.cc
  wifiChannel3.AddPropagationLoss ("ns3::RangePropagationLossModel", "MaxRange", DoubleValue (txpDistance));
  wifiPhy3.SetChannel (wifiChannel3.Create ());

  // Add an upper mac and disable rate control
  WifiMacHelper wifiMac3;
  // Set it to adhoc mode
  wifiMac3.SetType ("ns3::AdhocWifiMac");

  //NetDeviceContainer adhocDevices = wifi3.Install (wifiPhy3, wifiMac3, adhocNodes);
  //---------------------------------------------------------------------------------------------------- end


  // 这段管用
  //---------------------------------------------------------------------------------------------------- begin
  std::string phyMode4 ("DsssRate11Mbps");

  // The below set of helpers will help us to put together the wifi4 NICs we want
  WifiHelper wifi4;
  wifi4.SetStandard (WIFI_PHY_STANDARD_80211b);
  wifi4.SetRemoteStationManager ("ns3::ConstantRateWifiManager",
                                "DataMode",StringValue (phyMode4),
                                "ControlMode",StringValue (phyMode4));

  YansWifiPhyHelper wifiPhy4 =  YansWifiPhyHelper::Default ();
  // set it to zero; otherwise, gain will be added
  wifiPhy4.Set ("RxGain", DoubleValue (-10) ); 
  // ns-3 supports RadioTap and Prism tracing extensions for 802.11b
  wifiPhy4.SetPcapDataLinkType (YansWifiPhyHelper::DLT_IEEE802_11_RADIO); 

  YansWifiChannelHelper wifiChannel4;
  wifiChannel4.SetPropagationDelay ("ns3::ConstantSpeedPropagationDelayModel");
  //wifiChannel4.AddPropagationLoss ("ns3::FriisPropagationLossModel", "Frequency", DoubleValue (5e9));
  //wifiChannel4.AddPropagationLoss ("ns3::FriisPropagationLossModel");
  // refer to: ns-allinone-3.26/ns-3.26/src/dsr/examples/dsr.cc
  wifiChannel4.AddPropagationLoss ("ns3::RangePropagationLossModel", "MaxRange", DoubleValue (txpDistance));
  wifiPhy4.SetChannel (wifiChannel4.Create ());

  // Add an upper mac and disable rate control
  WifiMacHelper wifiMac4;
  // Set it to adhoc mode
  wifiMac4.SetType ("ns3::AdhocWifiMac");

  //NetDeviceContainer adhocDevices = wifi4.Install (wifiPhy4, wifiMac4, adhocNodes);
  //---------------------------------------------------------------------------------------------------- end

  NetDeviceContainer adhocDevices_1 = wifi1.Install (wifiPhy1, wifiMac1, adhocNodes);    // 给 8 个结点安装第 1 块网卡
  NetDeviceContainer adhocDevices_2 = wifi2.Install (wifiPhy2, wifiMac2, adhocNodes);    // 给 8 个结点安装第 2 块网卡
  NetDeviceContainer adhocDevices_3 = wifi3.Install (wifiPhy3, wifiMac3, adhocNodes);    // 给 8 个结点安装第 3 块网卡
  NetDeviceContainer adhocDevices_4 = wifi4.Install (wifiPhy4, wifiMac4, adhocNodes);    // 给 8 个结点安装第 4 块网卡

//----------------------------------------------------------------------
  MobilityHelper mobilityAdhoc;

  // for fixed position of 8 nodes
  Ptr<ListPositionAllocator> positionAlloc = CreateObject<ListPositionAllocator> ();
  positionAlloc->Add (Vector (-50.0, 0.0, 0.0));
  positionAlloc->Add (Vector (0, 0.0, 0.0));

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
  // mobility.SetMobilityModel ("ns3::ConstantPositionMobilityModel");
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

  // set the first interface of the 2 nodes
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_10"));
  tapBridge.Install (adhocNodes.Get(0), adhocDevices_1.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_20"));
  tapBridge.Install (adhocNodes.Get(1), adhocDevices_1.Get(1));

  // set the second interface of the 2 nodes
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_11"));
  tapBridge.Install (adhocNodes.Get(0), adhocDevices_2.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_21"));
  tapBridge.Install (adhocNodes.Get(1), adhocDevices_2.Get(1));

  // set the third interface of the 2 nodes
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_12"));
  tapBridge.Install (adhocNodes.Get(0), adhocDevices_3.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_22"));
  tapBridge.Install (adhocNodes.Get(1), adhocDevices_3.Get(1));

  // set the fourth interface of the 2 nodes
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_13"));
  tapBridge.Install (adhocNodes.Get(0), adhocDevices_4.Get(0));
  tapBridge.SetAttribute ("DeviceName", StringValue ("tap_a_23"));
  tapBridge.Install (adhocNodes.Get(1), adhocDevices_4.Get(1));



//*/
//----------------------------------------------------------------------------------------------------


  Simulator::Stop (Seconds (33.0));
  Simulator::Run ();
  Simulator::Destroy ();

  return 0;
}

