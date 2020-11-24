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
	{ 0x182446a2, __VMLINUX_SYMBOL_STR(nft_reject_validate) },
	{ 0x681bfc04, __VMLINUX_SYMBOL_STR(nft_reject_dump) },
	{ 0xfdad9ec1, __VMLINUX_SYMBOL_STR(nft_reject_init) },
	{ 0xa2db3c7f, __VMLINUX_SYMBOL_STR(nft_reject_policy) },
	{ 0xd3cf1b92, __VMLINUX_SYMBOL_STR(nf_send_reset6) },
	{ 0x569adc9b, __VMLINUX_SYMBOL_STR(nf_send_unreach6) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xc3c2e8b, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0xaf9a1071, __VMLINUX_SYMBOL_STR(nft_register_expr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_reject,nf_reject_ipv6,nf_tables";
