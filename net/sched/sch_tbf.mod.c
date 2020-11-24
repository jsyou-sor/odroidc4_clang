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
	{ 0x2b392cf1, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x6e9419cf, __VMLINUX_SYMBOL_STR(fifo_create_dflt) },
	{ 0x31b1d630, __VMLINUX_SYMBOL_STR(bfifo_qdisc_ops) },
	{ 0x40571b32, __VMLINUX_SYMBOL_STR(fifo_set_limit) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x45452cf0, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xb77131b1, __VMLINUX_SYMBOL_STR(psched_ratecfg_precompute) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x521b36b5, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0xed597524, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xdc22eed4, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x2dd8060e, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xed8ed04, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x3e1f8ab1, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x39240091, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0x63f9505c, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf6257859, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xccf8d25a, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xdb70ac43, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x7b81f4b, __VMLINUX_SYMBOL_STR(netif_skb_features) },
	{ 0x3195591c, __VMLINUX_SYMBOL_STR(skb_gso_transport_seglen) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xa5e844fc, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x236bddb0, __VMLINUX_SYMBOL_STR(register_qdisc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

