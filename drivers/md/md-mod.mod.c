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
	{ 0xe6be23f6, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x141efa7c, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x117c9c78, __VMLINUX_SYMBOL_STR(kobject_get) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x6b1b67d3, __VMLINUX_SYMBOL_STR(__bdevname) },
	{ 0x5896758, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x262e2b2d, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x4423c52c, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x7410aba2, __VMLINUX_SYMBOL_STR(strreplace) },
	{ 0x7366a910, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x51ea0b33, __VMLINUX_SYMBOL_STR(badblocks_store) },
	{ 0x1f0b60c7, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x687878d0, __VMLINUX_SYMBOL_STR(bmap) },
	{ 0xac9e3057, __VMLINUX_SYMBOL_STR(badblocks_clear) },
	{ 0x3a9b6fb9, __VMLINUX_SYMBOL_STR(blk_unregister_region) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x88178a59, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x6fbba5ab, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x462c660f, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x9dd3dd06, __VMLINUX_SYMBOL_STR(bd_link_disk_holder) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0x8023371c, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xa22c9f04, __VMLINUX_SYMBOL_STR(___might_sleep) },
	{ 0x2b171486, __VMLINUX_SYMBOL_STR(blk_queue_split) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x253a4b00, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x6051e4e9, __VMLINUX_SYMBOL_STR(kernfs_put) },
	{ 0x52fb29de, __VMLINUX_SYMBOL_STR(file_path) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd7dfd6e0, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0xb984ce95, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x87258d3c, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x953e1b9e, __VMLINUX_SYMBOL_STR(ktime_get_real_seconds) },
	{ 0x7bafa862, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xb7a763fa, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x50d188e2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xa868d4ac, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x401a2eb5, __VMLINUX_SYMBOL_STR(invalidate_bdev) },
	{ 0xa7be526f, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8e3f011a, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x6de8f3cc, __VMLINUX_SYMBOL_STR(bd_unlink_disk_holder) },
	{ 0x746aa92, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x3398cf47, __VMLINUX_SYMBOL_STR(blk_set_stacking_limits) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xe2431b4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xce579d13, __VMLINUX_SYMBOL_STR(check_disk_change) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7617a11b, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xc5752e56, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x3325b36d, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xde9fb32b, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x2de39ca9, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x4f8ee8ca, __VMLINUX_SYMBOL_STR(blk_register_region) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4f19d72a, __VMLINUX_SYMBOL_STR(kernfs_find_and_get_ns) },
	{ 0x7efc079e, __VMLINUX_SYMBOL_STR(seq_file_path) },
	{ 0xd269a4ce, __VMLINUX_SYMBOL_STR(blk_sync_queue) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x2e2f6bba, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0xa43d662, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x2762f45c, __VMLINUX_SYMBOL_STR(kobject_add) },
	{ 0xed696697, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xa76353e5, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x3c83a56f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xba408b54, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x1fd1c969, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x71fd3b7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x312772af, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0xf72ace41, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x14135e80, __VMLINUX_SYMBOL_STR(free_buffer_head) },
	{ 0xbbb12c35, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xd506300e, __VMLINUX_SYMBOL_STR(sync_blockdev) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0x92657709, __VMLINUX_SYMBOL_STR(badblocks_show) },
	{ 0xda817543, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x8acd99, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x2a2cb518, __VMLINUX_SYMBOL_STR(badblocks_init) },
	{ 0x6f67defb, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x676b4c7, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xe52ea611, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0x9769c334, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x6114c04c, __VMLINUX_SYMBOL_STR(submit_bh) },
	{ 0xfcbc032, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x299f9377, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x73fabbc3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x4c1fddeb, __VMLINUX_SYMBOL_STR(ack_all_badblocks) },
	{ 0x97d2d5b2, __VMLINUX_SYMBOL_STR(blk_queue_write_cache) },
	{ 0x6dbd491f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe22b5585, __VMLINUX_SYMBOL_STR(badblocks_exit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x1bca2a90, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x721b1851, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x8c28afef, __VMLINUX_SYMBOL_STR(kobject_init) },
	{ 0xfd2aea82, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0x9933b638, __VMLINUX_SYMBOL_STR(fget) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x4759827, __VMLINUX_SYMBOL_STR(badblocks_set) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x857bf2cd, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xbe2f2129, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x3c861dd8, __VMLINUX_SYMBOL_STR(alloc_page_buffers) },
	{ 0x766d9ec8, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x8bb66f67, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x263c3152, __VMLINUX_SYMBOL_STR(bcmp) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x22270e72, __VMLINUX_SYMBOL_STR(set_disk_ro) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

