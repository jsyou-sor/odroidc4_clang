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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x28ed3cd0, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x29f1e25e, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0xe80da060, __VMLINUX_SYMBOL_STR(gspca_expo_autogain) },
	{ 0x6ce1359c, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0x3969ac20, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x2520af5b, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0x9cc1945c, __VMLINUX_SYMBOL_STR(gspca_coarse_grained_expo_autogain) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3251f9ea, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x414ab6a7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4cc10cb5, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0x3dcc1906, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v046DpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0502pD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052BpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A5p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A5pD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A5pD800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0728pD001d*dc*dsc*dp*ic*isc*ip*in*");
