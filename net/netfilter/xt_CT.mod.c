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
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xf10add09, __VMLINUX_SYMBOL_STR(nf_ct_timeout_put_hook) },
	{ 0x71fd3b7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xac7b25c8, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0xd61bb6bb, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_free) },
	{ 0xca01f8c6, __VMLINUX_SYMBOL_STR(nf_ct_timeout_find_get_hook) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x7a7d9a17, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x8fb4e968, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0xde845087, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0xfea651e5, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_alloc) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdcadddd, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x27954ff3, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x1b662bb4, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xee1091e, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x69af5ccd, __VMLINUX_SYMBOL_STR(xt_register_target) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,x_tables";

