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
	{ 0xea124bd1, __VMLINUX_SYMBOL_STR(gcd) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7f40c683, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x27d1a107, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa84f27f6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x414ab6a7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x3969ac20, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x3dcc1906, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x61d010a3, __VMLINUX_SYMBOL_STR(v4l2_spi_subdev_init) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xec745ac5, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xd26a3a5c, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:msi001");
