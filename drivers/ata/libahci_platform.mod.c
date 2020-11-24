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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x12137d4c, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb6f9e2f9, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xea50dad3, __VMLINUX_SYMBOL_STR(ahci_ignore_sss) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x483aed99, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xa22e129b, __VMLINUX_SYMBOL_STR(ahci_save_initial_config) },
	{ 0x18f2e36, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x98a66de1, __VMLINUX_SYMBOL_STR(ata_host_suspend) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x1adc4ab0, __VMLINUX_SYMBOL_STR(ahci_reset_em) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x47a0a85a, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x3a8f8916, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xd9d135ec, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x53730525, __VMLINUX_SYMBOL_STR(ata_port_desc) },
	{ 0xbd7d7138, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0x1b62108b, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x33196aad, __VMLINUX_SYMBOL_STR(of_device_is_available) },
	{ 0xe8ae7930, __VMLINUX_SYMBOL_STR(ahci_print_info) },
	{ 0xdeeef1bb, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x7b513974, __VMLINUX_SYMBOL_STR(devres_open_group) },
	{ 0x76c51871, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xeed29243, __VMLINUX_SYMBOL_STR(ahci_reset_controller) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x375532ef, __VMLINUX_SYMBOL_STR(ahci_host_activate) },
	{ 0x1641e576, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x8b4cb0bb, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x7060dacb, __VMLINUX_SYMBOL_STR(regulator_get_optional) },
	{ 0xb67075f3, __VMLINUX_SYMBOL_STR(ahci_init_controller) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xfd7bc06d, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x20ceafed, __VMLINUX_SYMBOL_STR(of_clk_get) },
	{ 0xec2c142d, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x1a51b7, __VMLINUX_SYMBOL_STR(ahci_set_em_messages) },
	{ 0x8e6e149a, __VMLINUX_SYMBOL_STR(dummy_dma_ops) },
	{ 0xda1f567, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb2e56eb5, __VMLINUX_SYMBOL_STR(regulator_put) },
	{ 0x985f9294, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd760b7aa, __VMLINUX_SYMBOL_STR(devres_remove_group) },
	{ 0x7e9cca0b, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x2c1ed61f, __VMLINUX_SYMBOL_STR(of_find_device_by_node) },
	{ 0x26fda649, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5b8ac8fb, __VMLINUX_SYMBOL_STR(of_platform_device_create) },
	{ 0xfb7235bc, __VMLINUX_SYMBOL_STR(devres_release_group) },
	{ 0x73190d1a, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xcc133cc8, __VMLINUX_SYMBOL_STR(ahci_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata,libahci";

