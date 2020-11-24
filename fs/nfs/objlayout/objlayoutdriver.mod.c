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
	{ 0xfadf51f7, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3478753b, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_write) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xdac487f2, __VMLINUX_SYMBOL_STR(ore_read) },
	{ 0x7c9722ba, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xac1011a1, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xe5956f91, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0x14167fd4, __VMLINUX_SYMBOL_STR(ore_put_io_state) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x43d61ccb, __VMLINUX_SYMBOL_STR(ore_write) },
	{ 0x8095b023, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xe47bdd1c, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x93408701, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xfbbc2273, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0xe14f5aeb, __VMLINUX_SYMBOL_STR(osduld_info_lookup) },
	{ 0x82398001, __VMLINUX_SYMBOL_STR(pnfs_generic_sync) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xda12c078, __VMLINUX_SYMBOL_STR(ore_check_io) },
	{ 0x20f99045, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0xfadf2436, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0x228f4555, __VMLINUX_SYMBOL_STR(kimage_voffset) },
	{ 0xed472cb3, __VMLINUX_SYMBOL_STR(xdr_init_decode) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0x59bd9654, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x66f84d74, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x28806871, __VMLINUX_SYMBOL_STR(ore_verify_layout) },
	{ 0x6f7d8599, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xa06baf6b, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0x45452cf0, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x815f2897, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0x2bb37d17, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xce6306f3, __VMLINUX_SYMBOL_STR(nfs_pgio_current_mirror) },
	{ 0x802b22e2, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x15588ae4, __VMLINUX_SYMBOL_STR(ore_get_rw_state) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7c9f475a, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x18b5b1f8, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x18f79a2d, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x3be448ae, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x936f87fc, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0x766d9ec8, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x6098d83c, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,sunrpc,libore,nfs,osd";

