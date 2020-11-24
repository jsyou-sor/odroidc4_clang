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
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x107e5878, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0x5781d287, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8c632d7a, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xde815296, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0xa2a96586, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x9ee27cb2, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x94e7ec90, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x42d65b60, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0xf2cc2f7b, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0x59bd9654, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x39a82e7d, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0x581f98da, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x3ec92cb7, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xa5e83e0c, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x49e5867b, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x93e9c0e8, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x35a88f28, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0x96adac55, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbb0540aa, __VMLINUX_SYMBOL_STR(zlib_inflateReset) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x55c094cd, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xc2ffb315, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xc47706b2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x279dd8f2, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x9100d77c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x766d9ec8, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xbe947bcc, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

