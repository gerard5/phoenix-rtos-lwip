#define LWIP_TCPIP_CORE_LOCKING 1
#define LWIP_SUPPORT_CUSTOM_PBUF 1
#define LWIP_NETIF_LOOPBACK 1
#define LWIP_HAVE_SLIPIF 0
#define LWIP_NETIF_API 1
#define LWIP_SOCKET 1
#define LWIP_COMPAT_SOCKETS 0
#define LWIP_ARP 1
#define LWIP_ICMP 1
#define LWIP_RAW 1
#define LWIP_DHCP 1
#define LWIP_DNS 1
#define LWIP_AUTOIP 1
#define LWIP_UDP 1
#define LWIP_TCP 1
#define LWIP_TCP_KEEPALIVE 1
#define MEM_LIBC_MALLOC 1
#define MEMP_MEM_MALLOC 1
#define LWIP_ERRNO_INCLUDE "errno.h"
#define LWIP_DNS_API_DEFINE_ERRORS 0
#define LWIP_DNS_API_DEFINE_FLAGS 0
#define LWIP_DNS_API_DECLARE_STRUCTS 0
#define LWIP_DNS_API_DECLARE_H_ERRNO 0
#define MEMP_NUM_NETCONN 1024
#define PPP_SUPPORT 1
#define PPPOS_SUPPORT 1
#define PAP_SUPPORT 1
#define CHAP_SUPPORT 1
#define MSCHAP_SUPPORT 1
#define LWIP_TIMEVAL_PRIVATE 0


#if 0 // debugging LWiP PPPoS
#define LWIP_DEBUG 1
#define LWIP_DBG_MIN_LEVEL LWIP_DBG_LEVEL_ALL
#define LWIP_DBG_TYPES_ON LWIP_DBG_ON
#define PPP_DEBUG LWIP_DBG_ON
#endif

#if 0
#define LWIP_DEBUG 1
#define LWIP_DBG_MIN_LEVEL LWIP_DBG_LEVEL_ALL
#define LWIP_DBG_TYPES_ON LWIP_DBG_ON
#define PBUF_DEBUG LWIP_DBG_OFF
#define SOCKETS_DEBUG LWIP_DBG_ON
#endif
#define TCP_MSS 1460
#define TCP_WND (32 * TCP_MSS)
#define TCP_SND_BUF TCP_WND
#define ETH_PAD_SIZE 2
#define ETHARP_TABLE_MATCH_NETIF 1
#define IP_REASSEMBLY 1
#define IP_FRAG 1
#define SO_REUSE 1
#define DEFAULT_THREAD_STACKSIZE (4 * 4096)
#define TCPIP_THREAD_STACKSIZE (4 * 4096)
#define TCPIP_THREAD_PRIO 3
#define TCPIP_MBOX_SIZE 256
#define DEFAULT_RAW_RECVMBOX_SIZE 32
#define DEFAULT_UDP_RECVMBOX_SIZE 32
#define DEFAULT_TCP_RECVMBOX_SIZE 32
#define DEFAULT_ACCEPTMBOX_SIZE 32
#define LWIP_HOOK_FILENAME "phoenix-hooks.h"
#define HAVE_PF 1
#define LWIP_NETIF_STATUS_CALLBACK 1
#define LWIP_DHCP_AUTOIP_COOP 1
#define LWIP_DHCP_AUTOIP_COOP_TRIES 3
#define ifreq lwip_ifreq
