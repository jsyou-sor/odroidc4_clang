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
	{ 0x1c8ec71a, __VMLINUX_SYMBOL_STR(au8522_release_state) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd4ddfaa8, __VMLINUX_SYMBOL_STR(au8522_led_ctrl) },
	{ 0x31c7238a, __VMLINUX_SYMBOL_STR(au8522_writereg) },
	{ 0x99dbc81d, __VMLINUX_SYMBOL_STR(au8522_readreg) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf5233e82, __VMLINUX_SYMBOL_STR(au8522_i2c_gate_ctrl) },
	{ 0x27c52571, __VMLINUX_SYMBOL_STR(au8522_sleep) },
	{ 0xfc05fa07, __VMLINUX_SYMBOL_STR(au8522_analog_i2c_gate_ctrl) },
	{ 0xafa71f14, __VMLINUX_SYMBOL_STR(au8522_get_state) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd452b53f, __VMLINUX_SYMBOL_STR(au8522_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=au8522_common";

