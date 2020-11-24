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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xff200b83, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x103128c0, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0xd9970d9f, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9977b33, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe2431b4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x27cbce6f, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x165fa904, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0x3251f9ea, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xd987f12, __VMLINUX_SYMBOL_STR(rc_keyup) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf301b8ce, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xa9469d4d, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xaa6efc92, __VMLINUX_SYMBOL_STR(rc_repeat) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb";

MODULE_ALIAS("usb:v0DB0p5580d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp1513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp0514d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp0513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1498p9206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1498pA090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3219d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8F6B5FDBB94BC3F258A72A3");
