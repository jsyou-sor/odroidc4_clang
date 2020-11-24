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
	{ 0xfc842cae, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x787ccdd0, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xcb762657, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0xbb0f08b7, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xdc611346, __VMLINUX_SYMBOL_STR(fat_flush_inodes) },
	{ 0x7ffa2a91, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8c632d7a, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x253a05e0, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0x4ef18705, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0x8dd35328, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0x22fc1c82, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0xf1f5ff30, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0xecb81aa1, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0x22d2bf90, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x22f9163c, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x1b3adcf9, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x1bd50ade, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0x94bd2aad, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x49e5867b, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x800fb92b, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x1e04380d, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0x93e9c0e8, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x33b34ec9, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0x9bd971b0, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xc0a6a93e, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x528bd2c7, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0x1fb15bf5, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0x1cda8a72, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0xc47706b2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xa98936e8, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0xa109ccf9, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0xa4fe83b, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x97fdd524, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

