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
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x5fcede9f, __VMLINUX_SYMBOL_STR(nfc_hci_send_event) },
	{ 0xd9befbb8, __VMLINUX_SYMBOL_STR(nfc_dep_link_is_up) },
	{ 0xbe3b636e, __VMLINUX_SYMBOL_STR(nfc_hci_set_param) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd4fa4e95, __VMLINUX_SYMBOL_STR(nfc_hci_allocate_device) },
	{ 0xa1491fae, __VMLINUX_SYMBOL_STR(nfc_find_se) },
	{ 0x72b83c3f, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6a30d860, __VMLINUX_SYMBOL_STR(nfc_hci_get_clientdata) },
	{ 0xe9ff39d9, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe2d6ea5a, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0x4e607117, __VMLINUX_SYMBOL_STR(nfc_hci_target_discovered) },
	{ 0xb888ad17, __VMLINUX_SYMBOL_STR(nfc_hci_register_device) },
	{ 0x981dae68, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0x56875adc, __VMLINUX_SYMBOL_STR(nfc_hci_free_device) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x1c7d1b5e, __VMLINUX_SYMBOL_STR(nfc_hci_unregister_device) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe7d6ec8b, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x88e27a8, __VMLINUX_SYMBOL_STR(nfc_add_se) },
	{ 0x89b56b42, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd_async) },
	{ 0x9f5e7830, __VMLINUX_SYMBOL_STR(nfc_hci_get_param) },
	{ 0xadc5287, __VMLINUX_SYMBOL_STR(nfc_hci_set_clientdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hci,nfc";

