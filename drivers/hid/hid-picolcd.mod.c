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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x257995a3, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x643ef0d4, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x5781d287, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x4b30b987, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xf410d6f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x4f497992, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0xa3966446, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xad687a9d, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x4f50a90e, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0x83addbb, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xad9e0ba5, __VMLINUX_SYMBOL_STR(__hid_request) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x148ef06a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xcee3a38a, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x7bafa862, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x5c4452d7, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x4b0f4d76, __VMLINUX_SYMBOL_STR(hid_debug_event) },
	{ 0x5495392, __VMLINUX_SYMBOL_STR(hid_debug) },
	{ 0x1a779f26, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4d7c8496, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x372a2bb9, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xb1dc66ac, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xd99e627c, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xcd468807, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa60e1793, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x920366fa, __VMLINUX_SYMBOL_STR(lcd_device_unregister) },
	{ 0x46f6dc59, __VMLINUX_SYMBOL_STR(hid_set_field) },
	{ 0xc4dd409d, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x288cdb65, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x97ca447c, __VMLINUX_SYMBOL_STR(hid_alloc_report_buf) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6d5f7454, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x5917c436, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xfc570a18, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x231efe84, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x7d1756bc, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0x819728b0, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x224ff4ad, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2acd033b, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x8463613e, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0x132f506, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0xeffa9c96, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xb653d8c5, __VMLINUX_SYMBOL_STR(lcd_device_register) },
	{ 0x6dbd491f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x65151a5e, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x4e32da5c, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0xf2215c46, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0x985f9294, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x56503d4a, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0xeaabe1d0, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0xb0867502, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x263c3152, __VMLINUX_SYMBOL_STR(bcmp) },
	{ 0xfeb9f74d, __VMLINUX_SYMBOL_STR(hid_output_report) },
	{ 0x580f1434, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x59c6b096, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lcd";

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");
