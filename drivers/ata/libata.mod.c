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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc8fee3f, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2fb8eae3, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x4152c9d, __VMLINUX_SYMBOL_STR(blk_queue_dma_drain) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x125420f7, __VMLINUX_SYMBOL_STR(__scsi_add_device) },
	{ 0x483aed99, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xfb2af825, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x9b0f89b5, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x2c937965, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x74727bbc, __VMLINUX_SYMBOL_STR(blk_abort_request) },
	{ 0x56ab676f, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xb863a0ab, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9de35e6b, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x9ada50da, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xd7a28f83, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x28a2ed02, __VMLINUX_SYMBOL_STR(scsi_build_sense_buffer) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x83bde387, __VMLINUX_SYMBOL_STR(transport_destroy_device) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xa5846da4, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x76943f44, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x216564a5, __VMLINUX_SYMBOL_STR(pm_runtime_forbid) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x96adabd9, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0xbd7d7138, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0x89f264c1, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x131db64a, __VMLINUX_SYMBOL_STR(system_long_wq) },
	{ 0x93408701, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc825c35, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x7d966cb1, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x572f270, __VMLINUX_SYMBOL_STR(scsi_rescan_device) },
	{ 0xd7cc65b5, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xeddb2b0c, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x93022ba6, __VMLINUX_SYMBOL_STR(__scsi_format_command) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x843ed7f1, __VMLINUX_SYMBOL_STR(sg_miter_start) },
	{ 0x57e87332, __VMLINUX_SYMBOL_STR(transport_add_device) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa67f7f6a, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0x16624d6e, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0x7b513974, __VMLINUX_SYMBOL_STR(devres_open_group) },
	{ 0x9bf0b5a2, __VMLINUX_SYMBOL_STR(blk_queue_update_dma_pad) },
	{ 0xcdcab1c8, __VMLINUX_SYMBOL_STR(transport_configure_device) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xda68dc4a, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x55421f65, __VMLINUX_SYMBOL_STR(sg_miter_stop) },
	{ 0xfadf2436, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xc11b530e, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xf2462dab, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0xf70e4a4d, __VMLINUX_SYMBOL_STR(preempt_schedule_notrace) },
	{ 0x562cdf81, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0xa08767b4, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xffe021d8, __VMLINUX_SYMBOL_STR(blk_queue_update_dma_alignment) },
	{ 0x244b6588, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0x87cfe738, __VMLINUX_SYMBOL_STR(perf_trace_buf_alloc) },
	{ 0x569b6451, __VMLINUX_SYMBOL_STR(sg_miter_next) },
	{ 0xcc85fcb6, __VMLINUX_SYMBOL_STR(async_schedule) },
	{ 0xab04afe2, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xf811e69d, __VMLINUX_SYMBOL_STR(scsi_eh_flush_done_q) },
	{ 0x10e0aea0, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x7b8e5ec0, __VMLINUX_SYMBOL_STR(scsi_eh_finish_cmd) },
	{ 0x1acef7d2, __VMLINUX_SYMBOL_STR(pm_freezing) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x70f96f88, __VMLINUX_SYMBOL_STR(glob_match) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x29aed6cb, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x1641e576, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xd3dbcc21, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xa3ab4ecf, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x9aac371c, __VMLINUX_SYMBOL_STR(devm_free_irq) },
	{ 0xf9386e4e, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x45452cf0, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x1e68ce14, __VMLINUX_SYMBOL_STR(trace_seq_putc) },
	{ 0xfd7bc06d, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xda81900e, __VMLINUX_SYMBOL_STR(transport_setup_device) },
	{ 0xd4d3491c, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x5c942219, __VMLINUX_SYMBOL_STR(scsi_set_sense_field_pointer) },
	{ 0xe49d99c1, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0x8a448d88, __VMLINUX_SYMBOL_STR(scsi_device_set_state) },
	{ 0xec2c142d, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x8e6e149a, __VMLINUX_SYMBOL_STR(dummy_dma_ops) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8cc8914b, __VMLINUX_SYMBOL_STR(blk_queue_flush_queueable) },
	{ 0x184e965a, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5ec63605, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xfa5176b4, __VMLINUX_SYMBOL_STR(scsi_set_sense_information) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x2b0ba2b0, __VMLINUX_SYMBOL_STR(scsi_sense_desc_find) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x61520529, __VMLINUX_SYMBOL_STR(trace_print_symbols_seq) },
	{ 0x29ade55f, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x188d8e09, __VMLINUX_SYMBOL_STR(sdev_evt_send_simple) },
	{ 0x1bca2a90, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xc4a173a2, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x1278c072, __VMLINUX_SYMBOL_STR(scsi_check_sense) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0x217e4073, __VMLINUX_SYMBOL_STR(scsi_schedule_eh) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x985f9294, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x170b8fe9, __VMLINUX_SYMBOL_STR(transport_remove_device) },
	{ 0x9006ff9, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xe0557cf6, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd760b7aa, __VMLINUX_SYMBOL_STR(devres_remove_group) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x4119e4af, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xef975820, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xf3a426a4, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x193b9bd9, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xfb7235bc, __VMLINUX_SYMBOL_STR(devres_release_group) },
	{ 0x9100d77c, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x91ac822f, __VMLINUX_SYMBOL_STR(vscnprintf) },
	{ 0x15892417, __VMLINUX_SYMBOL_STR(async_synchronize_cookie) },
	{ 0x49cc2494, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x170a8959, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6190859B279D1A634B6F7BA");
