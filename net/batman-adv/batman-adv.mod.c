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
	{ 0xe6be23f6, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x9a694f4d, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x117c9c78, __VMLINUX_SYMBOL_STR(kobject_get) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x3c235ad0, __VMLINUX_SYMBOL_STR(skb_seq_read) },
	{ 0x96816e87, __VMLINUX_SYMBOL_STR(pskb_trim_rcsum_slow) },
	{ 0x86fc946d, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xf410d6f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x16a3f493, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0xa55983f8, __VMLINUX_SYMBOL_STR(skb_split) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x3e18a9c8, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xad687a9d, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xaa7c1a41, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xf7e266c6, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x8023371c, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x53e1b6a8, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x76256f3f, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x2d96b26e, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xa22c9f04, __VMLINUX_SYMBOL_STR(___might_sleep) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x90dc0a43, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get) },
	{ 0x27b8005f, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get_rcu) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xe29376a8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x896893da, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xb984ce95, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x148ef06a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x390d237f, __VMLINUX_SYMBOL_STR(debugfs_rename) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x261211c8, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x7bafa862, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x4881912f, __VMLINUX_SYMBOL_STR(br_multicast_list_adjacent) },
	{ 0x50d188e2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xf7fe6da6, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xfaba39c4, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xb35ea4c0, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link) },
	{ 0x189686c9, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x3dea0504, __VMLINUX_SYMBOL_STR(ip_mc_check_igmp) },
	{ 0xb142af01, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x98ab764, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfb6bc236, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xaccbafd5, __VMLINUX_SYMBOL_STR(br_multicast_has_querier_anywhere) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfe9b5321, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x8e3f011a, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x4a38b698, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x68a82048, __VMLINUX_SYMBOL_STR(__ethtool_get_link_ksettings) },
	{ 0xcadae3b1, __VMLINUX_SYMBOL_STR(arp_create) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa050ab6e, __VMLINUX_SYMBOL_STR(skb_prepare_seq_read) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0xf315ed53, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xa4511467, __VMLINUX_SYMBOL_STR(crc16) },
	{ 0x21a3371, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x72bfbc53, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x2f92d949, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xb2df9035, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xcbeda7a5, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x965e203e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2e974295, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xcbd4001e, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x952664c5, __VMLINUX_SYMBOL_STR(do_exit) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x98dc9cb2, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x71fd3b7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x9c3d85e6, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xde48538b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x371a386e, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x26a0a9e6, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xf904b6cc, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x6dacc863, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x9769c334, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xe50c61dc, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x13dbf41b, __VMLINUX_SYMBOL_STR(param_set_copystring) },
	{ 0x7cbe2ec5, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x3201efa2, __VMLINUX_SYMBOL_STR(__pskb_copy_fclone) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xa99f007b, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0xd7ce2481, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x1b69cf76, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x9a02c828, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x6dbd491f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x7d874df8, __VMLINUX_SYMBOL_STR(dev_get_iflink) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf20a600b, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xd2999508, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2b392cf1, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0xabdf53a4, __VMLINUX_SYMBOL_STR(br_multicast_has_querier_adjacent) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x46d856db, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xb2e6842e, __VMLINUX_SYMBOL_STR(param_get_string) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x3f9f9927, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0xdbf936a7, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc16ee1b5, __VMLINUX_SYMBOL_STR(ipv6_mc_check_mld) },
	{ 0x8a190ea5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xfcb8f89c, __VMLINUX_SYMBOL_STR(cfg80211_get_station) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x8bb66f67, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge";


MODULE_INFO(srcversion, "34905351EDF77F04B5B888E");
