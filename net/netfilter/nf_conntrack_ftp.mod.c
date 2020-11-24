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
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3889f0b7, __VMLINUX_SYMBOL_STR(nf_ct_helper_init) },
	{ 0x7f631fd9, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x537d7f95, __VMLINUX_SYMBOL_STR(nf_conntrack_helpers_register) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd6a80d7e, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x9f4ddf5f, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xa0e8972e, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x48ea10b0, __VMLINUX_SYMBOL_STR(nf_conntrack_helpers_unregister) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x32f30d6a, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf301b8ce, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xe57878a1, __VMLINUX_SYMBOL_STR(in6_pton) },
	{ 0x967d49fa, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x8a190ea5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";

