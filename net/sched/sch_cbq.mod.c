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
	{ 0xb73aaf8b, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x879fe6ab, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0xb85c57e4, __VMLINUX_SYMBOL_STR(gnet_stats_copy_rate_est) },
	{ 0xa42fe987, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x6bdcfd99, __VMLINUX_SYMBOL_STR(qdisc_class_hash_remove) },
	{ 0x38352f39, __VMLINUX_SYMBOL_STR(qdisc_class_hash_grow) },
	{ 0xc56a0a7f, __VMLINUX_SYMBOL_STR(gen_new_estimator) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2097460e, __VMLINUX_SYMBOL_STR(gen_replace_estimator) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf6257859, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x725cb16, __VMLINUX_SYMBOL_STR(gnet_stats_copy_app) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xf53d4c26, __VMLINUX_SYMBOL_STR(qdisc_class_hash_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x17b1125d, __VMLINUX_SYMBOL_STR(gen_kill_estimator) },
	{ 0xdc22eed4, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xbfd7ffc9, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0xed8ed04, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x3d3273b1, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x2dd8060e, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0x521b36b5, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0xa04a01bd, __VMLINUX_SYMBOL_STR(qdisc_class_hash_insert) },
	{ 0x40dbc442, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x39240091, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0x3e1f8ab1, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x496c0621, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x5036cdcd, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x117093be, __VMLINUX_SYMBOL_STR(qdisc_class_hash_init) },
	{ 0xed597524, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x63f9505c, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
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

