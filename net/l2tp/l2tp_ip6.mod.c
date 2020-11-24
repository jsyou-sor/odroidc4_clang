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
	{ 0x276b7823, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xcc116bfd, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x42fdfb53, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x8106be6e, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x789d79c9, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xc8a7ff8a, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x62602f82, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x3c03e97f, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xf6c90053, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0x78c993d2, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xc4c58961, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xbfe8a96a, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x51b8c9a3, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0xbb1069b9, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0xd03658da, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0xe55d6a22, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0x942d0587, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0x9a71f513, __VMLINUX_SYMBOL_STR(l2tp_ioctl) },
	{ 0x98ab764, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x713c25c4, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xc00bd840, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x1fcf4d4b, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xe11f3cbc, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x1c1d9821, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x7afbc9a1, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x90e5d0b8, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x7eca6ad0, __VMLINUX_SYMBOL_STR(l2tp_session_get) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x85308aee, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xaf8af0cb, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0xd2b532a1, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x73e00b70, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0x7c858cd7, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xd4c3b82f, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0x91993fe1, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0xfcc1ba22, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x8ffc438c, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xe1ef18a3, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x3ad9298, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd63c3b8, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0x8f421fda, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0x8836862e, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0x5d1614be, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x3e439781, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0xcb16ba14, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x5a13610f, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x463d24ea, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0xb1ab9c2e, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x16dff986, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0x4fb82e09, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0x20aa8f86, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0xf6026515, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0xb9da3d92, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0xbe082271, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x27e377e9, __VMLINUX_SYMBOL_STR(__udp_disconnect) },
	{ 0x6fe84350, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xfb46013c, __VMLINUX_SYMBOL_STR(__ip6_datagram_connect) },
	{ 0x4755c8ed, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xd0e21008, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xb5d5746a, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0xd78c1a71, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0xdf83084e, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0x249e4962, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x41011fac, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x6d3db3d4, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,l2tp_ip,l2tp_core";


MODULE_INFO(srcversion, "412D96726E1945F38DD948E");