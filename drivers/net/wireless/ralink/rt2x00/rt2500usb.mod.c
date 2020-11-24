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
	{ 0x7f0fa712, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x9ec799ab, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0xa501359f, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0xd42af77, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0xc1ea05e8, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0x4c3d5c7e, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0xaec16c45, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xb9904297, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0xadf10e94, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xe131ef38, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x15d088f6, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x35e6d1fc, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0x7d0906e0, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x328b8431, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xd101d31f, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x8d967dd4, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xefda1f4d, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x1d781ef, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0xcf31b5a6, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xbfadc750, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0xd217d07c, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0x724ce60, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0xdc5a9803, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0x8723a61f, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x159a8da1, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0xf1d42532, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0x5fd08cd4, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0x43c02aef, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0x35a87afd, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7010502, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5a1e4d3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xbdb8d52, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x52dff9cf, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd1ad552f, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0xe857967f, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00usb";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8DF9D6B57A6A12007452E03");
