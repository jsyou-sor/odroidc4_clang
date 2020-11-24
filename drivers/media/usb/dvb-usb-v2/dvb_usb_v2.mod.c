#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x643ef0d4, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc6d9da10, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x8e970371, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xb4d921d, __VMLINUX_SYMBOL_STR(dvb_create_media_graph) },
	{ 0xe31fd6cb, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0x6867a100, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xc33baa06, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0xb368a1f8, __VMLINUX_SYMBOL_STR(__media_device_usb_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xa7b1a489, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x26745ed3, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x5c4452d7, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x4c73dc34, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x7cb154ce, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x1bd4f401, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x6e1d0ec4, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_raw) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4d7c8496, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe4cf9d39, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd942f8bf, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x57717e85, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd99e627c, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x139a8d20, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xcb3bf36e, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0xb469f2eb, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_204) },
	{ 0x38271127, __VMLINUX_SYMBOL_STR(media_device_cleanup) },
	{ 0x6d162e58, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x16e297c3, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5a1e4d3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x8c7a884f, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x845cec13, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe8a73aaf, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0xa04fcbb6, __VMLINUX_SYMBOL_STR(__media_device_register) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xc7c4e17d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2c834fec, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x5b1f65b9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xfa3022a1, __VMLINUX_SYMBOL_STR(media_device_unregister) },
	{ 0x6c049048, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x609c8d61, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xa808161e, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B48D772FD4CD86C536DE815");
