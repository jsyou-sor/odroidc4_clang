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
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1a779f26, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc1338258, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x4b30b987, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x56503d4a, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x4e32da5c, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v000006A3p00000621");
MODULE_ALIAS("hid:b0003g*v00000738p00001705");
MODULE_ALIAS("hid:b0003g*v000006A3p00000CCB");
MODULE_ALIAS("hid:b0003g*v000006A3p00000CD7");
MODULE_ALIAS("hid:b0003g*v000006A3p00000CCD");
MODULE_ALIAS("hid:b0003g*v000006A3p00000CFA");
MODULE_ALIAS("hid:b0003g*v00000738p00001709");
MODULE_ALIAS("hid:b0003g*v000006A3p00000CD0");
