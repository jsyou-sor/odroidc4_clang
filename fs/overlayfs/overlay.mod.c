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
	{ 0x7de12a9e, __VMLINUX_SYMBOL_STR(get_acl) },
	{ 0xea22fa6a, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x787ccdd0, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xde81f9f8, __VMLINUX_SYMBOL_STR(d_invalidate) },
	{ 0x48b93464, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd1d30d11, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x21e14d9c, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x1f806705, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0xa0225ee3, __VMLINUX_SYMBOL_STR(posix_acl_to_xattr) },
	{ 0xc05d36e5, __VMLINUX_SYMBOL_STR(vfs_link) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x2c9b36aa, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0xaa7c1a41, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x4006c00d, __VMLINUX_SYMBOL_STR(vfs_llseek) },
	{ 0xb52a052e, __VMLINUX_SYMBOL_STR(lookup_one_len_unlocked) },
	{ 0x3f0e7741, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x96a70cfd, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xb7f511da, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xb61c8482, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x7ffa2a91, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x5932297d, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0x61543237, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xf79252ef, __VMLINUX_SYMBOL_STR(vfs_mknod) },
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x6622feb2, __VMLINUX_SYMBOL_STR(down_write_killable) },
	{ 0xd7dfd6e0, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0xde815296, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x9ee27cb2, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x3864fc3e, __VMLINUX_SYMBOL_STR(vfs_symlink) },
	{ 0x4127ebd3, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x3d9e499c, __VMLINUX_SYMBOL_STR(security_dentry_create_files_as) },
	{ 0x892d1e95, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x49b2d0a3, __VMLINUX_SYMBOL_STR(mnt_drop_write) },
	{ 0xc50e3b2e, __VMLINUX_SYMBOL_STR(security_inode_copy_up) },
	{ 0xcfee3ae5, __VMLINUX_SYMBOL_STR(vfs_rmdir) },
	{ 0x2644c425, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0x2d3775f2, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0xa7a47687, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0x7063cb31, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x2d994605, __VMLINUX_SYMBOL_STR(security_inode_copy_up_xattr) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x499e270f, __VMLINUX_SYMBOL_STR(vfs_getxattr) },
	{ 0xb1a3243c, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xe8222a75, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0x22f9163c, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x12e3a59d, __VMLINUX_SYMBOL_STR(vfs_whiteout) },
	{ 0x6450794d, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x4db2df17, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xed696697, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x666120eb, __VMLINUX_SYMBOL_STR(vfs_get_link) },
	{ 0x7b1615b5, __VMLINUX_SYMBOL_STR(posix_acl_create) },
	{ 0x43702f0d, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0x1e281d7c, __VMLINUX_SYMBOL_STR(mntput) },
	{ 0x161ebbe, __VMLINUX_SYMBOL_STR(capable_wrt_inode_uidgid) },
	{ 0x67132f27, __VMLINUX_SYMBOL_STR(iterate_fd) },
	{ 0x49e54e1d, __VMLINUX_SYMBOL_STR(__check_sticky) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xca1871ef, __VMLINUX_SYMBOL_STR(mnt_want_write) },
	{ 0x45452cf0, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x6a910f70, __VMLINUX_SYMBOL_STR(posix_acl_from_xattr) },
	{ 0xa5e83e0c, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0xfd4185b, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0xc9c2a3e9, __VMLINUX_SYMBOL_STR(vfs_statfs) },
	{ 0x16b97602, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0x8bbfb7c7, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0x9f4e4f8a, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x74fd464e, __VMLINUX_SYMBOL_STR(ns_capable_noaudit) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x437e48ef, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0x93e9c0e8, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xb6df7f6b, __VMLINUX_SYMBOL_STR(do_splice_direct) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xdf3d2a7c, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xaf29b64c, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0x2506ca85, __VMLINUX_SYMBOL_STR(d_find_any_alias) },
	{ 0x24ee23e3, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x88bb9b00, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xc2ffb315, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x6caa883b, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0xc47706b2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xbfe20205, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x159c9654, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xdd0f15b6, __VMLINUX_SYMBOL_STR(clone_private_mount) },
	{ 0x9db477f0, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0xda40fd6a, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0x894b5cc7, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0x6008921a, __VMLINUX_SYMBOL_STR(vfs_setxattr) },
	{ 0xa4fe83b, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x64cbc7c1, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0x1c1f7129, __VMLINUX_SYMBOL_STR(vfs_listxattr) },
	{ 0x97fdd524, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x29fb1a83, __VMLINUX_SYMBOL_STR(vfs_removexattr) },
	{ 0x4a53f59e, __VMLINUX_SYMBOL_STR(setattr_prepare) },
	{ 0x170ed16f, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0x85f5e2aa, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x8b9bfd92, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

