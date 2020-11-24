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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x6cb85a32, __VMLINUX_SYMBOL_STR(platform_device_add_properties) },
	{ 0xf9103ee6, __VMLINUX_SYMBOL_STR(bus_find_device_by_name) },
	{ 0xce248226, __VMLINUX_SYMBOL_STR(platform_bus_type) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0xedfa1b30, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0xf1cc52ad, __VMLINUX_SYMBOL_STR(irq_create_mapping) },
	{ 0xb0afbb80, __VMLINUX_SYMBOL_STR(regulator_bulk_register_supply_alias) },
	{ 0xbd7d7138, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0x83c0b961, __VMLINUX_SYMBOL_STR(pm_runtime_no_callbacks) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2eceed38, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x8364035f, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x4ece3d93, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x435d7895, __VMLINUX_SYMBOL_STR(platform_device_add_resources) },
	{ 0x2a9c53c2, __VMLINUX_SYMBOL_STR(device_for_each_child_reverse) },
	{ 0xf9386e4e, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x8b4cb0bb, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0xe79e5f59, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0xec2c142d, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4cdeacca, __VMLINUX_SYMBOL_STR(regulator_bulk_unregister_supply_alias) },
	{ 0x89ab5439, __VMLINUX_SYMBOL_STR(platform_device_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

