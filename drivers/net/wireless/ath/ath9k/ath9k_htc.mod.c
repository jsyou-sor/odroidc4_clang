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
	{ 0x44f7a552, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1bb9c5ee, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x70082e52, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0x46e0ccab, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb5c8098f, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x21e0e3f0, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x36e70574, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x3398b406, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x5634491, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0xe5300e4, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x97368418, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0xa3966446, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x7ee3631e, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0x17f85e3d, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0xfa960a7b, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0x337b3523, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x57028369, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x29f7fba0, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0x80905c8d, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x43a1f330, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x7139260a, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x7029acd1, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xa7b1a489, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe09d8874, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xe29376a8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x50b132cc, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x7d33c277, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0xce6bab5f, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x427de466, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0xe7844cea, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0xa9bf1f1a, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x3238189a, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8fca5939, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd6606922, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x6735a700, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x86ea4d38, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x189686c9, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xaadc9f66, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x68f3f3ab, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x49c41aad, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xf9dde891, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xac18e685, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x61bd841, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0xa39fe4, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xea844cdd, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xa7943405, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaac36bd2, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xc81b4345, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0xbb46e33, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0xbb631c52, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xdc537c15, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x3b847608, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x2a2f80de, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x87d7f2a, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0xba3dc8aa, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x3251f9ea, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x93da3abb, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc1f6597, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x925d0071, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x14f56699, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xf65a003d, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xef9f8ee0, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0xfa860ecb, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x945b0cda, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0xfd43d638, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xd3b87d6b, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc960fd7d, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5a1e4d3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x246e57f0, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0xda45e8f5, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0x30ffe8c6, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x6cb35b99, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x9a923583, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x49ef04c0, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xcd22220, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x8c7a884f, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x278de0bd, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xeddcfc3d, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0x83039710, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x6105aff8, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xe1d4425d, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xe7974813, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_free) },
	{ 0xaa52f747, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xc7157b46, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x2dc251bf, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9f2bb9d1, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7c64dae5, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0x8a89a187, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0x6321f988, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x65c7e04c, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0xe0aff2e6, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x16c9c8b5, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0xd3fce0c6, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xeffa9c96, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xb7a39761, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x47754b90, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6cea397, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x10f5580f, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x971e3a7c, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_request_out) },
	{ 0x8f866d1b, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xfd204667, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xc7c4e17d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf3dbcd97, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x71d5a6a9, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xff20593e, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0xed6e175d, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xcecbf12e, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x9b0fa6b8, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf3a426a4, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x223fa293, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x4973a6bc, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x5b1f65b9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x6c049048, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x5f010e4d, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xf888adca, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x609c8d61, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,ath9k_common,ath";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");
