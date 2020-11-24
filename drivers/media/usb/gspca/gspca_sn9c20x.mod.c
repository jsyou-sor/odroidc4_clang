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
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x5c249465, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0x28ed3cd0, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0x29f1e25e, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x6ce1359c, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0x817ce597, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0x3969ac20, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2520af5b, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0x1a779f26, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3251f9ea, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1d901bb3, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0x414ab6a7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4cc10cb5, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0x3dcc1906, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa9469d4d, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v0C45p6240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p624Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p624Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p624Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6253d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6270d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p627Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p627Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p627Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6282d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6288d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p628Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p628Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p628Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62BBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62BCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v145Fp013Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p704Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p704Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0614d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0615d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0617d*dc*dsc*dp*ic*isc*ip*in*");
