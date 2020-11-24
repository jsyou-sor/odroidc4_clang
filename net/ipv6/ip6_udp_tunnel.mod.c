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
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x4b090bc4, __VMLINUX_SYMBOL_STR(udp6_set_csum) },
	{ 0xc71cd3bb, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x438a1873, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0xeb49cfff, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0x795c6ec0, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0x65634411, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x234c4a00, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x48d0b7e, __VMLINUX_SYMBOL_STR(ip6_local_out) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

