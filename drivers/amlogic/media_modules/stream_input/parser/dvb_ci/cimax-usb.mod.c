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
	{ 0x560f066, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x637ae1d0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xcfbfcaa6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xbfb0e90f, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x47bffea2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xfeac2337, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x9568c6b0, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2e2b40d2, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0xf619cc5d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xd0d2ef6c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xc4c4fd7c, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xb9f0e972, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x3c5455de, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0x636d34ce, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x20d7a862, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x76984df1, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x48a97558, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x51a00e52, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x6b5e91b6, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xeb5daefc, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x545feeb3, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x42cdb935, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x25547cf0, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x507b4b51, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x263c3152, __VMLINUX_SYMBOL_STR(bcmp) },
	{ 0xe689f68d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1B0Dp2F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B0Dp2F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B0Dp2F02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B0Dp2F03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B0Dp2F04d*dc*dsc*dp*ic*isc*ip*in*");
