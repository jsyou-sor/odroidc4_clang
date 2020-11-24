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
	{ 0xa83c665b, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0xfa1eb477, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0xf21674bc, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xee62abac, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x2da1c1d1, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xb2ab07a5, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x606f75de, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x3ec92cb7, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x7e5367ca, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0x79805128, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x75db531f, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xa33295e0, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0xbe8aca08, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xf4a27bab, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xa2b43ec0, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0x78a1a503, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xd76cc6a5, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0x59b52064, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x92270d4a, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x1211020c, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,xfrm_ipcomp,xfrm6_tunnel";

