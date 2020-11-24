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
	{ 0xf58efa4c, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0xe953a301, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0xf21674bc, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xee62abac, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x2da1c1d1, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xe30ec0f2, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xc123dd27, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x7e5367ca, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0x79805128, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x75db531f, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xbe8aca08, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xf4a27bab, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x78a1a503, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xe0945577, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x59b52064, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa9564732, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x1211020c, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";

