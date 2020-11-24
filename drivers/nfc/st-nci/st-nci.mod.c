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
	{ 0xfc050b9, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x54534b69, __VMLINUX_SYMBOL_STR(nci_req_complete) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x882bdb02, __VMLINUX_SYMBOL_STR(nci_hci_set_param) },
	{ 0x2a3d52f3, __VMLINUX_SYMBOL_STR(nci_hci_dev_session_init) },
	{ 0xd0bd2437, __VMLINUX_SYMBOL_STR(nci_recv_frame) },
	{ 0xc38c90af, __VMLINUX_SYMBOL_STR(nfc_vendor_cmd_reply) },
	{ 0xdcb204f1, __VMLINUX_SYMBOL_STR(nci_hci_send_cmd) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x7b7425b5, __VMLINUX_SYMBOL_STR(nfc_se_connectivity) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6d1b5011, __VMLINUX_SYMBOL_STR(nci_hci_clear_all_pipes) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6c96bb14, __VMLINUX_SYMBOL_STR(nci_hci_send_event) },
	{ 0xb2c76ade, __VMLINUX_SYMBOL_STR(skb_dequeue_tail) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe440ee5a, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x89c6a24b, __VMLINUX_SYMBOL_STR(nci_unregister_device) },
	{ 0x964a109e, __VMLINUX_SYMBOL_STR(nci_nfcc_loopback) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xac95992d, __VMLINUX_SYMBOL_STR(nci_core_conn_create) },
	{ 0xc6e77f45, __VMLINUX_SYMBOL_STR(nci_prop_cmd) },
	{ 0xde434656, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x6bfaadf8, __VMLINUX_SYMBOL_STR(nci_hci_connect_gate) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x20b012d9, __VMLINUX_SYMBOL_STR(nfc_se_transaction) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xd3b87d6b, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6e43d8c9, __VMLINUX_SYMBOL_STR(nci_hci_get_param) },
	{ 0xdcdf3b14, __VMLINUX_SYMBOL_STR(nci_nfcee_mode_set) },
	{ 0x3deafed1, __VMLINUX_SYMBOL_STR(nfc_remove_se) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xed6e175d, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x88e27a8, __VMLINUX_SYMBOL_STR(nfc_add_se) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x8045891f, __VMLINUX_SYMBOL_STR(__nfc_alloc_vendor_cmd_reply_skb) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x22a01bf0, __VMLINUX_SYMBOL_STR(nci_register_device) },
	{ 0x769f5127, __VMLINUX_SYMBOL_STR(nci_allocate_device) },
	{ 0x9a914756, __VMLINUX_SYMBOL_STR(nci_free_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nci,nfc";

