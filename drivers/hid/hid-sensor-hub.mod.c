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
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x4b30b987, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xf957d23c, __VMLINUX_SYMBOL_STR(mfd_remove_devices) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xad9e0ba5, __VMLINUX_SYMBOL_STR(__hid_request) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x89f264c1, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa4d5275, __VMLINUX_SYMBOL_STR(mfd_add_devices) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa60e1793, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x46f6dc59, __VMLINUX_SYMBOL_STR(hid_set_field) },
	{ 0x224ff4ad, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4e32da5c, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x985f9294, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x56503d4a, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mfd-core";

MODULE_ALIAS("hid:b*g0003v00008086p000009FA");
MODULE_ALIAS("hid:b*g0003v00008087p000009FA");
MODULE_ALIAS("hid:b*g0003v00008087p00000A04");
MODULE_ALIAS("hid:b*g0003v0000045Ep00000799");
MODULE_ALIAS("hid:b*g0003v0000045Ep000007A7");
MODULE_ALIAS("hid:b*g0003v0000045Ep000007A9");
MODULE_ALIAS("hid:b*g0003v0000045Ep000007BD");
MODULE_ALIAS("hid:b*g0003v000004D8p00000F01");
MODULE_ALIAS("hid:b*g0003v00000483p000091D1");
MODULE_ALIAS("hid:b*g0003v00000483p00009100");
MODULE_ALIAS("hid:b*g0003v00002047p00000855");
MODULE_ALIAS("hid:b*g0003v0000048Dp00008386");
MODULE_ALIAS("hid:b*g0003v0000048Dp00008350");
MODULE_ALIAS("hid:b*g0003v0000048Dp00008396");
MODULE_ALIAS("hid:b*g0003v00008086p000022D8");
MODULE_ALIAS("hid:b*g0003v*p*");
