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
	{ 0xea22fa6a, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0x2c013072, __VMLINUX_SYMBOL_STR(request_key) },
	{ 0xe6be23f6, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x9a694f4d, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x29804ec0, __VMLINUX_SYMBOL_STR(kernel_write) },
	{ 0x30a029bd, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd54d8be7, __VMLINUX_SYMBOL_STR(fsstack_copy_inode_size) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xe353ff64, __VMLINUX_SYMBOL_STR(set_anon_super) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xbfff4dc7, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x5781d287, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xbb0f08b7, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x379104c5, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x50cd3ef9, __VMLINUX_SYMBOL_STR(mntget) },
	{ 0x48b93464, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xd1d30d11, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x21e14d9c, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x76be334e, __VMLINUX_SYMBOL_STR(key_type_user) },
	{ 0x1f806705, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0xb8b043f2, __VMLINUX_SYMBOL_STR(kfree_link) },
	{ 0xc05d36e5, __VMLINUX_SYMBOL_STR(vfs_link) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x4006c00d, __VMLINUX_SYMBOL_STR(vfs_llseek) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0x52d5bb68, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xb52a052e, __VMLINUX_SYMBOL_STR(lookup_one_len_unlocked) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xb4cd3b6f, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0x3f0e7741, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0xaa53e2ae, __VMLINUX_SYMBOL_STR(deactivate_locked_super) },
	{ 0xb7f511da, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xb61c8482, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5932297d, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0x61543237, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xf79252ef, __VMLINUX_SYMBOL_STR(vfs_mknod) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xd7dfd6e0, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0xde815296, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x6505263f, __VMLINUX_SYMBOL_STR(d_instantiate_new) },
	{ 0x9ee27cb2, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x429b6094, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x3864fc3e, __VMLINUX_SYMBOL_STR(vfs_symlink) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb7a763fa, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x50d188e2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xd9090406, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xa868d4ac, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xfaba39c4, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0xcfee3ae5, __VMLINUX_SYMBOL_STR(vfs_rmdir) },
	{ 0x2644c425, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0x1fbd3fdb, __VMLINUX_SYMBOL_STR(key_validate) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf9dde891, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xba1862ed, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0x6ea1602e, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x7063cb31, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf7141489, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xf2d3d513, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7617a11b, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xc5752e56, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x15fb5c23, __VMLINUX_SYMBOL_STR(sget) },
	{ 0x7aeafe91, __VMLINUX_SYMBOL_STR(__vfs_setxattr) },
	{ 0xc1fc5c66, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xbf8ba54a, __VMLINUX_SYMBOL_STR(vprintk) },
	{ 0x72bfbc53, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xe8222a75, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x22f9163c, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x586f0e4a, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x59bd9654, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x904c6e43, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x6450794d, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x4db2df17, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xed696697, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x4d3e2020, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0xd76e26e1, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x4e563990, __VMLINUX_SYMBOL_STR(atomic_dec_and_mutex_lock) },
	{ 0xde48538b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6f7d8599, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xeec65e29, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x25070e96, __VMLINUX_SYMBOL_STR(fs_kobj) },
	{ 0xdf2c82f3, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa5e83e0c, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x94b78406, __VMLINUX_SYMBOL_STR(bdi_setup_and_register) },
	{ 0xfd4185b, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x564f9ee5, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xeb3c166c, __VMLINUX_SYMBOL_STR(__vfs_removexattr) },
	{ 0x1babd4ec, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x16b97602, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0x9769c334, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x9f4e4f8a, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0xc15a44c6, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x437e48ef, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0xd7ce2481, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x93e9c0e8, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xb54f53c2, __VMLINUX_SYMBOL_STR(fsstack_copy_attr_all) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x13a3fcd3, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x39acf4bd, __VMLINUX_SYMBOL_STR(__vfs_getxattr) },
	{ 0xdf3d2a7c, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x96adac55, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xb4b492e, __VMLINUX_SYMBOL_STR(param_ops_long) },
	{ 0xc0a6a93e, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x88bb9b00, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xc2ffb315, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x6caa883b, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0x6a3425c0, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0xc47706b2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x279dd8f2, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x82020e74, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x9db477f0, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0xda40fd6a, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0xb71d6f99, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0x223fa293, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x894b5cc7, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0x6008921a, __VMLINUX_SYMBOL_STR(vfs_setxattr) },
	{ 0x6e5938d6, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xe9bd654c, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xa4fe83b, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x9100d77c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x766d9ec8, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x97fdd524, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x4a53f59e, __VMLINUX_SYMBOL_STR(setattr_prepare) },
	{ 0xe76ba8fc, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

