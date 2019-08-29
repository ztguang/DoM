
# Modified Source Code Files

mptcp_fullmesh.c---7.1-rc2---kernel-4.9---improved

mptcp_fullmesh.c---7.1-rc2---kernel-4.9---original

mptcp_fullmesh.c---nougat-4.4-.c

ospf6d.conf

quagga---rt_netlink.c

rt_netlink.c---quagga-fullpath

rt_netlink.c---quagga-fullpath-xif

rt_netlink.c---quagga-markov-f-xif

rt_netlink.c---quagga-markov-p-xif

rt_netlink.c---quagga-partpath

rt_netlink.c---quagga-partpath-xif

zebra.conf

zebra_rib.c---quagga-markov-f-xif

zebra_rib.c---quagga-markov-p-xif



#android-x86_64-nougat-mptcp.zip includes the following files:

android-x86_64-nougat-mptcp
└── kernel
    ├── drivers
    │   └── infiniband
    │       └── hw
    │           └── cxgb4
    │               └── cm.c
    ├── include
    │   ├── linux
    │   │   ├── skbuff.h
    │   │   └── tcp.h
    │   ├── net
    │   │   ├── dst.h
    │   │   ├── inet_common.h
    │   │   ├── inet_connection_sock.h
    │   │   ├── inet_sock.h
    │   │   ├── mptcp.h
    │   │   ├── mptcp_v4.h
    │   │   ├── mptcp_v6.h
    │   │   ├── neighbour.h
    │   │   ├── net_namespace.h
    │   │   ├── netns
    │   │   │   └── mptcp.h
    │   │   ├── sock.h
    │   │   ├── tcp.h
    │   │   ├── tcp_states.h
    │   │   └── transp_v6.h
    │   └── uapi
    │       └── linux
    │           ├── if.h
    │           └── tcp.h
    └── net
        ├── core
        │   ├── dev.c
        │   ├── neighbour.c
        │   ├── skbuff.c
        │   └── sock.c
        ├── ipv4
        │   ├── af_inet.c
        │   ├── arp.c
        │   ├── inet_connection_sock.c
        │   ├── ip_output.c
        │   ├── ip_sockglue.c
        │   ├── Kconfig
        │   ├── syncookies.c
        │   ├── tcp.c
        │   ├── tcp_fastopen.c
        │   ├── tcp_input.c
        │   ├── tcp_ipv4.c
        │   ├── tcp_minisocks.c
        │   ├── tcp_output.c
        │   └── tcp_timer.c
        ├── ipv6
        │   ├── addrconf.c
        │   ├── af_inet6.c
        │   ├── ipv6_sockglue.c
        │   ├── syncookies.c
        │   └── tcp_ipv6.c
        ├── Kconfig
        ├── Makefile
        └── mptcp
            ├── Kconfig
            ├── Makefile
            ├── mptcp_balia.c
            ├── mptcp_binder.c
            ├── mptcp_coupled.c
            ├── mptcp_ctrl.c
            ├── mptcp_fullmesh.c
            ├── mptcp_input.c
            ├── mptcp_ipv4.c
            ├── mptcp_ipv6.c
            ├── mptcp_ndiffports.c
            ├── mptcp_ofo_queue.c
            ├── mptcp_olia.c
            ├── mptcp_output.c
            ├── mptcp_pm.c
            ├── mptcp_redundant.c
            ├── mptcp_rr.c
            ├── mptcp_sched.c
            └── mptcp_wvegas.c
