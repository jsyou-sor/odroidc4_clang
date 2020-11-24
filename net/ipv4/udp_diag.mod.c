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
	{ 0x6b27eaaa, __VMLINUX_SYMBOL_STR(udplite_table) },
	{ 0xa9726b8, __VMLINUX_SYMBOL_STR(sock_diag_destroy) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xcbeda7a5, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xbe082271, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xd05890d9, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x864b4077, __VMLINUX_SYMBOL_STR(__udp6_lib_lookup) },
	{ 0xf7121eed, __VMLINUX_SYMBOL_STR(__udp4_lib_lookup) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x5237acb6, __VMLINUX_SYMBOL_STR(inet_sk_diag_fill) },
	{ 0xe2b4563, __VMLINUX_SYMBOL_STR(inet_diag_bc_sk) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x2ea70003, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
	{ 0xc8b2ad89, __VMLINUX_SYMBOL_STR(udp_table) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x1a2ca5f9, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0xfe62189c, __VMLINUX_SYMBOL_STR(inet_diag_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,inet_diag";

