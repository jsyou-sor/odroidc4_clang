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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x787ccdd0, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x6c3f58ef, __VMLINUX_SYMBOL_STR(efivar_entry_delete) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xf062576b, __VMLINUX_SYMBOL_STR(ucs2_utf8size) },
	{ 0x91708cb9, __VMLINUX_SYMBOL_STR(simple_lookup) },
	{ 0xf7e266c6, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x96a70cfd, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xb7f511da, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xb61c8482, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x7ffa2a91, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xf5466760, __VMLINUX_SYMBOL_STR(uuid_is_valid) },
	{ 0x72b627e4, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xde815296, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc74cecec, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0xa7a47687, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x926a546d, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xe72df61f, __VMLINUX_SYMBOL_STR(efivar_entry_remove) },
	{ 0x9b63c832, __VMLINUX_SYMBOL_STR(efivar_entry_size) },
	{ 0x62291f72, __VMLINUX_SYMBOL_STR(efivar_init) },
	{ 0xc4dd409d, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x6450794d, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x4db2df17, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xab602022, __VMLINUX_SYMBOL_STR(efi) },
	{ 0x6d9fba4e, __VMLINUX_SYMBOL_STR(efivar_entry_set_get_size) },
	{ 0x4a9a4cc0, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xf4abce0b, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0xf240f537, __VMLINUX_SYMBOL_STR(d_alloc) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x4be8fa77, __VMLINUX_SYMBOL_STR(efivar_entry_get) },
	{ 0x4c12a3a8, __VMLINUX_SYMBOL_STR(efivar_variable_is_removable) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x3573ebda, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x87e73068, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x93e9c0e8, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xdf3d2a7c, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4fbae6a6, __VMLINUX_SYMBOL_STR(uuid_le_to_bin) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9b8a17a7, __VMLINUX_SYMBOL_STR(efivar_entry_add) },
	{ 0x9bd971b0, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xcca5b168, __VMLINUX_SYMBOL_STR(always_delete_dentry) },
	{ 0xc2ffb315, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x307f38f2, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xc459d8ef, __VMLINUX_SYMBOL_STR(inode_set_flags) },
	{ 0xc47706b2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xbfe20205, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x7caa7d00, __VMLINUX_SYMBOL_STR(__efivar_entry_iter) },
	{ 0x6e5938d6, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xa4fe83b, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xb0ea75ee, __VMLINUX_SYMBOL_STR(efivars_kobject) },
	{ 0x263c3152, __VMLINUX_SYMBOL_STR(bcmp) },
	{ 0xeec2c7cf, __VMLINUX_SYMBOL_STR(ucs2_as_utf8) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

