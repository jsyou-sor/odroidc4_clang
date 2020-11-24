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
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xf3b6a6ab, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x901529c9, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x475f2225, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x9f60ad7f, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf8f5982b, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x31572211, __VMLINUX_SYMBOL_STR(inet6_lookup) },
	{ 0x232f8069, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x5e39d3d2, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x996f60f3, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0x1aff60f1, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x8a190ea5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x392599f, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv6,ipv6,nf_defrag_ipv4";

