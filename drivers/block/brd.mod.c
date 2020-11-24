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
	{ 0x664b1cc1, __VMLINUX_SYMBOL_STR(kill_bdev) },
	{ 0x2c3b6226, __VMLINUX_SYMBOL_STR(page_endio) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x3e2286cd, __VMLINUX_SYMBOL_STR(__radix_tree_insert) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9754ec10, __VMLINUX_SYMBOL_STR(radix_tree_preload) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9100d77c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x19c85478, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xa76353e5, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x6f7d8599, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xedd0cd89, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0x3725893a, __VMLINUX_SYMBOL_STR(radix_tree_gang_lookup) },
	{ 0x6f67defb, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa469855d, __VMLINUX_SYMBOL_STR(get_disk) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4423c52c, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5896758, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x9f6e7b43, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x9f4cd6f3, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0xc9b56f85, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x56ab676f, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xda817543, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x746aa92, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x3a9b6fb9, __VMLINUX_SYMBOL_STR(blk_unregister_region) },
	{ 0x3325b36d, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x4f8ee8ca, __VMLINUX_SYMBOL_STR(blk_register_region) },
	{ 0x857bf2cd, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

