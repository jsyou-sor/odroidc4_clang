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
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x9a694f4d, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x787ccdd0, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xb68513a0, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5781d287, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x1f0b60c7, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0xd5894c4b, __VMLINUX_SYMBOL_STR(user_path_at_empty) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x623ba67d, __VMLINUX_SYMBOL_STR(__remove_inode_hash) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x90bb6784, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0xd1d30d11, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0x21e14d9c, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0xd25e16e3, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x462c660f, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x465f13d4, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x3f0e7741, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0xb61c8482, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x25d8cef2, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x722f7934, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x7ffa2a91, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xac405843, __VMLINUX_SYMBOL_STR(d_find_alias) },
	{ 0x61543237, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd7dfd6e0, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x9ee27cb2, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x4127ebd3, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8dead1d9, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x94e7ec90, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x2d3775f2, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0xba1862ed, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xaf4a7767, __VMLINUX_SYMBOL_STR(vfs_iter_write) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf7141489, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x237b3544, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x72bfbc53, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x22f9163c, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x586f0e4a, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x4d553bce, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x59bd9654, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x6450794d, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x94b7b7b7, __VMLINUX_SYMBOL_STR(shrink_dcache_sb) },
	{ 0x4db2df17, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xed696697, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x39a82e7d, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0xf50e884c, __VMLINUX_SYMBOL_STR(__task_pid_nr_ns) },
	{ 0x436db3ec, __VMLINUX_SYMBOL_STR(ilookup5) },
	{ 0xd76e26e1, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xde48538b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xdf2c82f3, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x3ec92cb7, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x8acd99, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xfb6af58d, __VMLINUX_SYMBOL_STR(recalc_sigpending) },
	{ 0x35fc7cc3, __VMLINUX_SYMBOL_STR(vfs_iter_read) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xa5e83e0c, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x94b78406, __VMLINUX_SYMBOL_STR(bdi_setup_and_register) },
	{ 0xfd4185b, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x21a3e004, __VMLINUX_SYMBOL_STR(d_prune_aliases) },
	{ 0x378fcec4, __VMLINUX_SYMBOL_STR(shrink_dcache_parent) },
	{ 0x9f4e4f8a, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd7ce2481, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x93e9c0e8, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcb983b84, __VMLINUX_SYMBOL_STR(init_pid_ns) },
	{ 0x9bc6ef31, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xdf3d2a7c, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x154d38e2, __VMLINUX_SYMBOL_STR(page_get_link) },
	{ 0x24ee23e3, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9e848654, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0x9bd971b0, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xc0a6a93e, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x55c094cd, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x9933b638, __VMLINUX_SYMBOL_STR(fget) },
	{ 0xfb260835, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0x88bb9b00, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x910dd957, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xc2ffb315, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x6a3425c0, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0x69b1f20b, __VMLINUX_SYMBOL_STR(task_active_pid_ns) },
	{ 0xc47706b2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x279dd8f2, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xbfe20205, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x82020e74, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x3e11ced0, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x6e5938d6, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xa4fe83b, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x97fdd524, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xe76ba8fc, __VMLINUX_SYMBOL_STR(generic_fillattr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E5D3031228A4D36137D3C65");
