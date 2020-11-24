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
	{ 0xe8cf0d39, __VMLINUX_SYMBOL_STR(nft_do_chain) },
	{ 0x901529c9, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x53be11ea, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_out) },
	{ 0xbba6318f, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_local_fn) },
	{ 0x3e79ff84, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_fn) },
	{ 0x9a217279, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_in) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xa14a674a, __VMLINUX_SYMBOL_STR(nft_unregister_chain_type) },
	{ 0x386a7252, __VMLINUX_SYMBOL_STR(nft_register_chain_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_nat_ipv6";

