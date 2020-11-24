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
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x3c235ad0, __VMLINUX_SYMBOL_STR(skb_seq_read) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x97868aef, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x9ada50da, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x99c3c450, __VMLINUX_SYMBOL_STR(iscsi_requeue_task) },
	{ 0x3bef2f73, __VMLINUX_SYMBOL_STR(iscsi_pool_init) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x29c3cf73, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0x56b35e9f, __VMLINUX_SYMBOL_STR(iscsi_itt_to_ctask) },
	{ 0xb1c9a382, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0xd09cbcd0, __VMLINUX_SYMBOL_STR(skb_abort_seq_read) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xa050ab6e, __VMLINUX_SYMBOL_STR(skb_prepare_seq_read) },
	{ 0xd991d0b2, __VMLINUX_SYMBOL_STR(iscsi_conn_teardown) },
	{ 0xdd5578b1, __VMLINUX_SYMBOL_STR(iscsi_put_task) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1f01d4e7, __VMLINUX_SYMBOL_STR(iscsi_prep_data_out_pdu) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf4036d2e, __VMLINUX_SYMBOL_STR(iscsi_complete_pdu) },
	{ 0x7aa039bc, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5c20a789, __VMLINUX_SYMBOL_STR(__iscsi_complete_pdu) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x8d303b1b, __VMLINUX_SYMBOL_STR(iscsi_pool_free) },
	{ 0xb07a583d, __VMLINUX_SYMBOL_STR(iscsi_verify_itt) },
	{ 0x85e799f2, __VMLINUX_SYMBOL_STR(iscsi_conn_setup) },
	{ 0x878b3480, __VMLINUX_SYMBOL_STR(iscsi_update_cmdsn) },
	{ 0x263c3152, __VMLINUX_SYMBOL_STR(bcmp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi";

