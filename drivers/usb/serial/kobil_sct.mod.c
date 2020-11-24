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
	{ 0x3564725c, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x7f1810a, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x1afa9123, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x30e74134, __VMLINUX_SYMBOL_STR(tty_termios_copy_hw) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa7b1a489, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x5a1e4d3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x3251f9ea, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7518ca6d, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x3240ea00, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0D46p2011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D46p2012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D46p0078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D46p0081d*dc*dsc*dp*ic*isc*ip*in*");
