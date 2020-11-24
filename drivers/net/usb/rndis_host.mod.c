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
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7d2b44ef, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x5f0676d0, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x8161433c, __VMLINUX_SYMBOL_STR(usbnet_cdc_unbind) },
	{ 0x85f6e4ff, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x53e1b6a8, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x6fca7f64, __VMLINUX_SYMBOL_STR(usbnet_generic_cdc_bind) },
	{ 0xe29376a8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xce31eed5, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3251f9ea, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xfa0ab530, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x4b3ddb64, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x9c3d85e6, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3dd82397, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xe7ea087e, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x2564aa67, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x8b00d47d, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xe1d4425d, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9a02c828, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x985f9294, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xcf87ad4b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ether";

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
