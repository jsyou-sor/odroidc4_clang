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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x571d2859, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x27330d06, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x3e56bf9, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xa22c9f04, __VMLINUX_SYMBOL_STR(___might_sleep) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb9f08478, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x6751fcb5, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcbeda7a5, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xa57ab238, __VMLINUX_SYMBOL_STR(nla_reserve_64bit) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x37cde8f3, __VMLINUX_SYMBOL_STR(sock_diag_unregister_inet_compat) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x31572211, __VMLINUX_SYMBOL_STR(inet6_lookup) },
	{ 0x232f8069, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd05890d9, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x7c4693f2, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0x1aff60f1, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x29980b9d, __VMLINUX_SYMBOL_STR(sock_diag_register_inet_compat) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x9bed550f, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xcb4279c0, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0x263c3152, __VMLINUX_SYMBOL_STR(bcmp) },
	{ 0xff3de686, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x392599f, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0x2ea70003, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

