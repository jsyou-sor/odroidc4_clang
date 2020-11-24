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
	{ 0xc71cd3bb, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x9cf90823, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0x438a1873, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x795c6ec0, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0xcadfb5b, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x65634411, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x6bf7c9e6, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xadb8d710, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0x234c4a00, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

