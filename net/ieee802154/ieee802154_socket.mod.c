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
	{ 0x4980d5fe, __VMLINUX_SYMBOL_STR(dev_load) },
	{ 0x7e2180cd, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xcf06800c, __VMLINUX_SYMBOL_STR(dev_getbyhwaddr_rcu) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0x7b6646bb, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x3ad9298, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x76256f3f, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x53e1b6a8, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x5072e533, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x61e913a0, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x85308aee, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xe1ef18a3, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xd0e21008, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x42fdfb53, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x276b7823, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x50f08aee, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0xcc116bfd, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xcee5a6b4, __VMLINUX_SYMBOL_STR(ieee802154_hdr_pull) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbfe8a96a, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x2a1c095f, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x8ffc438c, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8d437a44, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x4755c8ed, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xfe40fbb9, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xd702e480, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0xe5582226, __VMLINUX_SYMBOL_STR(sock_prot_inuse_add) },
	{ 0x3c03e97f, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc4c58961, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x2f92d949, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xb2df9035, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x965e203e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xd87e01b9, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x9cd2d094, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x6d3db3d4, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x455a9399, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0x78c993d2, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x144ab0c5, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x44a29efe, __VMLINUX_SYMBOL_STR(dev_getfirstbyhwtype) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x249e4962, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xa4c605bc, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc8a7ff8a, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x789d79c9, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x46d856db, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xdbf936a7, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x7c858cd7, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ieee802154";

