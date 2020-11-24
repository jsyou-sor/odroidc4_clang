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
	{ 0xcabb4d72, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x124a959c, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x9a02c828, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x6ae09e8a, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6f7d8599, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x16a27738, __VMLINUX_SYMBOL_STR(virtqueue_detach_unused_buf) },
	{ 0xd31eee44, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0xf5be1f5c, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa2996572, __VMLINUX_SYMBOL_STR(__napi_alloc_skb) },
	{ 0xaa2a6413, __VMLINUX_SYMBOL_STR(virtqueue_get_vring_size) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe1ca09dc, __VMLINUX_SYMBOL_STR(skb_partial_csum_set) },
	{ 0x1c3ab91a, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x6dacc863, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x7c8f4d32, __VMLINUX_SYMBOL_STR(skb_coalesce_rx_frag) },
	{ 0xa4558978, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0xde2110e1, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0x92a32265, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x189686c9, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xe9f9d658, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0x454290bb, __VMLINUX_SYMBOL_STR(skb_page_frag_refill) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x1e5ca536, __VMLINUX_SYMBOL_STR(virtqueue_poll) },
	{ 0x995ba309, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb_prepare) },
	{ 0x82e9abdf, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xf95df3ec, __VMLINUX_SYMBOL_STR(eth_commit_mac_addr_change) },
	{ 0x40b8b2fc, __VMLINUX_SYMBOL_STR(eth_prepare_mac_addr_change) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x70db45f1, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x145bdbe2, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xa0fd0a31, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb_delayed) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x46aa013d, __VMLINUX_SYMBOL_STR(virtqueue_add_outbuf) },
	{ 0x86be9089, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0x905f06b, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xe29376a8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfccbb30, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xb8d7f4b5, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x8582e4af, __VMLINUX_SYMBOL_STR(napi_hash_del) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xf1776c24, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x64cb6866, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x2bff9a61, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0x985f9294, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x4e05996a, __VMLINUX_SYMBOL_STR(netdev_notify_peers) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xf7c4a42c, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x99730ed3, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xc0b3ea35, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc9fb6ea8, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xe79667c2, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xf315ed53, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x766d9ec8, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x8870b56b, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xe31b2cb1, __VMLINUX_SYMBOL_STR(__cpuhp_state_remove_instance) },
	{ 0xead19ee6, __VMLINUX_SYMBOL_STR(__cpuhp_state_add_instance) },
	{ 0x4ee61d4b, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x8728608d, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0xb9aa4d54, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0x8e3f011a, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x623eb197, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x10eabbca, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x6c0cefc7, __VMLINUX_SYMBOL_STR(netif_set_xps_queue) },
	{ 0xcb6fcf78, __VMLINUX_SYMBOL_STR(cpu_bit_bitmap) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x16624d6e, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x78fe653a, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x2c4df76a, __VMLINUX_SYMBOL_STR(__cpuhp_remove_state) },
	{ 0x68527ae7, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x8b09c311, __VMLINUX_SYMBOL_STR(__cpuhp_setup_state) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("virtio:d00000001v*");
