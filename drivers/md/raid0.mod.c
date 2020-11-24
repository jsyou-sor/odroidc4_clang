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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfb5dc896, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xbbb12c35, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xb33508c6, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x3466c6bc, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x80a16371, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x3e748db4, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x9f6e7b43, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xc4e7d933, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x56ab676f, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa590e1d0, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0xac948da6, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0xa76353e5, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xf24ebcd4, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xa32096a4, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xcf4f4d1c, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x141efa7c, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xee528fff, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x2b170bdb, __VMLINUX_SYMBOL_STR(register_md_personality) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

