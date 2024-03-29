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
	{ 0x950d7e01, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x32f30d6a, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0xc3775132, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa0e8972e, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x1a96ace0, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xe06d62d6, __VMLINUX_SYMBOL_STR(nf_nat_irc_hook) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_nat,nf_conntrack_irc";

