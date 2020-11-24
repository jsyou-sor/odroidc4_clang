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
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb0867502, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x76389e87, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xedfa1b30, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x643ef0d4, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x193b9bd9, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x4d7c8496, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0xd99e627c, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xf0988114, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x5c4452d7, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x7e9cca0b, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x47a0a85a, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x76c51871, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x8c12880d, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7bd5ec57, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

