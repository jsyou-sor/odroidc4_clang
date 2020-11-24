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
	{ 0xff4d4c53, __VMLINUX_SYMBOL_STR(i2c_mux_add_adapter) },
	{ 0x7f996084, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xf48d1815, __VMLINUX_SYMBOL_STR(regmap_multi_reg_write) },
	{ 0x968a0405, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xd1649179, __VMLINUX_SYMBOL_STR(i2c_mux_del_adapters) },
	{ 0x6afc48a6, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0x1fb137e4, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0x1a491f15, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xac4ca1b0, __VMLINUX_SYMBOL_STR(intlog2) },
	{ 0x3d515307, __VMLINUX_SYMBOL_STR(i2c_mux_alloc) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xa35f3d03, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x6f83ec00, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x7b56295a, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcc1ffe80, __VMLINUX_SYMBOL_STR(__i2c_transfer) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe5ae8707, __VMLINUX_SYMBOL_STR(intlog10) },
	{ 0xc7c4e17d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x985f9294, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf81e0711, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x92a192f5, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x6c049048, __VMLINUX_SYMBOL_STR(release_firmware) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:m88ds3103");
