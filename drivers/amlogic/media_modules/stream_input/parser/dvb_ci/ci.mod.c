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
	{ 0x560f066, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x637ae1d0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x18ef7fa6, __VMLINUX_SYMBOL_STR(dirspi_xfer) },
	{ 0x2ee9e9f1, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xcfbfcaa6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x30587862, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xe5e8eae5, __VMLINUX_SYMBOL_STR(cimax_usb_ci_write) },
	{ 0x43cfa79e, __VMLINUX_SYMBOL_STR(dirspi_read) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xc8d262fd, __VMLINUX_SYMBOL_STR(dvb_register_device) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x8883a996, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x5175d864, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x47bffea2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xd9739229, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x3609cff7, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x1cde0400, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd0d2ef6c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xc4c4fd7c, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xb2b5f670, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xcb356106, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x140c0a29, __VMLINUX_SYMBOL_STR(dirspi_start) },
	{ 0xcc886c4d, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x6ab0d308, __VMLINUX_SYMBOL_STR(dvb_generic_release) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x20d7a862, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x43493ec, __VMLINUX_SYMBOL_STR(dirspi_stop) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x9f6f5245, __VMLINUX_SYMBOL_STR(dirspi_register_board_info) },
	{ 0xdfcd4df4, __VMLINUX_SYMBOL_STR(cimax_usb_device_open) },
	{ 0x569195a9, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x612425e1, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xdf74491b, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x7a32a70, __VMLINUX_SYMBOL_STR(dvb_unregister_device) },
	{ 0x639f0940, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x36654ff6, __VMLINUX_SYMBOL_STR(aml_get_dvb_adapter) },
	{ 0x12f7486a, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xfca9ada6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x1912a06b, __VMLINUX_SYMBOL_STR(dvb_generic_open) },
	{ 0xe6723ffa, __VMLINUX_SYMBOL_STR(cimax_usb_ci_read_evt) },
	{ 0xbc12dd9e, __VMLINUX_SYMBOL_STR(cimax_usb_set_cb) },
	{ 0xc1f4ef87, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xa17a6ffa, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xeb5daefc, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb2f3b5f7, __VMLINUX_SYMBOL_STR(cimax_usb_select_interface) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x7741c065, __VMLINUX_SYMBOL_STR(gpiod_get_value) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf9490f02, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x6170f64b, __VMLINUX_SYMBOL_STR(cimax_usb_device_close) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9f6b70cf, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xaee072ac, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xd4d7a429, __VMLINUX_SYMBOL_STR(gpiod_put) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x51ee33e6, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cimax-usb,aml_swdmx";

