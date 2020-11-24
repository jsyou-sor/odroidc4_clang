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
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x682af023, __VMLINUX_SYMBOL_STR(nfc_hci_disconnect_gate) },
	{ 0x8d5eaf3d, __VMLINUX_SYMBOL_STR(nfc_hci_disconnect_all_gates) },
	{ 0x5fcede9f, __VMLINUX_SYMBOL_STR(nfc_hci_send_event) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd9befbb8, __VMLINUX_SYMBOL_STR(nfc_dep_link_is_up) },
	{ 0xbe3b636e, __VMLINUX_SYMBOL_STR(nfc_hci_set_param) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xc38c90af, __VMLINUX_SYMBOL_STR(nfc_vendor_cmd_reply) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x7b7425b5, __VMLINUX_SYMBOL_STR(nfc_se_connectivity) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd4fa4e95, __VMLINUX_SYMBOL_STR(nfc_hci_allocate_device) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x72b83c3f, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6a30d860, __VMLINUX_SYMBOL_STR(nfc_hci_get_clientdata) },
	{ 0xde434656, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0xe9ff39d9, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xa52654ea, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0xe2d6ea5a, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0xb888ad17, __VMLINUX_SYMBOL_STR(nfc_hci_register_device) },
	{ 0x981dae68, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0x20b012d9, __VMLINUX_SYMBOL_STR(nfc_se_transaction) },
	{ 0x56875adc, __VMLINUX_SYMBOL_STR(nfc_hci_free_device) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xf3527c54, __VMLINUX_SYMBOL_STR(nfc_llc_start) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xbca0b4fd, __VMLINUX_SYMBOL_STR(nfc_hci_sak_to_protocol) },
	{ 0x1c7d1b5e, __VMLINUX_SYMBOL_STR(nfc_hci_unregister_device) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3deafed1, __VMLINUX_SYMBOL_STR(nfc_remove_se) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe7d6ec8b, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x25ef86e3, __VMLINUX_SYMBOL_STR(nfc_hci_connect_gate) },
	{ 0xf612f260, __VMLINUX_SYMBOL_STR(nfc_llc_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x88e27a8, __VMLINUX_SYMBOL_STR(nfc_add_se) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x89b56b42, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd_async) },
	{ 0x9f5e7830, __VMLINUX_SYMBOL_STR(nfc_hci_get_param) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8045891f, __VMLINUX_SYMBOL_STR(__nfc_alloc_vendor_cmd_reply_skb) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xadc5287, __VMLINUX_SYMBOL_STR(nfc_hci_set_clientdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hci,nfc";

