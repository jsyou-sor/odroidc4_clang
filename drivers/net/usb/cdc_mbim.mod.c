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
	{ 0x85f6e4ff, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x5f0676d0, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x3dd82397, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xf32471d0, __VMLINUX_SYMBOL_STR(cdc_ncm_change_mtu) },
	{ 0x9a02c828, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xcf87ad4b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xfa0ab530, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xce31eed5, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x8b00d47d, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x7d2b44ef, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x4b3ddb64, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x74a9334e, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xb2227657, __VMLINUX_SYMBOL_STR(cdc_ncm_fill_tx_frame) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xe29376a8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x189686c9, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x6bf7c9e6, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0x2d0da3ef, __VMLINUX_SYMBOL_STR(in6_dev_finish_destroy) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x2e897218, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xe7ea087e, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xdfff89f5, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_ndp16) },
	{ 0xa9c0a641, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_nth16) },
	{ 0xb3898ecb, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xc8d43393, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x4cee7017, __VMLINUX_SYMBOL_STR(cdc_ncm_unbind) },
	{ 0x46210f8c, __VMLINUX_SYMBOL_STR(usb_cdc_wdm_register) },
	{ 0x9948c1af, __VMLINUX_SYMBOL_STR(cdc_ncm_bind_common) },
	{ 0x76edfa04, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0x27cbce6f, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xf0e6c3cf, __VMLINUX_SYMBOL_STR(cdc_ncm_select_altsetting) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ncm,cdc-wdm";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");
