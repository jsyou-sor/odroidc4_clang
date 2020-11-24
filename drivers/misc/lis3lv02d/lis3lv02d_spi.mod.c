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
	{ 0xe581af6e, __VMLINUX_SYMBOL_STR(lis3lv02d_poweron) },
	{ 0x7f40c683, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x25e7a2b2, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0x912e863e, __VMLINUX_SYMBOL_STR(lis3lv02d_remove_fs) },
	{ 0x5e9dbb6d, __VMLINUX_SYMBOL_STR(lis3lv02d_poweroff) },
	{ 0x137221a8, __VMLINUX_SYMBOL_STR(lis3lv02d_joystick_disable) },
	{ 0x749105fa, __VMLINUX_SYMBOL_STR(lis3lv02d_init_device) },
	{ 0x7bfa56a7, __VMLINUX_SYMBOL_STR(lis3lv02d_init_dt) },
	{ 0xac03ca52, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xb6be22ca, __VMLINUX_SYMBOL_STR(lis3_dev) },
	{ 0x9c5fa8ed, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xec745ac5, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xd26a3a5c, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lis3lv02d";

MODULE_ALIAS("of:N*T*Cst,lis302dl-spi");
MODULE_ALIAS("of:N*T*Cst,lis302dl-spiC*");
