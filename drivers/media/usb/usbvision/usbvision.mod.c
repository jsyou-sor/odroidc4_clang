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
	{ 0x257995a3, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8386c46d, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xee254d21, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x416be1ce, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xb3ebf9aa, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x6814ea44, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xa84f27f6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x817ce597, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0xa7b1a489, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xede688dd, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x7cb154ce, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xfa36e568, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x86cd0890, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe2431b4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeabb157c, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x27cbce6f, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x4b0038cf, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x3251f9ea, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc1aa9897, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x139a8d20, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x6a408d5a, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0x288cdb65, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x6d162e58, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x5a1e4d3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xf5d8ca40, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0x6cb35b99, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x19b19677, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x278de0bd, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa0b04675, __VMLINUX_SYMBOL_STR(vmalloc_32) },
	{ 0xd4215deb, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xba7d18e8, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x3dcc1906, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfa4f6367, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x2c834fec, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x5b1f65b9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xd5e2ebf2, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xa0f8902b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x609c8d61, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0A6Fp0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0571p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2D00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2D01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4450d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4550d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D14d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D2Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D20d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D21d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D23d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D25d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D26d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D28d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D34d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D35d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D36d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D37d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0573p4D38d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0768p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07F8p9104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p010Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0214d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0419d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2400p4200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DC067BB4E033BCECBFF70C7");
