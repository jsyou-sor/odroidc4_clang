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
	{ 0x5e9dbb6d, __VMLINUX_SYMBOL_STR(lis3lv02d_poweroff) },
	{ 0x5c04da29, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x48c591cc, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xce2e0a54, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0x912e863e, __VMLINUX_SYMBOL_STR(lis3lv02d_remove_fs) },
	{ 0x137221a8, __VMLINUX_SYMBOL_STR(lis3lv02d_joystick_disable) },
	{ 0x78da7132, __VMLINUX_SYMBOL_STR(regulator_bulk_free) },
	{ 0x1f60e16b, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x749105fa, __VMLINUX_SYMBOL_STR(lis3lv02d_init_device) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xda8e55c2, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x330c7518, __VMLINUX_SYMBOL_STR(regulator_bulk_get) },
	{ 0x7bfa56a7, __VMLINUX_SYMBOL_STR(lis3lv02d_init_dt) },
	{ 0xb6be22ca, __VMLINUX_SYMBOL_STR(lis3_dev) },
	{ 0xac03ca52, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7f996084, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x6f83ec00, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lis3lv02d";

MODULE_ALIAS("of:N*T*Cst,lis3lv02d");
MODULE_ALIAS("of:N*T*Cst,lis3lv02dC*");
MODULE_ALIAS("i2c:lis3lv02d");
MODULE_ALIAS("i2c:lis331dlh");
