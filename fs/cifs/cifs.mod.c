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
	{ 0x5c75aee1, __VMLINUX_SYMBOL_STR(crypto_alloc_skcipher) },
	{ 0x2c013072, __VMLINUX_SYMBOL_STR(request_key) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x183d46df, __VMLINUX_SYMBOL_STR(__fscache_acquire_cookie) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0x9a694f4d, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x30a029bd, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x787ccdd0, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xa675804c, __VMLINUX_SYMBOL_STR(utf8s_to_utf16s) },
	{ 0xe353ff64, __VMLINUX_SYMBOL_STR(set_anon_super) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xb68513a0, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x2c23067a, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x5781d287, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x90b2c069, __VMLINUX_SYMBOL_STR(__fscache_wait_on_page_write) },
	{ 0xbb0f08b7, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0xde81f9f8, __VMLINUX_SYMBOL_STR(d_invalidate) },
	{ 0x8cf5148, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0x6060dc10, __VMLINUX_SYMBOL_STR(key_invalidate) },
	{ 0x379104c5, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x78a356bd, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xf410d6f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x50cd3ef9, __VMLINUX_SYMBOL_STR(mntget) },
	{ 0xbcdbb932, __VMLINUX_SYMBOL_STR(generic_write_checks) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdd991c0e, __VMLINUX_SYMBOL_STR(filemap_fdatawait) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xc29bf967, __VMLINUX_SYMBOL_STR(strspn) },
	{ 0x90bb6784, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xee37529, __VMLINUX_SYMBOL_STR(__generic_file_write_iter) },
	{ 0xd1d30d11, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0xeda10b34, __VMLINUX_SYMBOL_STR(prepare_kernel_cred) },
	{ 0x27330d06, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x21e14d9c, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0xb8b043f2, __VMLINUX_SYMBOL_STR(kfree_link) },
	{ 0x35222f65, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0x2c9b36aa, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xad687a9d, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xaa7c1a41, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xac1011a1, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xdd613f4b, __VMLINUX_SYMBOL_STR(truncate_inode_pages_range) },
	{ 0xfedc5273, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0xc71cd3bb, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x52d5bb68, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xb52a052e, __VMLINUX_SYMBOL_STR(lookup_one_len_unlocked) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xb4cd3b6f, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0xaa53e2ae, __VMLINUX_SYMBOL_STR(deactivate_locked_super) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xb7f511da, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xa22c9f04, __VMLINUX_SYMBOL_STR(___might_sleep) },
	{ 0xb61c8482, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x41fc7786, __VMLINUX_SYMBOL_STR(sock_recvmsg) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x667ae412, __VMLINUX_SYMBOL_STR(__fscache_write_page) },
	{ 0x253a4b00, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x949b754f, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x7ffa2a91, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x1c4caa26, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2) },
	{ 0x61543237, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x706b2398, __VMLINUX_SYMBOL_STR(__fscache_register_netfs) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xb37bee52, __VMLINUX_SYMBOL_STR(rename_lock) },
	{ 0xb65d991c, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0xde815296, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x9ee27cb2, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x1ac5d3cb, __VMLINUX_SYMBOL_STR(strcspn) },
	{ 0x73c07b98, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x60ffa429, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x7bafa862, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x892d1e95, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xe224aa9f, __VMLINUX_SYMBOL_STR(__fscache_uncache_page) },
	{ 0x611922cf, __VMLINUX_SYMBOL_STR(copy_page_from_iter) },
	{ 0x7583e7f1, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0x50d188e2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x4841bdee, __VMLINUX_SYMBOL_STR(strnchr) },
	{ 0xd9090406, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x35af351a, __VMLINUX_SYMBOL_STR(lru_cache_add_file) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8dead1d9, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xd3bc530e, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_lock) },
	{ 0x73438290, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0xc213c959, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0xb0d83e9, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x94e7ec90, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0xe8ef0ff0, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0xfe4c1e4b, __VMLINUX_SYMBOL_STR(key_revoke) },
	{ 0xeb49cfff, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0x185ff504, __VMLINUX_SYMBOL_STR(iov_iter_bvec) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4a38b698, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xf7141489, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x2ac9f6a9, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x7705febc, __VMLINUX_SYMBOL_STR(__fscache_read_or_alloc_page) },
	{ 0xc0234c8b, __VMLINUX_SYMBOL_STR(__fscache_uncache_all_inode_pages) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xe0d2211f, __VMLINUX_SYMBOL_STR(finish_no_open) },
	{ 0x50542d11, __VMLINUX_SYMBOL_STR(wait_for_completion_killable) },
	{ 0xf2d3d513, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x2e2b40d2, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0xb74ce3c6, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x79f7656a, __VMLINUX_SYMBOL_STR(copy_page_to_iter) },
	{ 0x4327170f, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0xa4ae6e84, __VMLINUX_SYMBOL_STR(sock_sendmsg) },
	{ 0x5c56e2d9, __VMLINUX_SYMBOL_STR(generic_writepages) },
	{ 0x15fb5c23, __VMLINUX_SYMBOL_STR(sget) },
	{ 0xfd3a393b, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x798bed1d, __VMLINUX_SYMBOL_STR(iov_iter_kvec) },
	{ 0x64db9a5, __VMLINUX_SYMBOL_STR(mark_mounts_for_expiry) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3b7c7076, __VMLINUX_SYMBOL_STR(__fscache_maybe_release_page) },
	{ 0x237b3544, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0xb1a3243c, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x72bfbc53, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x22f9163c, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x65634411, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0xeaa847f3, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0xa681fe88, __VMLINUX_SYMBOL_STR(generate_random_uuid) },
	{ 0x3bc1905f, __VMLINUX_SYMBOL_STR(unlock_two_nondirectories) },
	{ 0xf72d6049, __VMLINUX_SYMBOL_STR(init_uts_ns) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x9e5a32da, __VMLINUX_SYMBOL_STR(user_describe) },
	{ 0x2cd85a40, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0xa07a37f0, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0xf2cc2f7b, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0x78c19a6d, __VMLINUX_SYMBOL_STR(mempool_resize) },
	{ 0x29baae12, __VMLINUX_SYMBOL_STR(key_type_logon) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xa4bc255b, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x59bd9654, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x904c6e43, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x6450794d, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x4db2df17, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xed696697, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x4d3e2020, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0xaf6ae696, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0x1e0dadb6, __VMLINUX_SYMBOL_STR(dns_query) },
	{ 0xa052ea07, __VMLINUX_SYMBOL_STR(__fscache_unregister_netfs) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0xb2682405, __VMLINUX_SYMBOL_STR(utf8_to_utf32) },
	{ 0xd76e26e1, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x71fd3b7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x4a9a4cc0, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0x16e297c3, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0xde48538b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x918c6374, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xeec65e29, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0xf4abce0b, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xde8a947, __VMLINUX_SYMBOL_STR(generic_setlease) },
	{ 0xdf2c82f3, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x3ec92cb7, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xaad860f3, __VMLINUX_SYMBOL_STR(find_get_pages_tag) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x4e1ba304, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x45452cf0, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xaccabc6a, __VMLINUX_SYMBOL_STR(in4_pton) },
	{ 0xcbff5e68, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x9abbab55, __VMLINUX_SYMBOL_STR(__d_lookup_done) },
	{ 0xa5e83e0c, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x3573ebda, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x1bae0e1, __VMLINUX_SYMBOL_STR(deactivate_super) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x94b78406, __VMLINUX_SYMBOL_STR(bdi_setup_and_register) },
	{ 0xfd4185b, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x6688bab4, __VMLINUX_SYMBOL_STR(lock_two_nondirectories) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x86dd9f27, __VMLINUX_SYMBOL_STR(locks_lock_inode_wait) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x1babd4ec, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x5f11a0a9, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0x9769c334, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x8bbfb7c7, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0x79c47dc, __VMLINUX_SYMBOL_STR(keyring_alloc) },
	{ 0x4adb52a8, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0xc15a44c6, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0xf5e6a019, __VMLINUX_SYMBOL_STR(register_key_type) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb69f9b00, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc6c09e43, __VMLINUX_SYMBOL_STR(kstrtobool_from_user) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xd7ce2481, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x93e9c0e8, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xda564c6, __VMLINUX_SYMBOL_STR(__fscache_relinquish_cookie) },
	{ 0xe820b269, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x13a3fcd3, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xbe224659, __VMLINUX_SYMBOL_STR(__pagevec_release) },
	{ 0xe87f0cce, __VMLINUX_SYMBOL_STR(add_to_page_cache_locked) },
	{ 0xe6b587d1, __VMLINUX_SYMBOL_STR(d_hash_and_lookup) },
	{ 0xe8a73aaf, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x7979840, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0x73fabbc3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xef7c9f2f, __VMLINUX_SYMBOL_STR(posix_unblock_lock) },
	{ 0x6dbd491f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xdf3d2a7c, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x3b861ece, __VMLINUX_SYMBOL_STR(finish_open) },
	{ 0xc32a03b8, __VMLINUX_SYMBOL_STR(posix_lock_file) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7735fc06, __VMLINUX_SYMBOL_STR(__fscache_readpages_cancel) },
	{ 0x9a212bd7, __VMLINUX_SYMBOL_STR(iunique) },
	{ 0xf6599636, __VMLINUX_SYMBOL_STR(truncate_pagecache_range) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xaf29b64c, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0xa109cd16, __VMLINUX_SYMBOL_STR(pagevec_lookup) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x9bd971b0, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xea96b95e, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xc0a6a93e, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x23d6fa5c, __VMLINUX_SYMBOL_STR(unregister_key_type) },
	{ 0x55c094cd, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xe57878a1, __VMLINUX_SYMBOL_STR(in6_pton) },
	{ 0x88bb9b00, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xc2ffb315, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xd55b0109, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1108e82c, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x6a3425c0, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x9176b243, __VMLINUX_SYMBOL_STR(vfs_submount) },
	{ 0xc47706b2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x279dd8f2, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x3be74f4b, __VMLINUX_SYMBOL_STR(filemap_map_pages) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x84940f9a, __VMLINUX_SYMBOL_STR(__break_lease) },
	{ 0x82020e74, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x46bd25b8, __VMLINUX_SYMBOL_STR(mnt_set_expiry) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x2668df5e, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xb71d6f99, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0xf07d1626, __VMLINUX_SYMBOL_STR(__fscache_read_or_alloc_pages) },
	{ 0x223fa293, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x6e5938d6, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xa4fe83b, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xf7b9ba5, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x9100d77c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x64cbc7c1, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0x1200ffa8, __VMLINUX_SYMBOL_STR(d_alloc_parallel) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x766d9ec8, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xbfd5ce0e, __VMLINUX_SYMBOL_STR(__sock_create) },
	{ 0x97fdd524, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x263c3152, __VMLINUX_SYMBOL_STR(bcmp) },
	{ 0x170ed16f, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0x4a53f59e, __VMLINUX_SYMBOL_STR(setattr_prepare) },
	{ 0xe76ba8fc, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0x9a93508, __VMLINUX_SYMBOL_STR(filemap_fdatawrite) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x3c8ddbab, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
	{ 0xf3ad085d, __VMLINUX_SYMBOL_STR(posix_test_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fscache";


MODULE_INFO(srcversion, "6AC33BBB57F81BF04514263");