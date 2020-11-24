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
	{ 0xf314b639, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0xccb6039b, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x56897e53, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x4e578777, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x89cb914c, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x3dd82397, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x712a16e9, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x9a02c828, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xcf87ad4b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xfa0ab530, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xce31eed5, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x8b00d47d, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x7d2b44ef, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xa4511467, __VMLINUX_SYMBOL_STR(crc16) },
	{ 0x744fc642, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x1ef092af, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0x4b3ddb64, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xd48b26f0, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xe5733de1, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x393d377, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x1e23ba6a, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x16149f61, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xeac6ac98, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xe29376a8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xe50c61dc, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xe7ea087e, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x53e1b6a8, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc42f5367, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xdb7c885c, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0xa5805099, __VMLINUX_SYMBOL_STR(usbnet_defer_kevent) },
	{ 0xb3898ecb, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x1194b84a, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_no_resume) },
	{ 0x36d127bb, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x489f0560, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x95ff7e0, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x54f6bef, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xe7de671e, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x8259c671, __VMLINUX_SYMBOL_STR(of_get_mac_address) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb81815dc, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0424p9500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424pEC00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9903d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9905d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9906d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9907d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9908d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9909d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E08d*dc*dsc*dp*ic*isc*ip*in*");
