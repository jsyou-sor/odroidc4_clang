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
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2b392cf1, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x9e763530, __VMLINUX_SYMBOL_STR(reciprocal_value) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xdc22eed4, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x2dd8060e, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xed8ed04, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xca8edbd5, __VMLINUX_SYMBOL_STR(rtnl_kfree_skbs) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x39240091, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0x63f9505c, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0xf69dd852, __VMLINUX_SYMBOL_STR(kfree_skb_list) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1cbbfc90, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x2d96b26e, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xf6257859, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xccf8d25a, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xdf2c2742, __VMLINUX_SYMBOL_STR(rb_last) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xdb70ac43, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x7b81f4b, __VMLINUX_SYMBOL_STR(netif_skb_features) },
	{ 0x53e1b6a8, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x8cc76bb3, __VMLINUX_SYMBOL_STR(skb_orphan_partial) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xa5e844fc, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x236bddb0, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

