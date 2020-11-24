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
	{ 0x22baea3d, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x2c013072, __VMLINUX_SYMBOL_STR(request_key) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe13f456f, __VMLINUX_SYMBOL_STR(nfs_unlink) },
	{ 0x51892d61, __VMLINUX_SYMBOL_STR(nfs_callback_set_tcpport) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7129dff1, __VMLINUX_SYMBOL_STR(nfs_symlink) },
	{ 0x98a88bcd, __VMLINUX_SYMBOL_STR(nfs_fhget) },
	{ 0x71e14358, __VMLINUX_SYMBOL_STR(security_inode_listsecurity) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x249c99e, __VMLINUX_SYMBOL_STR(rpc_destroy_wait_queue) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x98517f08, __VMLINUX_SYMBOL_STR(nfs_alloc_inode) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x70a35707, __VMLINUX_SYMBOL_STR(sunrpc_cache_update) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x39e05ac3, __VMLINUX_SYMBOL_STR(nfs_idmap_cache_timeout) },
	{ 0xb68513a0, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xc4ff1e9f, __VMLINUX_SYMBOL_STR(nfs_auth_info_match) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0xef9ecea4, __VMLINUX_SYMBOL_STR(key_set_timeout) },
	{ 0xfe8ccf25, __VMLINUX_SYMBOL_STR(xdr_stream_pos) },
	{ 0x12672ee2, __VMLINUX_SYMBOL_STR(xdr_init_encode) },
	{ 0x7a843949, __VMLINUX_SYMBOL_STR(rpcauth_create) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xbb0f08b7, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x3d093081, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0xd4c5524f, __VMLINUX_SYMBOL_STR(nfs_init_server_rpcclient) },
	{ 0x46785f1b, __VMLINUX_SYMBOL_STR(nfs_access_set_mask) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x1f0b60c7, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0x625288d5, __VMLINUX_SYMBOL_STR(rpc_clnt_xprt_switch_put) },
	{ 0x91d1fe52, __VMLINUX_SYMBOL_STR(max_session_slots) },
	{ 0x29b06e33, __VMLINUX_SYMBOL_STR(nfs_refresh_inode) },
	{ 0xe9260616, __VMLINUX_SYMBOL_STR(rpc_init_pipe_dir_object) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0xe9bca1cc, __VMLINUX_SYMBOL_STR(nfs_free_client) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xddcbf43c, __VMLINUX_SYMBOL_STR(cache_destroy_net) },
	{ 0xdd991c0e, __VMLINUX_SYMBOL_STR(filemap_fdatawait) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x7c9722ba, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0xf8967fe1, __VMLINUX_SYMBOL_STR(nfs_server_insert_lists) },
	{ 0xd9bf5a0e, __VMLINUX_SYMBOL_STR(security_dentry_init_security) },
	{ 0xcaa0b56a, __VMLINUX_SYMBOL_STR(rpc_call_async) },
	{ 0x8c6da383, __VMLINUX_SYMBOL_STR(nfs_alloc_server) },
	{ 0xeda10b34, __VMLINUX_SYMBOL_STR(prepare_kernel_cred) },
	{ 0x1f806705, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0xe4db1031, __VMLINUX_SYMBOL_STR(rpc_clnt_add_xprt) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x34ad218f, __VMLINUX_SYMBOL_STR(nfs_file_llseek) },
	{ 0x6a57c45, __VMLINUX_SYMBOL_STR(nfs_force_lookup_revalidate) },
	{ 0x34bc89ba, __VMLINUX_SYMBOL_STR(nfs_set_sb_security) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xbc1573eb, __VMLINUX_SYMBOL_STR(rpc_clnt_test_and_add_xprt) },
	{ 0xc4fb5544, __VMLINUX_SYMBOL_STR(nfs_setsecurity) },
	{ 0xaafd4acc, __VMLINUX_SYMBOL_STR(max_session_cb_slots) },
	{ 0x43569f8f, __VMLINUX_SYMBOL_STR(nfs_file_write) },
	{ 0x1102fa25, __VMLINUX_SYMBOL_STR(sunrpc_cache_pipe_upcall) },
	{ 0xaa7c1a41, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x462c660f, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xfb4eba6b, __VMLINUX_SYMBOL_STR(nfs_sync_inode) },
	{ 0xd2f5d5c7, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0xdd613f4b, __VMLINUX_SYMBOL_STR(truncate_inode_pages_range) },
	{ 0x22384835, __VMLINUX_SYMBOL_STR(nfs_initiate_commit) },
	{ 0xb0ca8316, __VMLINUX_SYMBOL_STR(nfs_permission) },
	{ 0x713b2525, __VMLINUX_SYMBOL_STR(nfs_show_devname) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xbeb85634, __VMLINUX_SYMBOL_STR(nfs_show_path) },
	{ 0x5124aae8, __VMLINUX_SYMBOL_STR(put_nfs_open_context) },
	{ 0xb68e1fee, __VMLINUX_SYMBOL_STR(sunrpc_cache_unregister_pipefs) },
	{ 0x6babe99d, __VMLINUX_SYMBOL_STR(nfs_pgheader_init) },
	{ 0x82c1655d, __VMLINUX_SYMBOL_STR(nfs_post_op_update_inode_force_wcc) },
	{ 0xc23eee97, __VMLINUX_SYMBOL_STR(__fscache_invalidate) },
	{ 0x6f4176d9, __VMLINUX_SYMBOL_STR(vfs_kern_mount) },
	{ 0x294c6a2, __VMLINUX_SYMBOL_STR(nfs_callback_nr_threads) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xb4cd3b6f, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0xc267ce41, __VMLINUX_SYMBOL_STR(put_rpccred) },
	{ 0x6996ba2b, __VMLINUX_SYMBOL_STR(__page_file_mapping) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x687a2e46, __VMLINUX_SYMBOL_STR(rpc_init_wait_queue) },
	{ 0xb7f511da, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xa22c9f04, __VMLINUX_SYMBOL_STR(___might_sleep) },
	{ 0xbf7fd2f5, __VMLINUX_SYMBOL_STR(schedule_timeout_killable) },
	{ 0xb61c8482, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x67c4238c, __VMLINUX_SYMBOL_STR(rpcauth_stringify_acceptor) },
	{ 0x3ca31f35, __VMLINUX_SYMBOL_STR(nfs_net_id) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x602502ef, __VMLINUX_SYMBOL_STR(nfs_commit_file) },
	{ 0xe7487b3e, __VMLINUX_SYMBOL_STR(nfs_link) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xd802d55d, __VMLINUX_SYMBOL_STR(xdr_inline_pages) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe691c0a8, __VMLINUX_SYMBOL_STR(generic_key_instantiate) },
	{ 0x68866a89, __VMLINUX_SYMBOL_STR(user_free_preparse) },
	{ 0xfbaac06d, __VMLINUX_SYMBOL_STR(rpc_restart_call) },
	{ 0x1df88ed8, __VMLINUX_SYMBOL_STR(user_read) },
	{ 0x61543237, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x2f545305, __VMLINUX_SYMBOL_STR(nfs_instantiate) },
	{ 0x7d6dafa6, __VMLINUX_SYMBOL_STR(nfs_setattr_update_inode) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x2e8ebd46, __VMLINUX_SYMBOL_STR(nfs_commitdata_alloc) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9030bccf, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xd7dfd6e0, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x76943f44, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x8970ba6d, __VMLINUX_SYMBOL_STR(nfs_file_read) },
	{ 0x51a93a69, __VMLINUX_SYMBOL_STR(unregister_nfs_version) },
	{ 0x429b6094, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x8ccf05cd, __VMLINUX_SYMBOL_STR(rpc_add_pipe_dir_object) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x8f2a2914, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0x93b67223, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0x9547bac3, __VMLINUX_SYMBOL_STR(nfs_filemap_write_and_wait_range) },
	{ 0x7ebd4be4, __VMLINUX_SYMBOL_STR(trace_print_flags_seq) },
	{ 0x4cb9e001, __VMLINUX_SYMBOL_STR(recover_lost_locks) },
	{ 0x892d1e95, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x5bec5c0b, __VMLINUX_SYMBOL_STR(nfs_rmdir) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x50d188e2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x1018b7cc, __VMLINUX_SYMBOL_STR(nfs_fs_mount_common) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5ccddecd, __VMLINUX_SYMBOL_STR(rpcauth_lookupcred) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x8095b023, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0x2b472ba4, __VMLINUX_SYMBOL_STR(blk_get_backing_dev_info) },
	{ 0x8dead1d9, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xfb7ee006, __VMLINUX_SYMBOL_STR(nfs_alloc_fattr) },
	{ 0xcbc53026, __VMLINUX_SYMBOL_STR(nfs_server_copy_userdata) },
	{ 0xd3bc530e, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_lock) },
	{ 0x93408701, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xfc619abd, __VMLINUX_SYMBOL_STR(_nfs_display_fhandle) },
	{ 0x7937d84e, __VMLINUX_SYMBOL_STR(nfs_may_open) },
	{ 0xf6c364c9, __VMLINUX_SYMBOL_STR(rpc_remove_pipe_dir_object) },
	{ 0x42e35f93, __VMLINUX_SYMBOL_STR(nfs_destroy_inode) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x94e7ec90, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xbaf3ba21, __VMLINUX_SYMBOL_STR(rpc_exit) },
	{ 0x98b0ece8, __VMLINUX_SYMBOL_STR(nfs_init_timeout_values) },
	{ 0x1fbd3fdb, __VMLINUX_SYMBOL_STR(key_validate) },
	{ 0xa7be526f, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0xecd51382, __VMLINUX_SYMBOL_STR(rpc_get_sb_net) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x810519fd, __VMLINUX_SYMBOL_STR(hashlen_string) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc392f21e, __VMLINUX_SYMBOL_STR(nfs_flock) },
	{ 0xbaa9ed14, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xb606e716, __VMLINUX_SYMBOL_STR(nfs_fattr_init) },
	{ 0xfe4c1e4b, __VMLINUX_SYMBOL_STR(key_revoke) },
	{ 0x9bb23d5, __VMLINUX_SYMBOL_STR(cache_check) },
	{ 0xbce49920, __VMLINUX_SYMBOL_STR(nfs4_fs_type) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x7d966cb1, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x974ae337, __VMLINUX_SYMBOL_STR(xdr_terminate_string) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe3175508, __VMLINUX_SYMBOL_STR(nfs_setattr) },
	{ 0x53d2fd73, __VMLINUX_SYMBOL_STR(nfs_free_server) },
	{ 0x56047c31, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0xb1a7eb09, __VMLINUX_SYMBOL_STR(rpc_put_task_async) },
	{ 0x7a156c4, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xf7141489, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xc9f74a26, __VMLINUX_SYMBOL_STR(rpc_call_sync) },
	{ 0x3f2690f2, __VMLINUX_SYMBOL_STR(nfs_check_flags) },
	{ 0x8f429aae, __VMLINUX_SYMBOL_STR(rpc_init_priority_wait_queue) },
	{ 0xbf198245, __VMLINUX_SYMBOL_STR(nfs_file_set_open_context) },
	{ 0xf2e44111, __VMLINUX_SYMBOL_STR(rpc_clnt_iterate_for_each_xprt) },
	{ 0xef3e46a6, __VMLINUX_SYMBOL_STR(xprt_setup_backchannel) },
	{ 0x552bd45b, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0xa8f09976, __VMLINUX_SYMBOL_STR(svc_destroy) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf2d3d513, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x42cbe7bf, __VMLINUX_SYMBOL_STR(register_nfs_version) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xdca898f1, __VMLINUX_SYMBOL_STR(nfs_create_rpc_client) },
	{ 0x8ae6e81b, __VMLINUX_SYMBOL_STR(sunrpc_cache_lookup) },
	{ 0x16624d6e, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xc8405a9d, __VMLINUX_SYMBOL_STR(nfs_path) },
	{ 0xfd3a393b, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0xa9ac39a5, __VMLINUX_SYMBOL_STR(alloc_nfs_open_context) },
	{ 0x33bbae2d, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x3b2be313, __VMLINUX_SYMBOL_STR(rpc_wake_up_first) },
	{ 0xde434656, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x921b388a, __VMLINUX_SYMBOL_STR(nfs_request_remove_commit_list) },
	{ 0x2ff061eb, __VMLINUX_SYMBOL_STR(nfs_write_inode) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xda68dc4a, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x237b3544, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0xf3b704e2, __VMLINUX_SYMBOL_STR(nfs_fscache_open_file) },
	{ 0xe91c559e, __VMLINUX_SYMBOL_STR(nfs_zap_acl_cache) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7fbb117e, __VMLINUX_SYMBOL_STR(nfs_generic_pg_test) },
	{ 0x6c462b18, __VMLINUX_SYMBOL_STR(sunrpc_cache_register_pipefs) },
	{ 0x51c4ae44, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6b798a83, __VMLINUX_SYMBOL_STR(nfs_getattr) },
	{ 0xed472cb3, __VMLINUX_SYMBOL_STR(xdr_init_decode) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x2a875eeb, __VMLINUX_SYMBOL_STR(nfs_umount_begin) },
	{ 0xeed952b7, __VMLINUX_SYMBOL_STR(svc_create_pooled) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x3ddc9695, __VMLINUX_SYMBOL_STR(rpc_lookup_machine_cred) },
	{ 0x51a943e9, __VMLINUX_SYMBOL_STR(rpc_d_lookup_sb) },
	{ 0xe97f4ce5, __VMLINUX_SYMBOL_STR(qword_get) },
	{ 0x262729ce, __VMLINUX_SYMBOL_STR(nfs_invalidate_atime) },
	{ 0x4215f32a, __VMLINUX_SYMBOL_STR(rpc_sleep_on_priority) },
	{ 0x3ff8f9b1, __VMLINUX_SYMBOL_STR(rpc_lookup_cred) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0x181bd13c, __VMLINUX_SYMBOL_STR(nfs_clear_inode) },
	{ 0x706d9768, __VMLINUX_SYMBOL_STR(rpc_peeraddr2str) },
	{ 0x26064111, __VMLINUX_SYMBOL_STR(nfs4_dentry_operations) },
	{ 0x53f23af6, __VMLINUX_SYMBOL_STR(nfs_retry_commit) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x9e5a32da, __VMLINUX_SYMBOL_STR(user_describe) },
	{ 0xb6a68816, __VMLINUX_SYMBOL_STR(find_last_bit) },
	{ 0x22dda6fe, __VMLINUX_SYMBOL_STR(svc_process) },
	{ 0xa07a37f0, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0xa7ff32c1, __VMLINUX_SYMBOL_STR(svc_rpcb_cleanup) },
	{ 0x994c4c15, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x70792a4c, __VMLINUX_SYMBOL_STR(inc_node_page_state) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xd1365c80, __VMLINUX_SYMBOL_STR(rpc_clone_client) },
	{ 0x55a8433f, __VMLINUX_SYMBOL_STR(rpc_clone_client_set_auth) },
	{ 0xfcd11c90, __VMLINUX_SYMBOL_STR(request_key_with_auxdata) },
	{ 0xf70e4a4d, __VMLINUX_SYMBOL_STR(preempt_schedule_notrace) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x6450794d, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x4fd6a7ae, __VMLINUX_SYMBOL_STR(nfs_do_submount) },
	{ 0x42f2c81f, __VMLINUX_SYMBOL_STR(nfs4_client_id_uniquifier) },
	{ 0x4db2df17, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x244b6588, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0x2cdfcafc, __VMLINUX_SYMBOL_STR(sunrpc_init_cache_detail) },
	{ 0x63dcbcdf, __VMLINUX_SYMBOL_STR(get_nfs_open_context) },
	{ 0xdc44b91d, __VMLINUX_SYMBOL_STR(nfs_kill_super) },
	{ 0x87cfe738, __VMLINUX_SYMBOL_STR(perf_trace_buf_alloc) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xdf16122d, __VMLINUX_SYMBOL_STR(sunrpc_destroy_cache_detail) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x70126613, __VMLINUX_SYMBOL_STR(mount_subtree) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x4d3e2020, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0x26884ff7, __VMLINUX_SYMBOL_STR(nfs_alloc_fhandle) },
	{ 0xf3ac3d9a, __VMLINUX_SYMBOL_STR(nfs_commit_free) },
	{ 0xaf6ae696, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0xedcf6be4, __VMLINUX_SYMBOL_STR(qword_add) },
	{ 0x8677d2ff, __VMLINUX_SYMBOL_STR(nfs_show_options) },
	{ 0x82425640, __VMLINUX_SYMBOL_STR(nfs_put_client) },
	{ 0xba408b54, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x74662440, __VMLINUX_SYMBOL_STR(nfs_lookup) },
	{ 0xbc4b4877, __VMLINUX_SYMBOL_STR(nfs_rename) },
	{ 0x6095f0b6, __VMLINUX_SYMBOL_STR(nfs_put_lock_context) },
	{ 0x1e281d7c, __VMLINUX_SYMBOL_STR(mntput) },
	{ 0x6cba9ca2, __VMLINUX_SYMBOL_STR(__rpc_wait_for_completion_task) },
	{ 0xc2e73abf, __VMLINUX_SYMBOL_STR(nfs_remount) },
	{ 0x1da5af02, __VMLINUX_SYMBOL_STR(svc_create_xprt) },
	{ 0x71fd3b7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x6c4c31ce, __VMLINUX_SYMBOL_STR(nfs_file_fsync) },
	{ 0xb0037f3d, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0x783b3563, __VMLINUX_SYMBOL_STR(wake_up_atomic_t) },
	{ 0x4fe710f1, __VMLINUX_SYMBOL_STR(nfs_atomic_open) },
	{ 0x58de11c0, __VMLINUX_SYMBOL_STR(rpc_protocol) },
	{ 0x360f8f8a, __VMLINUX_SYMBOL_STR(__cond_resched_lock) },
	{ 0xc099a18c, __VMLINUX_SYMBOL_STR(nfs_open) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0x16e297c3, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x387e1639, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_register) },
	{ 0x6f7d8599, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x469130e6, __VMLINUX_SYMBOL_STR(nfs_get_client) },
	{ 0x4df887b9, __VMLINUX_SYMBOL_STR(simple_nosetlease) },
	{ 0xa31a351c, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0xe0930fab, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xa8e9e1ae, __VMLINUX_SYMBOL_STR(send_implementation_id) },
	{ 0x2613b574, __VMLINUX_SYMBOL_STR(nfs_commit_inode) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x1849bbb, __VMLINUX_SYMBOL_STR(bc_svc_process) },
	{ 0x81acd741, __VMLINUX_SYMBOL_STR(rpc_switch_client_transport) },
	{ 0xb32eff6f, __VMLINUX_SYMBOL_STR(xprt_destroy_backchannel) },
	{ 0xdf2c82f3, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x3ec92cb7, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x8247deeb, __VMLINUX_SYMBOL_STR(nfs_generic_pgio) },
	{ 0xa3ab4ecf, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x8acd99, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x2b8b1160, __VMLINUX_SYMBOL_STR(rpc_clnt_setup_test_and_add_xprt) },
	{ 0xf0d3fe6d, __VMLINUX_SYMBOL_STR(xdr_enter_page) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x45452cf0, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x127714b7, __VMLINUX_SYMBOL_STR(rpc_release_client) },
	{ 0x568a1f4b, __VMLINUX_SYMBOL_STR(nfs_clone_sb_security) },
	{ 0xfd4185b, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xea333b63, __VMLINUX_SYMBOL_STR(nfs_file_mmap) },
	{ 0x471c4b23, __VMLINUX_SYMBOL_STR(nfs_get_lock_context) },
	{ 0x564f9ee5, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0xaee19311, __VMLINUX_SYMBOL_STR(nfs_revalidate_inode) },
	{ 0xea4b04bd, __VMLINUX_SYMBOL_STR(nfs_mkdir) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x86dd9f27, __VMLINUX_SYMBOL_STR(locks_lock_inode_wait) },
	{ 0xcea741af, __VMLINUX_SYMBOL_STR(rpc_clnt_xprt_switch_add_xprt) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x91c8eca6, __VMLINUX_SYMBOL_STR(nfs_fill_super) },
	{ 0x324c2e65, __VMLINUX_SYMBOL_STR(svc_set_num_threads_sync) },
	{ 0x90a5530f, __VMLINUX_SYMBOL_STR(nfsiod_workqueue) },
	{ 0x584b8482, __VMLINUX_SYMBOL_STR(nfs_inc_attr_generation_counter) },
	{ 0xd4d3491c, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x5f11a0a9, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0x25259d2c, __VMLINUX_SYMBOL_STR(rpc_max_bc_payload) },
	{ 0x9769c334, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x8ab6485f, __VMLINUX_SYMBOL_STR(nfs_statfs) },
	{ 0x2989a348, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x8bbfb7c7, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xa8f56a16, __VMLINUX_SYMBOL_STR(xprt_put) },
	{ 0x82726918, __VMLINUX_SYMBOL_STR(rpc_put_sb_net) },
	{ 0x3e64bb05, __VMLINUX_SYMBOL_STR(complete_request_key) },
	{ 0x438d023b, __VMLINUX_SYMBOL_STR(nfs_create) },
	{ 0x6a96ac8a, __VMLINUX_SYMBOL_STR(vfs_setpos) },
	{ 0x79c47dc, __VMLINUX_SYMBOL_STR(keyring_alloc) },
	{ 0x33316627, __VMLINUX_SYMBOL_STR(nfs_pageio_resend) },
	{ 0xbbb5ebfd, __VMLINUX_SYMBOL_STR(rpc_run_task) },
	{ 0x4839bdcf, __VMLINUX_SYMBOL_STR(rpc_sleep_on) },
	{ 0xf5e6a019, __VMLINUX_SYMBOL_STR(register_key_type) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xeb674034, __VMLINUX_SYMBOL_STR(xdr_read_pages) },
	{ 0x3539f11b, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3cac5b4c, __VMLINUX_SYMBOL_STR(key_instantiate_and_link) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xce6306f3, __VMLINUX_SYMBOL_STR(nfs_pgio_current_mirror) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0xf5f9daa0, __VMLINUX_SYMBOL_STR(nfs_file_release) },
	{ 0xbde33013, __VMLINUX_SYMBOL_STR(rpc_task_release_transport) },
	{ 0xe820b269, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xd66ffb00, __VMLINUX_SYMBOL_STR(_copy_from_pages) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x184e965a, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xa9b08646, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0x3fbf56be, __VMLINUX_SYMBOL_STR(svc_shutdown_net) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x45834e9, __VMLINUX_SYMBOL_STR(rpcauth_get_pseudoflavor) },
	{ 0xe8a73aaf, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xf9699aa0, __VMLINUX_SYMBOL_STR(rpc_wake_up_queued_task) },
	{ 0x1f2a9970, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0x41006f65, __VMLINUX_SYMBOL_STR(I_BDEV) },
	{ 0x42fbd27a, __VMLINUX_SYMBOL_STR(nfs_sb_active) },
	{ 0x9ec794e2, __VMLINUX_SYMBOL_STR(rpc_pton) },
	{ 0xd373dc0f, __VMLINUX_SYMBOL_STR(iter_file_splice_write) },
	{ 0x33b9c4b1, __VMLINUX_SYMBOL_STR(blockdev_superblock) },
	{ 0x1b70a606, __VMLINUX_SYMBOL_STR(nfs_pgio_header_alloc) },
	{ 0x9bc6ef31, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x8ab2e95e, __VMLINUX_SYMBOL_STR(nfs_request_add_commit_list_locked) },
	{ 0x4d12d8f8, __VMLINUX_SYMBOL_STR(nfs_pgio_header_free) },
	{ 0xdf3d2a7c, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x87ace2b6, __VMLINUX_SYMBOL_STR(svc_exit_thread) },
	{ 0x274642dc, __VMLINUX_SYMBOL_STR(ida_remove) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x50ce1168, __VMLINUX_SYMBOL_STR(nfs_post_op_update_inode) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf6599636, __VMLINUX_SYMBOL_STR(truncate_pagecache_range) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x24ee23e3, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x61520529, __VMLINUX_SYMBOL_STR(trace_print_symbols_seq) },
	{ 0x3220bd0a, __VMLINUX_SYMBOL_STR(user_preparse) },
	{ 0x29ade55f, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x1bca2a90, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xc0a6a93e, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x40da610e, __VMLINUX_SYMBOL_STR(nfs_probe_fsinfo) },
	{ 0x1d194cee, __VMLINUX_SYMBOL_STR(ida_pre_get) },
	{ 0x23d6fa5c, __VMLINUX_SYMBOL_STR(unregister_key_type) },
	{ 0xca7d8764, __VMLINUX_SYMBOL_STR(kthread_freezable_should_stop) },
	{ 0x8a164d9c, __VMLINUX_SYMBOL_STR(svc_xprt_do_enqueue) },
	{ 0xe803f6a, __VMLINUX_SYMBOL_STR(nfs_lock) },
	{ 0x7453c0f5, __VMLINUX_SYMBOL_STR(idr_replace) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x6ae95b29, __VMLINUX_SYMBOL_STR(rpc_wake_up) },
	{ 0xfe159675, __VMLINUX_SYMBOL_STR(rpc_localaddr) },
	{ 0xd8190287, __VMLINUX_SYMBOL_STR(nfs4_label_alloc) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd3c32d70, __VMLINUX_SYMBOL_STR(nfs_inode_attach_open_context) },
	{ 0xb31fd1b0, __VMLINUX_SYMBOL_STR(nfs_mknod) },
	{ 0xda52cc44, __VMLINUX_SYMBOL_STR(rpc_net_ns) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x9176b243, __VMLINUX_SYMBOL_STR(vfs_submount) },
	{ 0xe3f9e016, __VMLINUX_SYMBOL_STR(nfs_commitdata_release) },
	{ 0xb51a3724, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_unregister) },
	{ 0x245fd0dd, __VMLINUX_SYMBOL_STR(nfs_init_commit) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x89bd893f, __VMLINUX_SYMBOL_STR(nfs_wait_client_init_complete) },
	{ 0xe0557cf6, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x739499ad, __VMLINUX_SYMBOL_STR(nfs_pageio_init_read) },
	{ 0xe6f47baa, __VMLINUX_SYMBOL_STR(cache_create_net) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x18b5b1f8, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd86edeae, __VMLINUX_SYMBOL_STR(nfs_drop_inode) },
	{ 0x84ab51c0, __VMLINUX_SYMBOL_STR(svc_recv) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x7b5be1d4, __VMLINUX_SYMBOL_STR(nfs_pageio_init_write) },
	{ 0x82020e74, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0xe2f0b566, __VMLINUX_SYMBOL_STR(nfs_wb_all) },
	{ 0x97fd3620, __VMLINUX_SYMBOL_STR(nfs_sb_deactive) },
	{ 0x225529f0, __VMLINUX_SYMBOL_STR(nfs_access_zap_cache) },
	{ 0x40739385, __VMLINUX_SYMBOL_STR(nfs_wait_bit_killable) },
	{ 0xa9314707, __VMLINUX_SYMBOL_STR(svc_bind) },
	{ 0xb2dd5e60, __VMLINUX_SYMBOL_STR(rpc_shutdown_client) },
	{ 0xcdc39c9e, __VMLINUX_SYMBOL_STR(security_ismaclabel) },
	{ 0xdfba791, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0xcf9a3fb7, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0x8dbbf873, __VMLINUX_SYMBOL_STR(rpc_cap_max_reconnect_timeout) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x9133bb34, __VMLINUX_SYMBOL_STR(nfs_mark_client_ready) },
	{ 0xdae9b5d7, __VMLINUX_SYMBOL_STR(nfs4_disable_idmapping) },
	{ 0x8618c8aa, __VMLINUX_SYMBOL_STR(ida_get_new_above) },
	{ 0xf3a426a4, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x84c15357, __VMLINUX_SYMBOL_STR(nfs_alloc_client) },
	{ 0x78383629, __VMLINUX_SYMBOL_STR(d_exact_alias) },
	{ 0xb81ed030, __VMLINUX_SYMBOL_STR(user_revoke) },
	{ 0x5e9d2568, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x223fa293, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x5b9b2286, __VMLINUX_SYMBOL_STR(user_destroy) },
	{ 0x6e5938d6, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x3be448ae, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x3200a802, __VMLINUX_SYMBOL_STR(nfs_writeback_update_inode) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x64cbc7c1, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0x766d9ec8, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x8bb66f67, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x6942c561, __VMLINUX_SYMBOL_STR(generic_listxattr) },
	{ 0x263c3152, __VMLINUX_SYMBOL_STR(bcmp) },
	{ 0xf31643fb, __VMLINUX_SYMBOL_STR(nfs_server_remove_lists) },
	{ 0xcd09809d, __VMLINUX_SYMBOL_STR(nfs_show_stats) },
	{ 0x9a93508, __VMLINUX_SYMBOL_STR(filemap_fdatawrite) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x7ebc3ba4, __VMLINUX_SYMBOL_STR(noop_backing_dev_info) },
	{ 0xa06b23af, __VMLINUX_SYMBOL_STR(nfs_access_add_cache) },
	{ 0x71b98f9c, __VMLINUX_SYMBOL_STR(nfs_clone_server) },
	{ 0x1ebac2bd, __VMLINUX_SYMBOL_STR(getboottime64) },
	{ 0xbefb5b29, __VMLINUX_SYMBOL_STR(rpc_put_task) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfs,sunrpc,fscache";
