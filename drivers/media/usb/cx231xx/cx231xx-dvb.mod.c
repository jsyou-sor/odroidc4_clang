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
	{ 0x4d7479cb, __VMLINUX_SYMBOL_STR(cx231xx_uninit_bulk) },
	{ 0x607171c, __VMLINUX_SYMBOL_STR(cx231xx_uninit_isoc) },
	{ 0x9a3f7e7e, __VMLINUX_SYMBOL_STR(cx231xx_init_bulk) },
	{ 0x9dcb0645, __VMLINUX_SYMBOL_STR(cx231xx_init_isoc) },
	{ 0x2551e689, __VMLINUX_SYMBOL_STR(cx231xx_set_alt_setting) },
	{ 0x71fd3b7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x8e970371, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x26745ed3, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xcb3bf36e, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0xe4cf9d39, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x4c73dc34, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x985f9294, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb4d921d, __VMLINUX_SYMBOL_STR(dvb_create_media_graph) },
	{ 0x57717e85, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xa808161e, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xc6d9da10, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x6867a100, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x845cec13, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x1bd4f401, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xa35f3d03, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x17ea7c7, __VMLINUX_SYMBOL_STR(cx231xx_tuner_callback) },
	{ 0x8bb66f67, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x92a192f5, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x9c4f80ea, __VMLINUX_SYMBOL_STR(cx231xx_demod_reset) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc8c711ce, __VMLINUX_SYMBOL_STR(cx231xx_set_mode) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7218e9e0, __VMLINUX_SYMBOL_STR(cx231xx_get_i2c_adap) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1571cfb7, __VMLINUX_SYMBOL_STR(cx231xx_unregister_extension) },
	{ 0x29beed06, __VMLINUX_SYMBOL_STR(cx231xx_register_extension) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx";

