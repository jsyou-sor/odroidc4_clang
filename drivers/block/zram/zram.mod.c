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
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc341ae6d, __VMLINUX_SYMBOL_STR(zs_map_object) },
	{ 0x5896758, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x4423c52c, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xb68513a0, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x80a16371, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x27864d57, __VMLINUX_SYMBOL_STR(memparse) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc69b7ee5, __VMLINUX_SYMBOL_STR(zs_destroy_pool) },
	{ 0x3465caa3, __VMLINUX_SYMBOL_STR(cpu_maps_update_begin) },
	{ 0x7c354148, __VMLINUX_SYMBOL_STR(generic_end_io_acct) },
	{ 0x1bb2db7, __VMLINUX_SYMBOL_STR(zs_malloc) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x3e748db4, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x2b171486, __VMLINUX_SYMBOL_STR(blk_queue_split) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x5da67adc, __VMLINUX_SYMBOL_STR(zs_compact) },
	{ 0x7f62a045, __VMLINUX_SYMBOL_STR(cpu_maps_update_done) },
	{ 0x49d2aaa0, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x87258d3c, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8dead1d9, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xd930b331, __VMLINUX_SYMBOL_STR(fsync_bdev) },
	{ 0x958df3ac, __VMLINUX_SYMBOL_STR(zs_free) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8e3f011a, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x746aa92, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0x3b8c8eea, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x839430b2, __VMLINUX_SYMBOL_STR(__register_cpu_notifier) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16624d6e, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x9f6e7b43, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x3325b36d, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xe9e22f03, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x6808b453, __VMLINUX_SYMBOL_STR(__unregister_cpu_notifier) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xbcf1f0e6, __VMLINUX_SYMBOL_STR(zs_create_pool) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x994c4c15, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x6450794d, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x8fd836dd, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x83240258, __VMLINUX_SYMBOL_STR(generic_start_io_acct) },
	{ 0x4db2df17, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xa76353e5, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0xe166f7a2, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xe0930fab, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xda817543, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x9f4cd6f3, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x6f67defb, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x1babd4ec, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xcbe56bc2, __VMLINUX_SYMBOL_STR(zs_get_total_pages) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe071d05d, __VMLINUX_SYMBOL_STR(zs_pool_stats) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x90a1004a, __VMLINUX_SYMBOL_STR(crypto_has_alg) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x857bf2cd, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0x2668df5e, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xcfaf701, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x223fa293, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x31f1a95e, __VMLINUX_SYMBOL_STR(bdget_disk) },
	{ 0xbffc501a, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0x924c46f8, __VMLINUX_SYMBOL_STR(zs_unmap_object) },
	{ 0xf7b9ba5, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x9100d77c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x2c3b6226, __VMLINUX_SYMBOL_STR(page_endio) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

