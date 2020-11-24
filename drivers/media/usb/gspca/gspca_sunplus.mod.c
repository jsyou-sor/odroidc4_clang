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
	{ 0x29f1e25e, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x6ce1359c, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0x3969ac20, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x2520af5b, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3251f9ea, __VMLINUX_SYMBOL_STR(usb_control_msg) },
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

MODULE_ALIAS("usb:v041Ep400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0461p0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0905d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0960d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0322d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p3003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p300Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp500Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp504Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp504Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp5330d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp5360d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCpFFFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1507d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3155d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3273d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC230d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC232d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC360d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC420d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC430d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC440d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC520d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC540d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC630d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC650d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp1018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p1311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p1314d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p2211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p2221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p3261d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p3281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0303d*dc*dsc*dp*ic*isc*ip*in*");
