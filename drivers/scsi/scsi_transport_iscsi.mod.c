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
	{ 0x87fc8d59, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x1fd150e9, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0xed4f0a7a, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x60b26c6, __VMLINUX_SYMBOL_STR(scsi_remove_target) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf3d849b3, __VMLINUX_SYMBOL_STR(scsi_host_lookup) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x4eddf556, __VMLINUX_SYMBOL_STR(scsi_flush_work) },
	{ 0x4423c52c, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9ada50da, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x5a3b8dc8, __VMLINUX_SYMBOL_STR(bsg_request_fn) },
	{ 0x83bde387, __VMLINUX_SYMBOL_STR(transport_destroy_device) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa5846da4, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9030bccf, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xef9045b1, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb7a763fa, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x7ba89f69, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4a38b698, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xd7cc65b5, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xfb1bac03, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xbb209eff, __VMLINUX_SYMBOL_STR(scsi_queue_work) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x57e87332, __VMLINUX_SYMBOL_STR(transport_add_device) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x19012671, __VMLINUX_SYMBOL_STR(device_find_child) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xc5752e56, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xe9e22f03, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x432baab3, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x33bbae2d, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xc11b530e, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xf2462dab, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x562cdf81, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0xa08767b4, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x965e203e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x8fd836dd, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x825c0fcc, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x71fd3b7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xdbcd1b1e, __VMLINUX_SYMBOL_STR(scsi_target_unblock) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x5616cdd5, __VMLINUX_SYMBOL_STR(scsi_host_get) },
	{ 0x371a386e, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xf9386e4e, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xda81900e, __VMLINUX_SYMBOL_STR(transport_setup_device) },
	{ 0xf35ee130, __VMLINUX_SYMBOL_STR(bsg_unregister_queue) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6c635d68, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xd9bac988, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x64dd186, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc4a173a2, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x7d8c8df2, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x170b8fe9, __VMLINUX_SYMBOL_STR(transport_remove_device) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x56866882, __VMLINUX_SYMBOL_STR(scsi_target_block) },
	{ 0x3bba7684, __VMLINUX_SYMBOL_STR(bsg_job_done) },
	{ 0x4119e4af, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xfb79543, __VMLINUX_SYMBOL_STR(bsg_setup_queue) },
	{ 0x9bed550f, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x8bb66f67, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x52a24235, __VMLINUX_SYMBOL_STR(__scsi_alloc_queue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F95D3605DF2190AE112751F");
