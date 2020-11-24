#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x2b9defe7, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7366a910, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x6f6222a2, __VMLINUX_SYMBOL_STR(blk_queue_bounce) },
	{ 0x3b4acaf8, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6efea61, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x3c83a56f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x2c98d11a, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0xfe916dc6, __VMLINUX_SYMBOL_STR(hex_dump_to_buffer) },
	{ 0x30cd20dc, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x60cc5261, __VMLINUX_SYMBOL_STR(bio_map_kern) },
	{ 0x9a586008, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0x76c2d478, __VMLINUX_SYMBOL_STR(blk_end_request) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f77f6a3, __VMLINUX_SYMBOL_STR(blk_rq_append_bio) },
	{ 0x9f9ac571, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0x5826ac61, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x85f5e2aa, __VMLINUX_SYMBOL_STR(krealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

