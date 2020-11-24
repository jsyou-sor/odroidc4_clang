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
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xce38c82a, __VMLINUX_SYMBOL_STR(rhashtable_walk_exit) },
	{ 0x571d2859, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0xa29445ea, __VMLINUX_SYMBOL_STR(rhashtable_walk_next) },
	{ 0x3e56bf9, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0x7b6646bb, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xb9f08478, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa0281b53, __VMLINUX_SYMBOL_STR(rhashtable_walk_start) },
	{ 0x6751fcb5, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0x82584e47, __VMLINUX_SYMBOL_STR(rhashtable_walk_stop) },
	{ 0xd702e480, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xcdd8e461, __VMLINUX_SYMBOL_STR(nl_table) },
	{ 0x920aacca, __VMLINUX_SYMBOL_STR(nl_table_lock) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9ffd55b5, __VMLINUX_SYMBOL_STR(rhashtable_walk_enter) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7c4693f2, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0x9bed550f, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xff3de686, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

