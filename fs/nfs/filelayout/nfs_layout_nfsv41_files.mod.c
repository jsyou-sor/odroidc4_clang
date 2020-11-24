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
	{ 0xfadf51f7, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x73e9ceca, __VMLINUX_SYMBOL_STR(nfs4_schedule_session_recovery) },
	{ 0x82a6da99, __VMLINUX_SYMBOL_STR(nfs_request_add_commit_list) },
	{ 0x239fadc1, __VMLINUX_SYMBOL_STR(pnfs_nfs_generic_sync) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2755b825, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_connect) },
	{ 0x4d06a3ac, __VMLINUX_SYMBOL_STR(pnfs_generic_clear_request_commit) },
	{ 0xc19322bc, __VMLINUX_SYMBOL_STR(nfs_init_cinfo) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x22384835, __VMLINUX_SYMBOL_STR(nfs_initiate_commit) },
	{ 0x2372ba6d, __VMLINUX_SYMBOL_STR(pnfs_error_mark_layout_for_return) },
	{ 0x29d7279d, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_put) },
	{ 0x70e8af5a, __VMLINUX_SYMBOL_STR(nfs4_mark_deviceid_unavailable) },
	{ 0x1093b108, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_commit_ds) },
	{ 0xa3b6b976, __VMLINUX_SYMBOL_STR(nfs4_decode_mp_ds_addr) },
	{ 0x36856750, __VMLINUX_SYMBOL_STR(nfs_initiate_pgio) },
	{ 0x30f18f2d, __VMLINUX_SYMBOL_STR(nfs4_set_rw_stateid) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xb9ab1c53, __VMLINUX_SYMBOL_STR(pnfs_generic_commit_pagelist) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xd3d2942a, __VMLINUX_SYMBOL_STR(pnfs_generic_recover_commit_reqs) },
	{ 0xe5dc6410, __VMLINUX_SYMBOL_STR(nfs41_setup_sequence) },
	{ 0xe47bdd1c, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x646e6a8f, __VMLINUX_SYMBOL_STR(nfs4_schedule_lease_recovery) },
	{ 0x6260a2e2, __VMLINUX_SYMBOL_STR(pnfs_update_layout) },
	{ 0xbaf3ba21, __VMLINUX_SYMBOL_STR(rpc_exit) },
	{ 0xfbbc2273, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0x68b31194, __VMLINUX_SYMBOL_STR(pnfs_generic_write_commit_done) },
	{ 0xbaa9ed14, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xb1c8c96c, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16624d6e, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x20f99045, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0xacc6ff74, __VMLINUX_SYMBOL_STR(nfs4_find_or_create_ds_client) },
	{ 0x51c4ae44, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0x29556eae, __VMLINUX_SYMBOL_STR(pnfs_layout_mark_request_commit) },
	{ 0x1a8229c5, __VMLINUX_SYMBOL_STR(pnfs_destroy_layout) },
	{ 0xf70e4a4d, __VMLINUX_SYMBOL_STR(preempt_schedule_notrace) },
	{ 0xaa2dcf9d, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_add) },
	{ 0xef655e25, __VMLINUX_SYMBOL_STR(pnfs_put_lseg) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x66f84d74, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0xed15fb41, __VMLINUX_SYMBOL_STR(nfs4_print_deviceid) },
	{ 0x638c7ce4, __VMLINUX_SYMBOL_STR(pnfs_set_layoutcommit) },
	{ 0xf0be52ef, __VMLINUX_SYMBOL_STR(pnfs_generic_scan_commit_lists) },
	{ 0x69d3558d, __VMLINUX_SYMBOL_STR(pnfs_generic_rw_release) },
	{ 0x6f7d8599, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xaf4d2175, __VMLINUX_SYMBOL_STR(nfs41_sequence_done) },
	{ 0x9a172e7a, __VMLINUX_SYMBOL_STR(nfs4_schedule_stateid_recovery) },
	{ 0xe275c38b, __VMLINUX_SYMBOL_STR(nfs4_test_deviceid_unavailable) },
	{ 0xf999267e, __VMLINUX_SYMBOL_STR(pnfs_generic_commit_release) },
	{ 0x4839bdcf, __VMLINUX_SYMBOL_STR(rpc_sleep_on) },
	{ 0x2bb37d17, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x21dbdd5c, __VMLINUX_SYMBOL_STR(pnfs_read_done_resend_to_mds) },
	{ 0x817c449a, __VMLINUX_SYMBOL_STR(rpc_count_iostats) },
	{ 0xa9b08646, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0xf9699aa0, __VMLINUX_SYMBOL_STR(rpc_wake_up_queued_task) },
	{ 0x802b22e2, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x1916ebea, __VMLINUX_SYMBOL_STR(pnfs_generic_prepare_to_resend_writes) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xd0b5b7dc, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_read) },
	{ 0x5a9233, __VMLINUX_SYMBOL_STR(pnfs_write_done_resend_to_mds) },
	{ 0x6ae95b29, __VMLINUX_SYMBOL_STR(rpc_wake_up) },
	{ 0x18b5b1f8, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xb0480ef3, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_write) },
	{ 0xcf9a3fb7, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0x18f79a2d, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x223fa293, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xd7ccc051, __VMLINUX_SYMBOL_STR(pnfs_set_lo_fail) },
	{ 0x3be448ae, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x3200a802, __VMLINUX_SYMBOL_STR(nfs_writeback_update_inode) },
	{ 0x6098d83c, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,nfs,sunrpc";

