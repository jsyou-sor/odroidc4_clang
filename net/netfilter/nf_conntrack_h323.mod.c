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
	{ 0x6db99ae1, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x950d7e01, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9a52f63b, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0xdff6251c, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x52667c0e, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0x3ad9298, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7f631fd9, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd6a80d7e, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x9f4ddf5f, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xa0e8972e, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xbc01b7ac, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0xaa0bf0c3, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x32f30d6a, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x3c011a44, __VMLINUX_SYMBOL_STR(nf_afinfo) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6eca4d4f, __VMLINUX_SYMBOL_STR(mod_timer_pending) },
	{ 0x223fa293, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x8a190ea5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";

