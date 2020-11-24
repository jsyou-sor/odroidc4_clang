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
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x6150f893, __VMLINUX_SYMBOL_STR(ip_set_del) },
	{ 0xcc7a6d1, __VMLINUX_SYMBOL_STR(ip_set_add) },
	{ 0xc61ed2d9, __VMLINUX_SYMBOL_STR(ip_set_nfnl_put) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6658a4e6, __VMLINUX_SYMBOL_STR(ip_set_nfnl_get_byindex) },
	{ 0x5ed6d44b, __VMLINUX_SYMBOL_STR(ip_set_test) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x27954ff3, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x5e39d3d2, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0xee1091e, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0xf3b6a6ab, __VMLINUX_SYMBOL_STR(xt_register_matches) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_set,x_tables";

