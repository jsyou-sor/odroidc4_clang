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
	{ 0xf301b8ce, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x9977b33, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd942f8bf, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0xac020dd6, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0xd782a6c5, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0x27cbce6f, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x324b3877, __VMLINUX_SYMBOL_STR(up) },
	{ 0x360ff19f, __VMLINUX_SYMBOL_STR(down) },
	{ 0xc053e8c7, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0xc33baa06, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0xe31fd6cb, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0xda2600be, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8e970371, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x26745ed3, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xcb3bf36e, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0xe4cf9d39, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x4c73dc34, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0xb4d921d, __VMLINUX_SYMBOL_STR(dvb_create_media_graph) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x71fd3b7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x57717e85, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xa808161e, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xc6d9da10, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x6867a100, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x845cec13, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0xdb5e44fd, __VMLINUX_SYMBOL_STR(em28xx_write_reg_bits) },
	{ 0x1bd4f401, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xa35f3d03, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8bb66f67, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x92a192f5, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0xa382ffcf, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c84c9, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0xac4a8217, __VMLINUX_SYMBOL_STR(em28xx_gpio_set) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x574e28ef, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe51f033c, __VMLINUX_SYMBOL_STR(em28xx_alloc_urbs) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xcbbf7046, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0xfcbb216a, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx";


MODULE_INFO(srcversion, "73BC7BB4F10887C755A3DEA");
