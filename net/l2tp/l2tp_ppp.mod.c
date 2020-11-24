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
	{ 0xcc116bfd, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xd87e01b9, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x3c03e97f, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x739b04d9, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0x78c993d2, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xc4c58961, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xbfe8a96a, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x8d437a44, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x4beb3566, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x7bafa862, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x6dbd491f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xe50c61dc, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x62602f82, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x72824997, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x85308aee, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x3ad9298, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x98ab764, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x8ffc438c, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xe1ef18a3, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xa2e3150a, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0x5072e533, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x942edcb5, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xac4ff5f1, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x79cb5484, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0xd4b5759e, __VMLINUX_SYMBOL_STR(l2tp_session_register) },
	{ 0xd5d7ad19, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0xa55d91dd, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0xed49a22, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x6fe84350, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9dd55829, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x6d7d53fb, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0x4755c8ed, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xe440ee5a, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xfd38e4ce, __VMLINUX_SYMBOL_STR(l2tp_udp_encap_recv) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7eca6ad0, __VMLINUX_SYMBOL_STR(l2tp_session_get) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x7e2180cd, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x2a1c095f, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x1c1d9821, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0xbe082271, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xde4ae788, __VMLINUX_SYMBOL_STR(ppp_dev_name) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xaa7c1a41, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xe01d434, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0xdcefae32, __VMLINUX_SYMBOL_STR(l2tp_session_get_nth) },
	{ 0x16d0ba51, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x253a4b00, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x73fabbc3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb87cd7ff, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x249e4962, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0xe1dafb1b, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0x84ac0a55, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0x6d3db3d4, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x96542273, __VMLINUX_SYMBOL_STR(register_pernet_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic,l2tp_core,l2tp_netlink";


MODULE_INFO(srcversion, "844A7A6E423BA49A79BFB7B");
