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
	{ 0x21efcfdd, __VMLINUX_SYMBOL_STR(ahci_sdev_attrs) },
	{ 0x577c695e, __VMLINUX_SYMBOL_STR(ahci_shost_attrs) },
	{ 0x44429b5f, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0x7c88c0a6, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xaafd3c4, __VMLINUX_SYMBOL_STR(ata_scsi_change_queue_depth) },
	{ 0x397d4caf, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0xab73ea6b, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0xd18f5648, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0xf038cad9, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0xd615a1db, __VMLINUX_SYMBOL_STR(ahci_platform_ops) },
	{ 0x4b7b8b8c, __VMLINUX_SYMBOL_STR(ahci_platform_resume) },
	{ 0x44776150, __VMLINUX_SYMBOL_STR(ahci_platform_suspend) },
	{ 0x4b09b3a4, __VMLINUX_SYMBOL_STR(ata_platform_remove_one) },
	{ 0xd944f193, __VMLINUX_SYMBOL_STR(ahci_platform_disable_resources) },
	{ 0x1825b2d4, __VMLINUX_SYMBOL_STR(ahci_platform_init_host) },
	{ 0xedfa1b30, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x26fda649, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x27a4754f, __VMLINUX_SYMBOL_STR(ahci_platform_enable_resources) },
	{ 0xa1366fdd, __VMLINUX_SYMBOL_STR(ahci_platform_get_resources) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x8c12880d, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7bd5ec57, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libahci,libata,libahci_platform";

MODULE_ALIAS("of:N*T*Cgeneric-ahci");
MODULE_ALIAS("of:N*T*Cgeneric-ahciC*");
MODULE_ALIAS("of:N*T*Csnps,spear-ahci");
MODULE_ALIAS("of:N*T*Csnps,spear-ahciC*");
MODULE_ALIAS("of:N*T*Csnps,exynos5440-ahci");
MODULE_ALIAS("of:N*T*Csnps,exynos5440-ahciC*");
MODULE_ALIAS("of:N*T*Cibm,476gtr-ahci");
MODULE_ALIAS("of:N*T*Cibm,476gtr-ahciC*");
MODULE_ALIAS("of:N*T*Csnps,dwc-ahci");
MODULE_ALIAS("of:N*T*Csnps,dwc-ahciC*");
MODULE_ALIAS("of:N*T*Chisilicon,hisi-ahci");
MODULE_ALIAS("of:N*T*Chisilicon,hisi-ahciC*");
MODULE_ALIAS("of:N*T*Ccavium,octeon-7130-ahci");
MODULE_ALIAS("of:N*T*Ccavium,octeon-7130-ahciC*");
MODULE_ALIAS("acpi*:??????:*");
