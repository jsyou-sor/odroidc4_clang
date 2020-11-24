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
	{ 0x43377f4b, __VMLINUX_SYMBOL_STR(tcp_tso_autosize) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xfe719995, __VMLINUX_SYMBOL_STR(minmax_running_max) },
	{ 0x1ee0350a, __VMLINUX_SYMBOL_STR(tcp_mss_to_mtu) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x63b032c0, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0xd336052f, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

