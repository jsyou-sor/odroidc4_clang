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
	{ 0x4c1734c6, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0x33007eb, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0x988e6d25, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0xe71393b1, __VMLINUX_SYMBOL_STR(genphy_config_init) },
	{ 0xa52654ea, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0xb5f473da, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0xe4c6a735, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xb4a27fda, __VMLINUX_SYMBOL_STR(genphy_suspend) },
	{ 0xcdd5b832, __VMLINUX_SYMBOL_STR(phy_read_mmd_indirect) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xc96f086d, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x4a34769e, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:0000000000000111110000010011????");
