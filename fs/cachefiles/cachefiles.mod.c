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
	{ 0xea22fa6a, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0xdf88fa0c, __VMLINUX_SYMBOL_STR(set_create_files_as) },
	{ 0x9a694f4d, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x74b968e2, __VMLINUX_SYMBOL_STR(set_security_override_from_ctx) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xfbf9ece7, __VMLINUX_SYMBOL_STR(security_path_rename) },
	{ 0x663f190, __VMLINUX_SYMBOL_STR(security_inode_mkdir) },
	{ 0xb68513a0, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x73d9b6ec, __VMLINUX_SYMBOL_STR(fscache_object_mark_killed) },
	{ 0xeda10b34, __VMLINUX_SYMBOL_STR(prepare_kernel_cred) },
	{ 0x1f806705, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xac1011a1, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x7b6646bb, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x3f0e7741, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0xb7f511da, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xa22c9f04, __VMLINUX_SYMBOL_STR(___might_sleep) },
	{ 0xb61c8482, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x5932297d, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0x1d07e365, __VMLINUX_SYMBOL_STR(memdup_user_nul) },
	{ 0x510161aa, __VMLINUX_SYMBOL_STR(add_to_page_cache_lru) },
	{ 0xe74aecca, __VMLINUX_SYMBOL_STR(fscache_object_init) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0xec62da8a, __VMLINUX_SYMBOL_STR(fscache_object_lookup_negative) },
	{ 0xabca77a9, __VMLINUX_SYMBOL_STR(path_get) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9d7ea1cd, __VMLINUX_SYMBOL_STR(fscache_add_cache) },
	{ 0x9dd2a860, __VMLINUX_SYMBOL_STR(fscache_check_aux) },
	{ 0x892d1e95, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xa8ce7436, __VMLINUX_SYMBOL_STR(security_inode_create) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xc5834feb, __VMLINUX_SYMBOL_STR(security_path_unlink) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8dead1d9, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x2644c425, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0x841510b7, __VMLINUX_SYMBOL_STR(fscache_cache_cleared_wq) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6ea1602e, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x7063cb31, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xef0ecd0f, __VMLINUX_SYMBOL_STR(security_path_mkdir) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6006e712, __VMLINUX_SYMBOL_STR(fscache_obtained_object) },
	{ 0xa58dee99, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0xd702e480, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x499e270f, __VMLINUX_SYMBOL_STR(vfs_getxattr) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x72bfbc53, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xe8222a75, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1ea06663, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x586f0e4a, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x71fb8db2, __VMLINUX_SYMBOL_STR(fscache_withdraw_cache) },
	{ 0xa07a37f0, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x59bd9654, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x6450794d, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x4db2df17, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xed696697, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x6cb2c7c9, __VMLINUX_SYMBOL_STR(fscache_mark_pages_cached) },
	{ 0x56afe083, __VMLINUX_SYMBOL_STR(fscache_mark_page_cached) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x43702f0d, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0x2de1327b, __VMLINUX_SYMBOL_STR(bit_waitqueue) },
	{ 0xb347bb2c, __VMLINUX_SYMBOL_STR(work_busy) },
	{ 0x1e281d7c, __VMLINUX_SYMBOL_STR(mntput) },
	{ 0x783b3563, __VMLINUX_SYMBOL_STR(wake_up_atomic_t) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xde48538b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x4d0d163d, __VMLINUX_SYMBOL_STR(copy_page) },
	{ 0x55641bc1, __VMLINUX_SYMBOL_STR(fscache_init_cache) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xa81b7334, __VMLINUX_SYMBOL_STR(fscache_object_destroy) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc9c2a3e9, __VMLINUX_SYMBOL_STR(vfs_statfs) },
	{ 0x16b97602, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0x8bbfb7c7, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0x9f4e4f8a, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x1dac6616, __VMLINUX_SYMBOL_STR(vfs_truncate) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4ba898eb, __VMLINUX_SYMBOL_STR(security_path_mknod) },
	{ 0xd3e53038, __VMLINUX_SYMBOL_STR(fscache_put_operation) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x437e48ef, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0xd7ce2481, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x825e55b7, __VMLINUX_SYMBOL_STR(add_page_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1bca2a90, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x721b1851, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x55c094cd, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x671c0563, __VMLINUX_SYMBOL_STR(fscache_io_error) },
	{ 0x8dd62db0, __VMLINUX_SYMBOL_STR(abort_creds) },
	{ 0xf2314151, __VMLINUX_SYMBOL_STR(__kernel_write) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x92cf98e, __VMLINUX_SYMBOL_STR(fscache_object_sleep_till_congested) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc522c55d, __VMLINUX_SYMBOL_STR(fscache_enqueue_operation) },
	{ 0x159c9654, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0x9db477f0, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0x6dc7ed5b, __VMLINUX_SYMBOL_STR(fscache_object_retrying_stale) },
	{ 0x5adf60f5, __VMLINUX_SYMBOL_STR(fscache_op_complete) },
	{ 0x223fa293, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x894b5cc7, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0x6008921a, __VMLINUX_SYMBOL_STR(vfs_setxattr) },
	{ 0xe9bd654c, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x64cbc7c1, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x766d9ec8, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x29fb1a83, __VMLINUX_SYMBOL_STR(vfs_removexattr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fscache";
