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
	{ 0xccb6039b, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x56897e53, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x4e578777, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0xe5733de1, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x393d377, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x3dd82397, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x9a02c828, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xcf87ad4b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xfa0ab530, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xce31eed5, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x8b00d47d, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x3d210e3e, __VMLINUX_SYMBOL_STR(usbnet_status_start) },
	{ 0x5f0676d0, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x89cb914c, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x712a16e9, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0xeac6ac98, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3251f9ea, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe29376a8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xe7ea087e, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x53e1b6a8, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x1184d89b, __VMLINUX_SYMBOL_STR(usbnet_status_stop) },
	{ 0x74a9334e, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x95ff7e0, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x54f6bef, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe79667c2, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb81815dc, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "DBD590C6CC521A4850556DF");
