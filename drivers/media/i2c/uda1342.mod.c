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
	{ 0x27d1a107, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x95d8d9c3, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0x4ba47e67, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7f996084, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x6f83ec00, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:uda1342");
