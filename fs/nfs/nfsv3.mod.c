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
	{ 0x8e416ba, __VMLINUX_SYMBOL_STR(forget_cached_acl) },
	{ 0xe13f456f, __VMLINUX_SYMBOL_STR(nfs_unlink) },
	{ 0x7129dff1, __VMLINUX_SYMBOL_STR(nfs_symlink) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0xfe8ccf25, __VMLINUX_SYMBOL_STR(xdr_stream_pos) },
	{ 0x29b06e33, __VMLINUX_SYMBOL_STR(nfs_refresh_inode) },
	{ 0x4464961c, __VMLINUX_SYMBOL_STR(nfs_close_context) },
	{ 0xe9bca1cc, __VMLINUX_SYMBOL_STR(nfs_free_client) },
	{ 0xb74ade6f, __VMLINUX_SYMBOL_STR(nfs_try_mount) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x84af4189, __VMLINUX_SYMBOL_STR(posix_acl_access_xattr_handler) },
	{ 0xb0ca8316, __VMLINUX_SYMBOL_STR(nfs_permission) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xbf7fd2f5, __VMLINUX_SYMBOL_STR(schedule_timeout_killable) },
	{ 0xe7487b3e, __VMLINUX_SYMBOL_STR(nfs_link) },
	{ 0xd802d55d, __VMLINUX_SYMBOL_STR(xdr_inline_pages) },
	{ 0xfbaac06d, __VMLINUX_SYMBOL_STR(rpc_restart_call) },
	{ 0x61543237, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x2f545305, __VMLINUX_SYMBOL_STR(nfs_instantiate) },
	{ 0x36bb01c8, __VMLINUX_SYMBOL_STR(nfs_sops) },
	{ 0x7d6dafa6, __VMLINUX_SYMBOL_STR(nfs_setattr_update_inode) },
	{ 0x51a93a69, __VMLINUX_SYMBOL_STR(unregister_nfs_version) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x5bec5c0b, __VMLINUX_SYMBOL_STR(nfs_rmdir) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x8095b023, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xfb7ee006, __VMLINUX_SYMBOL_STR(nfs_alloc_fattr) },
	{ 0x94e7ec90, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x98b0ece8, __VMLINUX_SYMBOL_STR(nfs_init_timeout_values) },
	{ 0xbaa9ed14, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xb606e716, __VMLINUX_SYMBOL_STR(nfs_fattr_init) },
	{ 0x974ae337, __VMLINUX_SYMBOL_STR(xdr_terminate_string) },
	{ 0xe3175508, __VMLINUX_SYMBOL_STR(nfs_setattr) },
	{ 0xf6e5c5f0, __VMLINUX_SYMBOL_STR(nfs_fs_type) },
	{ 0xf7141489, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xc9f74a26, __VMLINUX_SYMBOL_STR(rpc_call_sync) },
	{ 0x552bd45b, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0xf2d3d513, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x42cbe7bf, __VMLINUX_SYMBOL_STR(register_nfs_version) },
	{ 0xf0f9d2b9, __VMLINUX_SYMBOL_STR(rpc_bind_new_program) },
	{ 0x237b3544, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0xe91c559e, __VMLINUX_SYMBOL_STR(nfs_zap_acl_cache) },
	{ 0x6b798a83, __VMLINUX_SYMBOL_STR(nfs_getattr) },
	{ 0x879dde92, __VMLINUX_SYMBOL_STR(posix_acl_equiv_mode) },
	{ 0x262729ce, __VMLINUX_SYMBOL_STR(nfs_invalidate_atime) },
	{ 0xa145f6c1, __VMLINUX_SYMBOL_STR(set_cached_acl) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x7b1615b5, __VMLINUX_SYMBOL_STR(posix_acl_create) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x69ca603b, __VMLINUX_SYMBOL_STR(nfsacl_encode) },
	{ 0x74662440, __VMLINUX_SYMBOL_STR(nfs_lookup) },
	{ 0xbc4b4877, __VMLINUX_SYMBOL_STR(nfs_rename) },
	{ 0x24d088d5, __VMLINUX_SYMBOL_STR(nfs_file_operations) },
	{ 0x6f7d8599, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x469130e6, __VMLINUX_SYMBOL_STR(nfs_get_client) },
	{ 0x3ec92cb7, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xaee19311, __VMLINUX_SYMBOL_STR(nfs_revalidate_inode) },
	{ 0xea4b04bd, __VMLINUX_SYMBOL_STR(nfs_mkdir) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x438d023b, __VMLINUX_SYMBOL_STR(nfs_create) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8e813b12, __VMLINUX_SYMBOL_STR(posix_acl_from_mode) },
	{ 0x9a5c8988, __VMLINUX_SYMBOL_STR(nfsacl_decode) },
	{ 0xeb674034, __VMLINUX_SYMBOL_STR(xdr_read_pages) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x1f2a9970, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0x50ce1168, __VMLINUX_SYMBOL_STR(nfs_post_op_update_inode) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf1b9660b, __VMLINUX_SYMBOL_STR(nfs_init_client) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1aa5d515, __VMLINUX_SYMBOL_STR(nfs_create_server) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xb31fd1b0, __VMLINUX_SYMBOL_STR(nfs_mknod) },
	{ 0x6edffc03, __VMLINUX_SYMBOL_STR(posix_acl_default_xattr_handler) },
	{ 0xf17d9c7c, __VMLINUX_SYMBOL_STR(nfs_submount) },
	{ 0xb49b8e33, __VMLINUX_SYMBOL_STR(forget_all_cached_acls) },
	{ 0x18b5b1f8, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xe2f0b566, __VMLINUX_SYMBOL_STR(nfs_wb_all) },
	{ 0x225529f0, __VMLINUX_SYMBOL_STR(nfs_access_zap_cache) },
	{ 0xdfba791, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0x5359624e, __VMLINUX_SYMBOL_STR(nfs_dentry_operations) },
	{ 0x84c15357, __VMLINUX_SYMBOL_STR(nfs_alloc_client) },
	{ 0x3200a802, __VMLINUX_SYMBOL_STR(nfs_writeback_update_inode) },
	{ 0x1063c747, __VMLINUX_SYMBOL_STR(nlmclnt_proc) },
	{ 0x71b98f9c, __VMLINUX_SYMBOL_STR(nfs_clone_server) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfs,sunrpc,nfs_acl,lockd";

