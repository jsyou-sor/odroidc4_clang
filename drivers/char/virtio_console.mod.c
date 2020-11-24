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
	{ 0xc4dd409d, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xf7e266c6, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x16a27738, __VMLINUX_SYMBOL_STR(virtqueue_detach_unused_buf) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x59bd9654, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xefcd7fb2, __VMLINUX_SYMBOL_STR(pipe_unlock) },
	{ 0x6e0560e9, __VMLINUX_SYMBOL_STR(__splice_from_pipe) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x21cac9d5, __VMLINUX_SYMBOL_STR(pipe_lock) },
	{ 0x478dd5be, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xf7fe6da6, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xf2d3d513, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6d761873, __VMLINUX_SYMBOL_STR(hvc_alloc) },
	{ 0xb1dc66ac, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xb7a763fa, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x347c8d89, __VMLINUX_SYMBOL_STR(hvc_remove) },
	{ 0x9833bc0c, __VMLINUX_SYMBOL_STR(hvc_kick) },
	{ 0xaa88dd3, __VMLINUX_SYMBOL_STR(hvc_poll) },
	{ 0x148ef06a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2315967d, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x25d8cef2, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4d553bce, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xcffd14db, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xc0472b8e, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x8023371c, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x92d81941, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xc5752e56, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x70db45f1, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf9dde891, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x722f7934, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xde2110e1, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0x46aa013d, __VMLINUX_SYMBOL_STR(virtqueue_add_outbuf) },
	{ 0x766d9ec8, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x985f9294, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x145bdbe2, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xe9f9d658, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xfccbb30, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x7a1dbc7b, __VMLINUX_SYMBOL_STR(__hvc_resize) },
	{ 0x10eabbca, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x910dd957, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x261211c8, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x78fe653a, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x68527ae7, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x86fc946d, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3e11ced0, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x43034f29, __VMLINUX_SYMBOL_STR(hvc_instantiate) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("virtio:d00000003v*");
