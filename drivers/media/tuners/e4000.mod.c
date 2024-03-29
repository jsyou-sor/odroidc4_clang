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
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x6afc48a6, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0x1fb137e4, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4ba47e67, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa84f27f6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x414ab6a7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x3969ac20, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x3dcc1906, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xf81e0711, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x1a491f15, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x7b56295a, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7f996084, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x6f83ec00, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:e4000");
