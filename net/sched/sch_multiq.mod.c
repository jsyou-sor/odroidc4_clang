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
	{ 0x879fe6ab, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0xa42fe987, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x496c0621, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x5036cdcd, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf6257859, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdc22eed4, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xbfd7ffc9, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0xed8ed04, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x3e1f8ab1, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xccf8d25a, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x9609a71f, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xa5e844fc, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x236bddb0, __VMLINUX_SYMBOL_STR(register_qdisc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

