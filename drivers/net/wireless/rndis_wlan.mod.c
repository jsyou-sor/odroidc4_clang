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
	{ 0x7d2b44ef, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x4b3ddb64, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x85f6e4ff, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x5f0676d0, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x3dd82397, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x9a02c828, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xcf87ad4b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xfa0ab530, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xce31eed5, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x8b00d47d, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xe0f5092a, __VMLINUX_SYMBOL_STR(rndis_tx_fixup) },
	{ 0x7c7c09c7, __VMLINUX_SYMBOL_STR(rndis_rx_fixup) },
	{ 0xaed7ee7d, __VMLINUX_SYMBOL_STR(rndis_status) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x93408701, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85f5e2aa, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x5afde08f, __VMLINUX_SYMBOL_STR(usbnet_purge_paused_rxq) },
	{ 0xe8663ae6, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x74a9334e, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x40b45ed0, __VMLINUX_SYMBOL_STR(cfg80211_cqm_rssi_notify) },
	{ 0xbd3cbf51, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0xc9fb6ea8, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xa2a1147f, __VMLINUX_SYMBOL_STR(usbnet_resume_rx) },
	{ 0x42c98de0, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0x9415b88f, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x28085fff, __VMLINUX_SYMBOL_STR(cfg80211_connect_bss) },
	{ 0x3517cecb, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x27d07604, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_data) },
	{ 0xc338d4c0, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0x4ce685b9, __VMLINUX_SYMBOL_STR(cfg80211_pmksa_candidate_notify) },
	{ 0x40e5d9e8, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x36d127bb, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xfb537bff, __VMLINUX_SYMBOL_STR(usbnet_pause_rx) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8f9820ab, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x47c85edb, __VMLINUX_SYMBOL_STR(rndis_command) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc3560d18, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x7071564e, __VMLINUX_SYMBOL_STR(rndis_unbind) },
	{ 0xe79667c2, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xe7de671e, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xbf40f66b, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0xade5ca45, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4e76c50a, __VMLINUX_SYMBOL_STR(generic_rndis_bind) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd36f64ac, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,rndis_host";

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
