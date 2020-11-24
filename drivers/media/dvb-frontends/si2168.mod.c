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
	{ 0x6c049048, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xc8c8663f, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xc7c4e17d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x38dbf0b8, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa382ffcf, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd1649179, __VMLINUX_SYMBOL_STR(i2c_mux_del_adapters) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xff4d4c53, __VMLINUX_SYMBOL_STR(i2c_mux_add_adapter) },
	{ 0x3d515307, __VMLINUX_SYMBOL_STR(i2c_mux_alloc) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
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

MODULE_ALIAS("i2c:si2168");