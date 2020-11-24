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
	{ 0x2fb8eae3, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xfd4f9387, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x10614257, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0xd75924dd, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0x85659e27, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0xad650a2c, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0xb0fdf7b6, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xe15ddb27, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0xff0fa125, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x8c46f5df, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0x9692fbd2, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x5ec2a17c, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x6452e765, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x9f849e, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x223fa293, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xbe082271, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xbccce05a, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0x344514cf, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0x1fcf4d4b, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x86c9f36c, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0xe11f3cbc, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xd2f4bee3, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0xc9b56f85, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x2ba9287c, __VMLINUX_SYMBOL_STR(iscsi_segment_seek_sg) },
	{ 0x9359a0ff, __VMLINUX_SYMBOL_STR(iscsi_segment_init_linear) },
	{ 0x5a1e6dae, __VMLINUX_SYMBOL_STR(iscsi_tcp_dgst_header) },
	{ 0x7aa039bc, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x45aa7240, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_unmap) },
	{ 0xdc09afaa, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x331cdc6d, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_done) },
	{ 0x207f0722, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_get_stats) },
	{ 0x7d1534ba, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xaabcfc55, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0xdab46385, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0xd84e136e, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0x276b7823, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x4a992042, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0xb91aef32, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0xcb4d5c81, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0xc5bb2824, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xbe53ed43, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x642f7385, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xed696697, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x13bc6990, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0x6174faef, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x1babd4ec, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4f927e89, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0x9ada50da, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xed6a046c, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x3a4d869, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0x4e857a06, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0x7ba89f69, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x871bef20, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0xf5e18800, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0xd03f6405, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x176ab82e, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0xad327b2, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x9f6dc846, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0xe0c29363, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x2e9c245, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc87d4a89, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp,scsi_transport_iscsi";

