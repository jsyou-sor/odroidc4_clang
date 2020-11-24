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
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x7366a910, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0xa9320d27, __VMLINUX_SYMBOL_STR(ktime_get_seconds) },
	{ 0x263c3152, __VMLINUX_SYMBOL_STR(bcmp) },
	{ 0x2e756693, __VMLINUX_SYMBOL_STR(bio_copy_data) },
	{ 0xf52b30a0, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xa22c9f04, __VMLINUX_SYMBOL_STR(___might_sleep) },
	{ 0x262e2b2d, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0x4ac851, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x2797ba0e, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x327fb318, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0x5c2ac927, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x45452cf0, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x3c83a56f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xa76353e5, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x6cbf9ba0, __VMLINUX_SYMBOL_STR(md_new_event) },
	{ 0x1fd1c969, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x87258d3c, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xe0c93b91, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x61d2ddf6, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0x6b8bece5, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5e3b07aa, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0xde9fb32b, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xe52ea611, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0x73891a6a, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
	{ 0x8b6e76b4, __VMLINUX_SYMBOL_STR(md_finish_reshape) },
	{ 0x290e4856, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0x576c01f2, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x2e7bef58, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0x70d4221f, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xb69f9b00, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xcbff5e68, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xfcbc032, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x8f22717b, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0xbbb12c35, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd3f6e808, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x354102ae, __VMLINUX_SYMBOL_STR(md_do_sync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x766d9ec8, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x949b754f, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xf5dc10ef, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0xfb5dc896, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xb33508c6, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3466c6bc, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x80a16371, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x3e748db4, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xc4e7d933, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x9f6e7b43, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xac948da6, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xf3ebb178, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x60b115d4, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0x39b6a162, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x4535d0b1, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0x40bcb2fc, __VMLINUX_SYMBOL_STR(badblocks_check) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0xf24ebcd4, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xd64b4068, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0x777092fc, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0x918c6374, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x48d5e65f, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1fa93742, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0xa32096a4, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xcf4f4d1c, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x141efa7c, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xee528fff, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x2b170bdb, __VMLINUX_SYMBOL_STR(register_md_personality) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

