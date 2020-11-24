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
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x7ac878d3, __VMLINUX_SYMBOL_STR(ar9003_paprd_is_done) },
	{ 0x1bb9c5ee, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x70082e52, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0x46e0ccab, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc8fee3f, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xb5c8098f, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x21e0e3f0, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x6ab6bfb0, __VMLINUX_SYMBOL_STR(ath9k_hw_resume_interrupts) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb5f96c27, __VMLINUX_SYMBOL_STR(ar9003_mci_send_wlan_channels) },
	{ 0x9b0f89b5, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x696ee931, __VMLINUX_SYMBOL_STR(ath9k_hw_setantenna) },
	{ 0x3398b406, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x5634491, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0xe5300e4, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x97368418, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0xa3966446, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x9de35e6b, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x7ee3631e, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xffd02408, __VMLINUX_SYMBOL_STR(ath9k_hw_get_tsf_offset) },
	{ 0x1619d40c, __VMLINUX_SYMBOL_STR(ath9k_hw_numtxpending) },
	{ 0x6436148, __VMLINUX_SYMBOL_STR(ar9003_paprd_setup_gain_table) },
	{ 0x17f85e3d, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0xfa960a7b, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0x4d9cde83, __VMLINUX_SYMBOL_STR(ath9k_hw_set_interrupts) },
	{ 0x337b3523, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x57028369, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x49bff197, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_mci) },
	{ 0x297a67f4, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0xf80b3147, __VMLINUX_SYMBOL_STR(ar9003_paprd_enable) },
	{ 0xf139b1cc, __VMLINUX_SYMBOL_STR(ath9k_hw_getchan_noise) },
	{ 0x29f7fba0, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0x80905c8d, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0x93815859, __VMLINUX_SYMBOL_STR(ath9k_hw_computetxtime) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4d29b048, __VMLINUX_SYMBOL_STR(ath9k_hw_disable_interrupts) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x513feba8, __VMLINUX_SYMBOL_STR(ath9k_hw_bstuck_nfcal) },
	{ 0x43a1f330, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x7139260a, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x7029acd1, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xfc8620f7, __VMLINUX_SYMBOL_STR(ath9k_hw_gettxbuf) },
	{ 0xcf0e7c07, __VMLINUX_SYMBOL_STR(dfs_pattern_detector_init) },
	{ 0xe09d8874, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xe29376a8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x59f6f07, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
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
	{ 0x80e6b8a7, __VMLINUX_SYMBOL_STR(ath9k_hw_kill_interrupts) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8fca5939, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd6606922, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x44724582, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xaadc9f66, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x68f3f3ab, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6847a58e, __VMLINUX_SYMBOL_STR(ath9k_hw_process_rxdesc_edma) },
	{ 0x832a0960, __VMLINUX_SYMBOL_STR(ar9003_paprd_populate_single_table) },
	{ 0x49c41aad, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xf9dde891, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xc825c35, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xac18e685, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x61bd841, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x25cf8e78, __VMLINUX_SYMBOL_STR(ath_gen_timer_isr) },
	{ 0xf494d4d3, __VMLINUX_SYMBOL_STR(ath9k_hw_rxprocdesc) },
	{ 0xa39fe4, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xea844cdd, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb5cdb16a, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_2wire) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xa7943405, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdf5933e1, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0xaac36bd2, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xe9ff28e7, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_request_in) },
	{ 0x75c74102, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_dbg_info) },
	{ 0x7cd3b0c6, __VMLINUX_SYMBOL_STR(ar9003_paprd_create_curve) },
	{ 0xc81b4345, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0xbb46e33, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0xbb631c52, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xdc537c15, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x3b847608, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x2a2f80de, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x87d7f2a, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0xba3dc8aa, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x93da3abb, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x21f0f1c, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xab9041, __VMLINUX_SYMBOL_STR(ath9k_hw_addrxbuf_edma) },
	{ 0x2c5dbfb1, __VMLINUX_SYMBOL_STR(ieee80211_find_sta_by_ifaddr) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x5f36dd20, __VMLINUX_SYMBOL_STR(ath9k_hw_setup_statusring) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc1f6597, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x925d0071, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xf72a12ff, __VMLINUX_SYMBOL_STR(ar9003_mci_get_next_gpm_offset) },
	{ 0x14f56699, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xf65a003d, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xab04afe2, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xef9f8ee0, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0xe2254a5b, __VMLINUX_SYMBOL_STR(ath9k_hw_puttxbuf) },
	{ 0xfa860ecb, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xaa18b85, __VMLINUX_SYMBOL_STR(ar9003_mci_state) },
	{ 0xed192dd1, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_scheme) },
	{ 0x945b0cda, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0xfd43d638, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xc960fd7d, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x246e57f0, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0xda45e8f5, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0xc1fa6f5b, __VMLINUX_SYMBOL_STR(ath9k_hw_abortpcurecv) },
	{ 0x30ffe8c6, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd3dbcc21, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x49ef04c0, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xec2d580b, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tx_filter) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xcd22220, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xa5bdae57, __VMLINUX_SYMBOL_STR(ieee80211_sta_set_buffered) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x9abdfb8a, __VMLINUX_SYMBOL_STR(ar9003_mci_get_interrupt) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xeddcfc3d, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xc5400882, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0xbaa4b274, __VMLINUX_SYMBOL_STR(ath9k_hw_updatetxtriglevel) },
	{ 0xb6070dd0, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0xa5cc3a5a, __VMLINUX_SYMBOL_STR(ar9003_mci_set_bt_version) },
	{ 0x592f0671, __VMLINUX_SYMBOL_STR(ath9k_hw_set_rx_bufsize) },
	{ 0xc20e41ea, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0xf515aed1, __VMLINUX_SYMBOL_STR(ar9003_is_paprd_enabled) },
	{ 0xe2a74843, __VMLINUX_SYMBOL_STR(ar9003_get_pll_sqsum_dvc) },
	{ 0xb5af0696, __VMLINUX_SYMBOL_STR(ar9003_mci_send_message) },
	{ 0x6105aff8, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xe7974813, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_free) },
	{ 0xda9324a2, __VMLINUX_SYMBOL_STR(ar9003_mci_cleanup) },
	{ 0xe50c61dc, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xaa52f747, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0x23fcb1b8, __VMLINUX_SYMBOL_STR(ath9k_hw_txstart) },
	{ 0xc7157b46, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0xb1033b6f, __VMLINUX_SYMBOL_STR(ath9k_hw_check_alive) },
	{ 0x93c04509, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x123f82f3, __VMLINUX_SYMBOL_STR(getrawmonotonic64) },
	{ 0x2dc251bf, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xed0dd27f, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_concur_txprio) },
	{ 0x8e6e149a, __VMLINUX_SYMBOL_STR(dummy_dma_ops) },
	{ 0x9f2bb9d1, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x33545e50, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x7c64dae5, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0x8a89a187, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x6321f988, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x9d12372a, __VMLINUX_SYMBOL_STR(ar9003_mci_setup) },
	{ 0xe0aff2e6, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0xf8fb501c, __VMLINUX_SYMBOL_STR(ieee80211_sta_eosp) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x16c9c8b5, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0xa472b0ec, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xeffa9c96, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xd3fce0c6, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xb7a39761, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x47754b90, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x6cea397, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbef04b4e, __VMLINUX_SYMBOL_STR(ath9k_hw_check_nav) },
	{ 0x263f89cb, __VMLINUX_SYMBOL_STR(ath9k_hw_putrxbuf) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x971e3a7c, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_request_out) },
	{ 0xba35611b, __VMLINUX_SYMBOL_STR(ath_rxbuf_alloc) },
	{ 0x7c11e88d, __VMLINUX_SYMBOL_STR(ar9003_paprd_init_table) },
	{ 0xe9d3572b, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x8f866d1b, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xa4a665ff, __VMLINUX_SYMBOL_STR(ath9k_hw_setuprxdesc) },
	{ 0xfd204667, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x6f7b78df, __VMLINUX_SYMBOL_STR(ath9k_hw_abort_tx_dma) },
	{ 0xf3dbcd97, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x71d5a6a9, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xff20593e, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xcecbf12e, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xce2eae70, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_noskb) },
	{ 0x9b0fa6b8, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xf3a5dfc4, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_deinit) },
	{ 0xafec593, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_check) },
	{ 0x53352bb2, __VMLINUX_SYMBOL_STR(ath9k_hw_enable_interrupts) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf3a426a4, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xe2488f7b, __VMLINUX_SYMBOL_STR(ath9k_hw_intrpend) },
	{ 0x223fa293, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x4973a6bc, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x6c049048, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x5f010e4d, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xbe266153, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x170a8959, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0xe3b2ffd2, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txpowerlimit) },
	{ 0x62b4d424, __VMLINUX_SYMBOL_STR(ath9k_hw_stop_dma_queue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,ath9k_common,ath";

MODULE_ALIAS("pci:v0000168Cd00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv0000168Csd00002096bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A3Bsd00001C71bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000105Bsd0000E01Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A32sd00000306bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000185Fsd0000309Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd00001536bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv00001A3Bsd00002C37bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002086bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001237bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002126bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd0000126Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002152bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E075bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003122bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004105bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004106bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C706bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C680bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C708bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003218bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003219bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002C97bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002100bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001C56sd00004001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006627bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006628bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Fsd00007197bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001186bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F86bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001195bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F95bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C00bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C01bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001043sd0000850Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002116bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006661bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000168Csd00003117bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000017AAsd00003214bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001969sd00000091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002110bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001043sd0000850Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006631bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006641bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000103Csd00001864bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000063bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000064bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000010CFsd00001783bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002003bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002176bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E068bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006B2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00001842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00006671bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002811bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002812bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A1bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002F8Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003025bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E069bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000622bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000672bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000662bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000682bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd000018E3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd0000217Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd00002005bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd00004129bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000412Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000652bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000612bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00001832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000692bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000803bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000813bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002130bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002182bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002F82bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Fsd00007202bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002810bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002813bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A4bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A120bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E07Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E08Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E081bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E099bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00004026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001043sd000085F2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv*sd*bc*sc*i*");
