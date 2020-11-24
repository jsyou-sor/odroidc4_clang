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
	{ 0x3bf8db87, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x50344ea5, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
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
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x96816e87, __VMLINUX_SYMBOL_STR(pskb_trim_rcsum_slow) },
	{ 0x98ab764, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x713c25c4, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0xa99f007b, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x53e1b6a8, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe50c61dc, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8ffc438c, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xe1ef18a3, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xdbf936a7, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x5072e533, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x942edcb5, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x79cb5484, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0x76256f3f, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xe440ee5a, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x6fe84350, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x6d7d53fb, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0x4755c8ed, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x72824997, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x85308aee, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbe082271, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x7991491d, __VMLINUX_SYMBOL_STR(dev_get_by_name_rcu) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0x7e2180cd, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x2a1c095f, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xaa7c1a41, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1fcf4d4b, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xe11f3cbc, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x16d0ba51, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x253a4b00, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x73fabbc3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0xb2df9035, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x46d856db, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xb87cd7ff, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x249e4962, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x84ac0a55, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0x6d3db3d4, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x96542273, __VMLINUX_SYMBOL_STR(register_pernet_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic";

