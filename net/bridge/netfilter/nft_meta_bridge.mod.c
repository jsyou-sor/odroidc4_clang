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
	{ 0xdedf0d8d, __VMLINUX_SYMBOL_STR(nft_meta_set_validate) },
	{ 0x48e2e436, __VMLINUX_SYMBOL_STR(nft_meta_set_dump) },
	{ 0x3763b5b2, __VMLINUX_SYMBOL_STR(nft_meta_set_destroy) },
	{ 0xea1c2b66, __VMLINUX_SYMBOL_STR(nft_meta_set_init) },
	{ 0x5cbd3775, __VMLINUX_SYMBOL_STR(nft_meta_set_eval) },
	{ 0x79d58975, __VMLINUX_SYMBOL_STR(nft_meta_get_dump) },
	{ 0xb80e8358, __VMLINUX_SYMBOL_STR(nft_meta_policy) },
	{ 0x8f241225, __VMLINUX_SYMBOL_STR(nft_meta_get_init) },
	{ 0xa594ee6c, __VMLINUX_SYMBOL_STR(nft_validate_register_store) },
	{ 0x1e6b75a3, __VMLINUX_SYMBOL_STR(nft_parse_register) },
	{ 0x9fc1df72, __VMLINUX_SYMBOL_STR(nft_meta_get_eval) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xc3c2e8b, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0xaf9a1071, __VMLINUX_SYMBOL_STR(nft_register_expr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_meta,nf_tables";

