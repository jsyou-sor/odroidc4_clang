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
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x4b090bc4, __VMLINUX_SYMBOL_STR(udp6_set_csum) },
	{ 0xfd835168, __VMLINUX_SYMBOL_STR(__gue_build_header) },
	{ 0xe712c8, __VMLINUX_SYMBOL_STR(__fou_build_header) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fou";

