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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x6fe84350, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0xcabb4d72, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x7e2180cd, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xb9c3f7f5, __VMLINUX_SYMBOL_STR(iov_iter_npages) },
	{ 0x2f5f2a57, __VMLINUX_SYMBOL_STR(rps_sock_flow_table) },
	{ 0x438610bd, __VMLINUX_SYMBOL_STR(security_tun_dev_alloc_security) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x39461d6a, __VMLINUX_SYMBOL_STR(in_egroup_p) },
	{ 0x27330d06, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xceb49aaa, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xe7b84118, __VMLINUX_SYMBOL_STR(skb_copy_datagram_from_iter) },
	{ 0xd25e16e3, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xf7e266c6, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0xc9fb6ea8, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x5072e533, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xe79667c2, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x692ad9b, __VMLINUX_SYMBOL_STR(sock_alloc_send_pskb) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0xb6a0ad25, __VMLINUX_SYMBOL_STR(sk_detach_filter) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x77770a26, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0xe1ca09dc, __VMLINUX_SYMBOL_STR(skb_partial_csum_set) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xda3d10a8, __VMLINUX_SYMBOL_STR(security_tun_dev_open) },
	{ 0xb0d83e9, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0x4bb638ec, __VMLINUX_SYMBOL_STR(skb_copy_ubufs) },
	{ 0x94e7ec90, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x6ea1602e, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x7eba7a56, __VMLINUX_SYMBOL_STR(__f_setown) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe440ee5a, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x9be7bde4, __VMLINUX_SYMBOL_STR(security_tun_dev_attach) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfe9b5321, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xe55ecd02, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x8e3f011a, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xa4ec26b0, __VMLINUX_SYMBOL_STR(dev_get_valid_name) },
	{ 0x64cb6866, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x2a1c095f, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x2bff9a61, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x6091644e, __VMLINUX_SYMBOL_STR(flow_keys_dissector) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x8ffc438c, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x124a959c, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x4755c8ed, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xfe40fbb9, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xc27ecc8e, __VMLINUX_SYMBOL_STR(sock_recv_errqueue) },
	{ 0xe2f425e7, __VMLINUX_SYMBOL_STR(rps_cpu_mask) },
	{ 0xf315ed53, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x478dd5be, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x50097088, __VMLINUX_SYMBOL_STR(security_tun_dev_free_security) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xbe082271, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x8728608d, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x2ee24a50, __VMLINUX_SYMBOL_STR(sk_attach_filter) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xb9aa4d54, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x98c07fdb, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x2e974295, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x4a5d6822, __VMLINUX_SYMBOL_STR(sk_filter_trim_cap) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x71fd3b7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xe9104bba, __VMLINUX_SYMBOL_STR(__wake_up_sync_key) },
	{ 0x84eb4437, __VMLINUX_SYMBOL_STR(rps_needed) },
	{ 0x3ec92cb7, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6ae09e8a, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0xf904b6cc, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x6dacc863, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0x34f3484e, __VMLINUX_SYMBOL_STR(security_tun_dev_attach_queue) },
	{ 0x7cbe2ec5, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x13c85b18, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x1b69cf76, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xe820b269, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x9a02c828, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x9bc6ef31, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd2999508, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x92d81941, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xd55b0109, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x1108e82c, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x4f1cd128, __VMLINUX_SYMBOL_STR(security_tun_dev_create) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x19820f9, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x905f06b, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xcf87ad4b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x1d01532b, __VMLINUX_SYMBOL_STR(zerocopy_sg_from_iter) },
	{ 0xe9bd654c, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

