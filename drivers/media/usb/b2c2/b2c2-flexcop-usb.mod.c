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
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa7b1a489, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x3453b576, __VMLINUX_SYMBOL_STR(flexcop_device_initialize) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7339c124, __VMLINUX_SYMBOL_STR(flexcop_device_kfree) },
	{ 0x344f20d9, __VMLINUX_SYMBOL_STR(flexcop_sram_ctrl) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x27cbce6f, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x3251f9ea, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xce6f47ca, __VMLINUX_SYMBOL_STR(flexcop_device_kmalloc) },
	{ 0x139a8d20, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x5a1e4d3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x850745b6, __VMLINUX_SYMBOL_STR(flexcop_sram_set_dest) },
	{ 0x4f82cf1a, __VMLINUX_SYMBOL_STR(flexcop_pass_dmx_packets) },
	{ 0x5301a28b, __VMLINUX_SYMBOL_STR(flexcop_wan_set_speed) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x2c834fec, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x5b1f65b9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x31913578, __VMLINUX_SYMBOL_STR(flexcop_device_exit) },
	{ 0x609c8d61, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=b2c2-flexcop";

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");
