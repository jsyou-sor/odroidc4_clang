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
	{ 0x1e6b75a3, __VMLINUX_SYMBOL_STR(nft_parse_register) },
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x3283e6b0, __VMLINUX_SYMBOL_STR(prandom_seed_full_state) },
	{ 0x27330d06, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x61543237, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xb0d83e9, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0xaf9a1071, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0xa594ee6c, __VMLINUX_SYMBOL_STR(nft_validate_register_store) },
	{ 0x33c7435c, __VMLINUX_SYMBOL_STR(prandom_u32_state) },
	{ 0xe48adc81, __VMLINUX_SYMBOL_STR(nft_chain_validate_hooks) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x85430a76, __VMLINUX_SYMBOL_STR(nft_validate_register_load) },
	{ 0xc3c2e8b, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0xecf823a, __VMLINUX_SYMBOL_STR(static_key_slow_dec) },
	{ 0x34ed28b0, __VMLINUX_SYMBOL_STR(nft_trace_enabled) },
	{ 0xe11f3cbc, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x1fcf4d4b, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xb8a0e4e6, __VMLINUX_SYMBOL_STR(nft_dump_register) },
	{ 0x368f1fea, __VMLINUX_SYMBOL_STR(static_key_slow_inc) },
	{ 0x8a190ea5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x85e1f1, __VMLINUX_SYMBOL_STR(__do_once_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";

