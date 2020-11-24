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
	{ 0x71c2458d, __VMLINUX_SYMBOL_STR(tcp_reno_ssthresh) },
	{ 0x2879b306, __VMLINUX_SYMBOL_STR(tcp_reno_cong_avoid) },
	{ 0x223fa293, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xa96c8a33, __VMLINUX_SYMBOL_STR(tcp_enter_quickack_mode) },
	{ 0xec3aab6a, __VMLINUX_SYMBOL_STR(__tcp_send_ack) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x63b032c0, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0xd336052f, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

