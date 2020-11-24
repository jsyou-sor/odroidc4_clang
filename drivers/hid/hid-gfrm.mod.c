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
	{ 0x88d9776f, __VMLINUX_SYMBOL_STR(input_enable_softrepeat) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0xcb8ebaf1, __VMLINUX_SYMBOL_STR(hid_report_raw_event) },
	{ 0xa60e1793, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0xc1338258, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x20c377c3, __VMLINUX_SYMBOL_STR(hid_register_report) },
	{ 0x4b30b987, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x56503d4a, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x4e32da5c, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0005g*v00000058p00002000");
MODULE_ALIAS("hid:b0005g*v00000471p00002210");
