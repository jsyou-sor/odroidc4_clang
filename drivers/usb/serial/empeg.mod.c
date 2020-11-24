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
	{ 0x9dad83e, __VMLINUX_SYMBOL_STR(usb_serial_generic_unthrottle) },
	{ 0x8d4135dc, __VMLINUX_SYMBOL_STR(usb_serial_generic_throttle) },
	{ 0x1afa9123, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdbeabf07, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7518ca6d, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x3240ea00, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v084Fp0001d*dc*dsc*dp*ic*isc*ip*in*");
