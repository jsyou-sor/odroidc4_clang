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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x15fe3c83, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x575b6af0, __VMLINUX_SYMBOL_STR(fbtft_remove_common) },
	{ 0x6bcbea62, __VMLINUX_SYMBOL_STR(fbtft_probe_common) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x8c12880d, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xec745ac5, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x7bd5ec57, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xd26a3a5c, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";

MODULE_ALIAS("of:N*T*Cilitek,ili9340");
MODULE_ALIAS("of:N*T*Cilitek,ili9340C*");
