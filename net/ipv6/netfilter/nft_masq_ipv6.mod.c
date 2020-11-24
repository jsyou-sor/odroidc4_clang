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
	{ 0x6efa8273, __VMLINUX_SYMBOL_STR(nft_masq_validate) },
	{ 0x6fad0ae, __VMLINUX_SYMBOL_STR(nft_masq_dump) },
	{ 0x89de97cd, __VMLINUX_SYMBOL_STR(nft_masq_init) },
	{ 0xe3b8ea21, __VMLINUX_SYMBOL_STR(nft_masq_policy) },
	{ 0xb5be634a, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv6) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x2293972c, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv6_unregister_notifier) },
	{ 0xc3c2e8b, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0x38d4401a, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv6_register_notifier) },
	{ 0xaf9a1071, __VMLINUX_SYMBOL_STR(nft_register_expr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_masq,nf_nat_masquerade_ipv6,nf_tables";

