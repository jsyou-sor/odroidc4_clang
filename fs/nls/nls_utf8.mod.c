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
	{ 0xb2682405, __VMLINUX_SYMBOL_STR(utf8_to_utf32) },
	{ 0xfcc2a43c, __VMLINUX_SYMBOL_STR(utf32_to_utf8) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x4d7f0f33, __VMLINUX_SYMBOL_STR(unregister_nls) },
	{ 0x37cd0da, __VMLINUX_SYMBOL_STR(__register_nls) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

