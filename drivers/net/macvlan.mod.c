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
	{ 0xb7e1135, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc22d1c07, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2d4fc788, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x8936e279, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xf1ca2404, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x4b34a148, __VMLINUX_SYMBOL_STR(__dev_forward_skb) },
	{ 0x8ec586a9, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0xe8983bea, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0x3585324d, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x53e1b6a8, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xa22c9f04, __VMLINUX_SYMBOL_STR(___might_sleep) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x78599d7a, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x8ddf1d42, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0x31ff8625, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0x8e61ab16, __VMLINUX_SYMBOL_STR(linkwatch_fire_event) },
	{ 0x5441cf1e, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0x1b8512d3, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xb142af01, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xecea36c3, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfe9b5321, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xe55ecd02, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x8e3f011a, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xc43313f3, __VMLINUX_SYMBOL_STR(ip_check_defrag) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x68a82048, __VMLINUX_SYMBOL_STR(__ethtool_get_link_ksettings) },
	{ 0x124a959c, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x99e6f152, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0xf315ed53, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x81fbe9bb, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x21a3371, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x81d20933, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_dump) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2265f751, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x2e974295, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xcbd4001e, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x867d473, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x50bde9dc, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x6e3b68b9, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6ae09e8a, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0x181f9a3e, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0x7cbe2ec5, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x563769b9, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x1b69cf76, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x9a02c828, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x52e778b3, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x852bdd4c, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0xd2999508, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x487e7671, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x795a15e, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x19820f9, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0xec3e4f87, __VMLINUX_SYMBOL_STR(dev_queue_xmit_accel) },
	{ 0xdbf936a7, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x8e2aed2d, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
	{ 0x72bc4756, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

