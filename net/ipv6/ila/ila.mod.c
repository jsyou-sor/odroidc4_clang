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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xcc385d21, __VMLINUX_SYMBOL_STR(lwtunnel_encap_del_ops) },
	{ 0x96542273, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xce38c82a, __VMLINUX_SYMBOL_STR(rhashtable_walk_exit) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2f48b611, __VMLINUX_SYMBOL_STR(lwtunnel_encap_add_ops) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x3e18a9c8, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xa29445ea, __VMLINUX_SYMBOL_STR(rhashtable_walk_next) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x896893da, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xba2c14ca, __VMLINUX_SYMBOL_STR(rhashtable_insert_slow) },
	{ 0xee06d68b, __VMLINUX_SYMBOL_STR(lwtunnel_state_alloc) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x98ab764, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xa0281b53, __VMLINUX_SYMBOL_STR(rhashtable_walk_start) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x6423d101, __VMLINUX_SYMBOL_STR(rhashtable_free_and_destroy) },
	{ 0x8e3f011a, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x82584e47, __VMLINUX_SYMBOL_STR(rhashtable_walk_stop) },
	{ 0xb87cd7ff, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x40e9fd6, __VMLINUX_SYMBOL_STR(nf_unregister_net_hooks) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xcbeda7a5, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1bca7d7e, __VMLINUX_SYMBOL_STR(nf_register_net_hooks) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9ffd55b5, __VMLINUX_SYMBOL_STR(rhashtable_walk_enter) },
	{ 0x4f16d27e, __VMLINUX_SYMBOL_STR(rhashtable_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf20a600b, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xf238aa71, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace_by_diff) },
	{ 0x2b392cf1, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x85e1f1, __VMLINUX_SYMBOL_STR(__do_once_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

