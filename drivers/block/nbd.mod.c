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
	{ 0xad687a9d, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x7bafa862, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x6dbd491f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xaa7c1a41, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf410d6f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xe53a089, __VMLINUX_SYMBOL_STR(blkdev_reread_part) },
	{ 0x257995a3, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xd0656421, __VMLINUX_SYMBOL_STR(blk_mq_request_started) },
	{ 0x1901d4e6, __VMLINUX_SYMBOL_STR(blk_mq_tag_to_rq) },
	{ 0xaaa2ce, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0x288cdb65, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x642f7385, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x8b884eb1, __VMLINUX_SYMBOL_STR(blk_mq_free_request) },
	{ 0xd930b331, __VMLINUX_SYMBOL_STR(fsync_bdev) },
	{ 0x664b1cc1, __VMLINUX_SYMBOL_STR(kill_bdev) },
	{ 0x42d64af7, __VMLINUX_SYMBOL_STR(blk_mq_tagset_busy_iter) },
	{ 0xfb6bc236, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xd8c2f867, __VMLINUX_SYMBOL_STR(debugfs_create_u64) },
	{ 0x148ef06a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x97d2d5b2, __VMLINUX_SYMBOL_STR(blk_queue_write_cache) },
	{ 0xbd0a4162, __VMLINUX_SYMBOL_STR(set_device_ro) },
	{ 0xbfdceca7, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xcce14f56, __VMLINUX_SYMBOL_STR(blk_mq_alloc_request) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8023371c, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xcb7080d1, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0x4efe8663, __VMLINUX_SYMBOL_STR(bd_set_size) },
	{ 0x9f4cd6f3, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0xcfaf701, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x985f9294, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x6174faef, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xdc09afaa, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xed696697, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x65634411, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbadf21cb, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9be254b0, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x3325b36d, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x261211c8, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4423c52c, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xd5ab0514, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0x6f67defb, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x857bf2cd, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x86fc946d, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x56ab676f, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x9f6e7b43, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xcde8a9f1, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0x42c06a44, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0x5896758, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

