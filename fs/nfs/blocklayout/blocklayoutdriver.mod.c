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
	{ 0x141efa7c, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0x7366a910, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xecb04aa3, __VMLINUX_SYMBOL_STR(page_cache_next_hole) },
	{ 0x7c9722ba, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xd25e16e3, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xd2f5d5c7, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0xe5956f91, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xb61c8482, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x3ca31f35, __VMLINUX_SYMBOL_STR(nfs_net_id) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x8f2a2914, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0x93b67223, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xe47bdd1c, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xecd51382, __VMLINUX_SYMBOL_STR(rpc_get_sb_net) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfbbc2273, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0x82398001, __VMLINUX_SYMBOL_STR(pnfs_generic_sync) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb1c8c96c, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0x56047c31, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0x7a156c4, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xde9fb32b, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x20f99045, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x1044ab48, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x51c4ae44, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x51a943e9, __VMLINUX_SYMBOL_STR(rpc_d_lookup_sb) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x2e2f6bba, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x66f84d74, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x3c83a56f, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x71fd3b7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb0037f3d, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0x312772af, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x387e1639, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_register) },
	{ 0x6f7d8599, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xa31a351c, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0xf72ace41, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xf82ec573, __VMLINUX_SYMBOL_STR(rb_prev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe6be8b5, __VMLINUX_SYMBOL_STR(cpu_hwcaps) },
	{ 0x50f3f6da, __VMLINUX_SYMBOL_STR(cpu_hwcap_keys) },
	{ 0x2989a348, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x82726918, __VMLINUX_SYMBOL_STR(rpc_put_sb_net) },
	{ 0x2bb37d17, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9bc6ef31, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x802b22e2, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x45cb638b, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7c9f475a, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xb51a3724, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_unregister) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x18b5b1f8, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xfa4f6367, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xcf9a3fb7, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x18f79a2d, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0xb38ee7b4, __VMLINUX_SYMBOL_STR(arm64_const_caps_ready) },
	{ 0xd7ccc051, __VMLINUX_SYMBOL_STR(pnfs_set_lo_fail) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x3be448ae, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x9100d77c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x936f87fc, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0x766d9ec8, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x8bb66f67, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x6098d83c, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,sunrpc,nfs";

