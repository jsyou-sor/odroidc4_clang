#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x15fe3c83, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6fe84350, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x1c1d9821, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xdd39591f, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x665c5b48, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0x773f56e0, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0x3ad9298, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7afbc9a1, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x5072e533, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x85308aee, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xe1ef18a3, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x8106be6e, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x8be79960, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0xd0e21008, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x51b8c9a3, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x42fdfb53, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x276b7823, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x98ab764, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xcc116bfd, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xbfe8a96a, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x91993fe1, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x8ffc438c, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xcb16ba14, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x90e5d0b8, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xacf4269a, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0x4755c8ed, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x3c03e97f, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xc4c58961, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xbe082271, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x62602f82, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x24b2741c, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xfcc1ba22, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0xb6fc9676, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0x713c25c4, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0x46a41fc1, __VMLINUX_SYMBOL_STR(ip_cmsg_recv_offset) },
	{ 0x6d3db3d4, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x380f53c3, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0x8db19b37, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0x3ec92cb7, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x78c993d2, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x249e4962, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xb87ac202, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xc8a7ff8a, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xc00bd840, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xe11f3cbc, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x1fcf4d4b, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x183131d4, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf6026515, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x27e377e9, __VMLINUX_SYMBOL_STR(__udp_disconnect) },
	{ 0x699a9504, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0x789d79c9, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xc46e2e5a, __VMLINUX_SYMBOL_STR(__ip4_datagram_connect) },
	{ 0x942edcb5, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x7eca6ad0, __VMLINUX_SYMBOL_STR(l2tp_session_get) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x54c87c61, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x534d9394, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0x7c858cd7, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "1105FD4519C4E35D6F02F54");
