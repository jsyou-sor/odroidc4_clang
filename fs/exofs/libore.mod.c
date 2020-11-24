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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7366a910, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xf54bd49b, __VMLINUX_SYMBOL_STR(lcm) },
	{ 0xb19dae86, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0xd25ba5a6, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x813eebf0, __VMLINUX_SYMBOL_STR(osd_req_remove_object) },
	{ 0x27ebaa42, __VMLINUX_SYMBOL_STR(osd_req_read_sg) },
	{ 0xf9dde891, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbdde2dc2, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0xa87057d5, __VMLINUX_SYMBOL_STR(osd_req_write_kern) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf3e3361f, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0xe05895fd, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x3c83a56f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x6f7d8599, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x1550ca17, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0xaca47ea2, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0xe72eac81, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0x68b9c3c9, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0x377493a9, __VMLINUX_SYMBOL_STR(osd_req_create_object) },
	{ 0xc582c9ad, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0x5c99d9e3, __VMLINUX_SYMBOL_STR(osd_req_set_attributes) },
	{ 0x299f9377, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0xffd6e75a, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0x85ab4492, __VMLINUX_SYMBOL_STR(osd_req_add_set_attr_list) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x6aa3d14b, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x9f9ac571, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0x9100d77c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,async_xor,async_pq";

