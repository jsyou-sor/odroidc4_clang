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
	{ 0x1e6b75a3, __VMLINUX_SYMBOL_STR(nft_parse_register) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x5c797afe, __VMLINUX_SYMBOL_STR(nft_chain_validate_dependency) },
	{ 0xe48adc81, __VMLINUX_SYMBOL_STR(nft_chain_validate_hooks) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x85430a76, __VMLINUX_SYMBOL_STR(nft_validate_register_load) },
	{ 0xb8a0e4e6, __VMLINUX_SYMBOL_STR(nft_dump_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";

