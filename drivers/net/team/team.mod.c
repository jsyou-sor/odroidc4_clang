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
	{ 0x7ea0aef4, __VMLINUX_SYMBOL_STR(dev_mc_sync_multiple) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x36d127bb, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2d4fc788, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd09ba94c, __VMLINUX_SYMBOL_STR(dev_disable_lro) },
	{ 0x3e18a9c8, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xe8983bea, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xf470f5e, __VMLINUX_SYMBOL_STR(vlan_uses_dev) },
	{ 0xd8a808c7, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_setlink) },
	{ 0x8f036cec, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_dump) },
	{ 0xc9fb6ea8, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x53e1b6a8, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xe79667c2, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x78599d7a, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x8ddf1d42, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0x31ff8625, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xe29376a8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x896893da, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x5441cf1e, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0x1b8512d3, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0x2b5d62bc, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_del) },
	{ 0x3d585db9, __VMLINUX_SYMBOL_STR(vlan_vids_del_by_dev) },
	{ 0xb246d7fc, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_getlink) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x7982b3df, __VMLINUX_SYMBOL_STR(vlan_vids_add_by_dev) },
	{ 0xb35ea4c0, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link) },
	{ 0x9d3e58d5, __VMLINUX_SYMBOL_STR(netdev_lower_state_changed) },
	{ 0x8acbddee, __VMLINUX_SYMBOL_STR(netdev_change_features) },
	{ 0xecea36c3, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xe5ad3943, __VMLINUX_SYMBOL_STR(netdev_has_upper_dev) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xe55ecd02, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x8e3f011a, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x68a82048, __VMLINUX_SYMBOL_STR(__ethtool_get_link_ksettings) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x124a959c, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xf315ed53, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x21a3371, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x25510d26, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x2f92d949, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xf4f14de6, __VMLINUX_SYMBOL_STR(rtnl_trylock) },
	{ 0xcbeda7a5, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x5baef144, __VMLINUX_SYMBOL_STR(dev_mc_flush) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x2e974295, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x1646513a, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xbb71a13d, __VMLINUX_SYMBOL_STR(dev_uc_flush) },
	{ 0x71fd3b7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xcfc68341, __VMLINUX_SYMBOL_STR(synchronize_rcu_bh) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x371a386e, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x50bde9dc, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6ae09e8a, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0x74a9334e, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x7cbe2ec5, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x563769b9, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7a7e55ee, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_add) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xe7de671e, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x52e778b3, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x263efc1f, __VMLINUX_SYMBOL_STR(dev_uc_sync_multiple) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf20a600b, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xd2999508, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x27fc2c88, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_dellink) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7e4cc618, __VMLINUX_SYMBOL_STR(netdev_default_l2upper_neigh_construct) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xdbf936a7, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x9bed550f, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xdffc1e0d, __VMLINUX_SYMBOL_STR(__netpoll_cleanup) },
	{ 0x35fa68b5, __VMLINUX_SYMBOL_STR(netdev_default_l2upper_neigh_destroy) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
	{ 0x8bb66f67, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x72bc4756, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

