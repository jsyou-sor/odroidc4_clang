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
	{ 0x505da71d, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xc51b0803, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9a694f4d, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x7be1e7a2, __VMLINUX_SYMBOL_STR(address_space_init_once) },
	{ 0x141efa7c, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x30a029bd, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x787ccdd0, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x54776910, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xb68513a0, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x7366a910, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xbfff4dc7, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5781d287, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xbb0f08b7, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x8cf5148, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x78a356bd, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xd1d30d11, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x4be3faa9, __VMLINUX_SYMBOL_STR(find_get_pages_contig) },
	{ 0x35f98393, __VMLINUX_SYMBOL_STR(bdev_read_only) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xdb274889, __VMLINUX_SYMBOL_STR(block_invalidatepage) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x3d573599, __VMLINUX_SYMBOL_STR(block_is_partially_uptodate) },
	{ 0xf94faca4, __VMLINUX_SYMBOL_STR(block_write_begin) },
	{ 0xaa7c1a41, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x465f13d4, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x2f048569, __VMLINUX_SYMBOL_STR(blkdev_issue_flush) },
	{ 0xac1011a1, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x84d20ea, __VMLINUX_SYMBOL_STR(touch_buffer) },
	{ 0xf2f597bd, __VMLINUX_SYMBOL_STR(downgrade_write) },
	{ 0xfedc5273, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0x52d5bb68, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xfff5afc, __VMLINUX_SYMBOL_STR(time64_to_tm) },
	{ 0xd7ccb416, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0x3f0e7741, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0xaa53e2ae, __VMLINUX_SYMBOL_STR(deactivate_locked_super) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xb7f511da, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xa22c9f04, __VMLINUX_SYMBOL_STR(___might_sleep) },
	{ 0xb61c8482, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x7ffa2a91, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xac405843, __VMLINUX_SYMBOL_STR(d_find_alias) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x76943f44, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x6505263f, __VMLINUX_SYMBOL_STR(d_instantiate_new) },
	{ 0xb984ce95, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0x9ee27cb2, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xc76ff623, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x429b6094, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x3dbd8a74, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x73c07b98, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0xb7a763fa, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x50d188e2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xc67c186b, __VMLINUX_SYMBOL_STR(insert_inode_locked4) },
	{ 0xd9090406, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x8dead1d9, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc213c959, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0x94e7ec90, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xf9dde891, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xa7a47687, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0x5c1d8ba9, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x7d966cb1, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf7141489, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x908a72eb, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x70e6e57f, __VMLINUX_SYMBOL_STR(d_obtain_root) },
	{ 0xa3f90c3f, __VMLINUX_SYMBOL_STR(inode_add_bytes) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf2d3d513, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x98717ca8, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc5752e56, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xba7025c0, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x16624d6e, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xde9fb32b, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x15fb5c23, __VMLINUX_SYMBOL_STR(sget) },
	{ 0x2de39ca9, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xda68dc4a, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xb68e6a3a, __VMLINUX_SYMBOL_STR(__sync_dirty_buffer) },
	{ 0x237b3544, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x1044ab48, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x72bfbc53, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x22f9163c, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb3669c0, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x305394e9, __VMLINUX_SYMBOL_STR(file_update_time) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xeaa847f3, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0xc3d80d88, __VMLINUX_SYMBOL_STR(page_symlink) },
	{ 0x1b3adcf9, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x2cd85a40, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0xf2cc2f7b, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x59bd9654, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xf70e4a4d, __VMLINUX_SYMBOL_STR(preempt_schedule_notrace) },
	{ 0x904c6e43, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x6450794d, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x4db2df17, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x244b6588, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0x87cfe738, __VMLINUX_SYMBOL_STR(perf_trace_buf_alloc) },
	{ 0x39a82e7d, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0x94bd2aad, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xedd0cd89, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0x3c83a56f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x436db3ec, __VMLINUX_SYMBOL_STR(ilookup5) },
	{ 0xd76e26e1, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x4a9a4cc0, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0x312772af, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xde48538b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf72ace41, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x4d0d163d, __VMLINUX_SYMBOL_STR(copy_page) },
	{ 0xc25218a8, __VMLINUX_SYMBOL_STR(radix_tree_tag_set) },
	{ 0x174faef5, __VMLINUX_SYMBOL_STR(wait_for_stable_page) },
	{ 0x25070e96, __VMLINUX_SYMBOL_STR(fs_kobj) },
	{ 0xa2e92793, __VMLINUX_SYMBOL_STR(inode_sub_bytes) },
	{ 0x5ec0e37a, __VMLINUX_SYMBOL_STR(block_write_end) },
	{ 0xdf2c82f3, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0xe63ec93c, __VMLINUX_SYMBOL_STR(create_empty_buffers) },
	{ 0x3ec92cb7, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xa3ab4ecf, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0xbd0f6bd, __VMLINUX_SYMBOL_STR(pagevec_lookup_tag) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa1df60bd, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0x6bcf1382, __VMLINUX_SYMBOL_STR(__breadahead) },
	{ 0xfdfc0b3b, __VMLINUX_SYMBOL_STR(fiemap_fill_next_extent) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xa5e83e0c, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x3573ebda, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x49e5867b, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xd4d3491c, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x9769c334, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x378fcec4, __VMLINUX_SYMBOL_STR(shrink_dcache_parent) },
	{ 0x4adb52a8, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0x3e2286cd, __VMLINUX_SYMBOL_STR(__radix_tree_insert) },
	{ 0x6114c04c, __VMLINUX_SYMBOL_STR(submit_bh) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1aa2693a, __VMLINUX_SYMBOL_STR(radix_tree_tag_clear) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xd7ce2481, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x93e9c0e8, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x13a3fcd3, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0x184e965a, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xbe224659, __VMLINUX_SYMBOL_STR(__pagevec_release) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x7979840, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0x9bc6ef31, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x6e90420f, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0xdf3d2a7c, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x96adac55, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0xf422a7d7, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2_range) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xaf29b64c, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0x53877fc0, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0x154d38e2, __VMLINUX_SYMBOL_STR(page_get_link) },
	{ 0xa109cd16, __VMLINUX_SYMBOL_STR(pagevec_lookup) },
	{ 0x24ee23e3, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9e848654, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0x61520529, __VMLINUX_SYMBOL_STR(trace_print_symbols_seq) },
	{ 0x29ade55f, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x9bd971b0, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0x1bca2a90, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xc0a6a93e, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x721b1851, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x4bd71d19, __VMLINUX_SYMBOL_STR(block_page_mkwrite) },
	{ 0xcd18a6a, __VMLINUX_SYMBOL_STR(end_buffer_read_sync) },
	{ 0x9754ec10, __VMLINUX_SYMBOL_STR(radix_tree_preload) },
	{ 0x55c094cd, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xfd2aea82, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0x82054276, __VMLINUX_SYMBOL_STR(block_truncate_page) },
	{ 0x976bde32, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xfb260835, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0x88bb9b00, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xc2ffb315, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xf18f39cd, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xc459d8ef, __VMLINUX_SYMBOL_STR(inode_set_flags) },
	{ 0xc3584cc, __VMLINUX_SYMBOL_STR(__block_write_begin) },
	{ 0xa8cc6ab9, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0xc47706b2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x279dd8f2, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xe0557cf6, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x3be74f4b, __VMLINUX_SYMBOL_STR(filemap_map_pages) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x871c0a7e, __VMLINUX_SYMBOL_STR(fiemap_check_flags) },
	{ 0xbfe20205, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x82020e74, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0xf5e65e8a, __VMLINUX_SYMBOL_STR(empty_aops) },
	{ 0x6e5938d6, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xa4fe83b, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xf7b9ba5, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x9100d77c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x766d9ec8, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x97fdd524, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x263c3152, __VMLINUX_SYMBOL_STR(bcmp) },
	{ 0x4a53f59e, __VMLINUX_SYMBOL_STR(setattr_prepare) },
	{ 0x8b9bfd92, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0x95906c19, __VMLINUX_SYMBOL_STR(__page_file_index) },
	{ 0x3c8ddbab, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";
