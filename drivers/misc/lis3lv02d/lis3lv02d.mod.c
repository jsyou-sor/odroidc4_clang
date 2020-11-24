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
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb6f9e2f9, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x483aed99, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xf31c725b, __VMLINUX_SYMBOL_STR(input_unregister_polled_device) },
	{ 0xe0991df0, __VMLINUX_SYMBOL_STR(param_get_int) },
	{ 0x5abb8cdb, __VMLINUX_SYMBOL_STR(pm_runtime_barrier) },
	{ 0xd25e16e3, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xf7e266c6, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xdfad3967, __VMLINUX_SYMBOL_STR(input_register_polled_device) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3a8f8916, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xb6231bcf, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xc75ca01d, __VMLINUX_SYMBOL_STR(param_set_int) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb7a763fa, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xfe90dd23, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x1a779f26, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x6ea1602e, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc5752e56, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x478dd5be, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xcd468807, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4ece3d93, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0xfcf5e9c2, __VMLINUX_SYMBOL_STR(input_free_polled_device) },
	{ 0x1641e576, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4d3ecfd3, __VMLINUX_SYMBOL_STR(pm_schedule_suspend) },
	{ 0xfd7bc06d, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xdec9d594, __VMLINUX_SYMBOL_STR(input_allocate_polled_device) },
	{ 0xf0988114, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9bc6ef31, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf301b8ce, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x92d81941, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x26fda649, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xe9bd654c, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

