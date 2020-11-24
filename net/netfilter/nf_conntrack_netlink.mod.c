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
	{ 0x991cb6b0, __VMLINUX_SYMBOL_STR(nf_ct_tcp_seqadj_set) },
	{ 0x887030cd, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0x6be52fce, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0xcc1f634e, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0xa94ffe9f, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0x177c0175, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0x4f84a343, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0x7732e2f4, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0x3b1a9cb6, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0x85e1f1, __VMLINUX_SYMBOL_STR(__do_once_done) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xdb8b9061, __VMLINUX_SYMBOL_STR(siphash_4u64) },
	{ 0x163b33e5, __VMLINUX_SYMBOL_STR(__siphash_aligned) },
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0xc6d9935, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0x9f4ddf5f, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xec8beba6, __VMLINUX_SYMBOL_STR(nf_ct_expect_hash) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0xdaec02aa, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0x75a8db9, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0xd6a80d7e, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xa0e8972e, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xbc01b7ac, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x8e3f011a, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x2b392cf1, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xfd27fa63, __VMLINUX_SYMBOL_STR(nf_conntrack_lock) },
	{ 0x28eff409, __VMLINUX_SYMBOL_STR(nf_conntrack_hash) },
	{ 0x585ef5fa, __VMLINUX_SYMBOL_STR(nf_conntrack_locks) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0x6db99ae1, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0x3c622289, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0xdc8e172e, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xafdbdcf8, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x9bed550f, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9390c90b, __VMLINUX_SYMBOL_STR(nf_ct_iterate_cleanup) },
	{ 0xe068e2f0, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0x252baaae, __VMLINUX_SYMBOL_STR(nf_ct_get_id) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xcbeda7a5, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xff3de686, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd9bb83e1, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0x8929e475, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xb38d9824, __VMLINUX_SYMBOL_STR(nf_conntrack_eventmask_report) },
	{ 0xce5bb3e8, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0xac7b25c8, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xde845087, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x3b0e0179, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0x7a7d9a17, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x24a045dc, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8c7d64a1, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xaa0bf0c3, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0x1360e81e, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x7a156c4, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x6fab90ec, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0xbb2d1e8c, __VMLINUX_SYMBOL_STR(nfnl_ct_hook) },
	{ 0x2989a348, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x509aa666, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";

