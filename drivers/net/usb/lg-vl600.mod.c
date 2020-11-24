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
	{ 0xab5ba58e, __VMLINUX_SYMBOL_STR(usbnet_cdc_status) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe29376a8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xe7ea087e, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x53e1b6a8, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x9c3d85e6, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x74a9334e, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x8161433c, __VMLINUX_SYMBOL_STR(usbnet_cdc_unbind) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3145397b, __VMLINUX_SYMBOL_STR(usbnet_cdc_bind) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ether";

MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00in*");