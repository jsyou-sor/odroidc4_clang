#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x89c6a24b, __VMLINUX_SYMBOL_STR(nci_unregister_device) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x224ff4ad, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xabcd1050, __VMLINUX_SYMBOL_STR(nfc_fw_download_done) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc7c4e17d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x22a01bf0, __VMLINUX_SYMBOL_STR(nci_register_device) },
	{ 0x6c049048, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x769f5127, __VMLINUX_SYMBOL_STR(nci_allocate_device) },
	{ 0x9a914756, __VMLINUX_SYMBOL_STR(nci_free_device) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nci,nfc";
