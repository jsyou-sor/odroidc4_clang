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
	{ 0x90d545b3, __VMLINUX_SYMBOL_STR(nfcmrvl_nci_unregister_dev) },
	{ 0x4e9b9754, __VMLINUX_SYMBOL_STR(nfcmrvl_nci_recv_frame) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xedf77479, __VMLINUX_SYMBOL_STR(nci_uart_set_config) },
	{ 0xc99658df, __VMLINUX_SYMBOL_STR(nfcmrvl_parse_dt) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdeeef1bb, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xed9f63d4, __VMLINUX_SYMBOL_STR(nfcmrvl_nci_register_dev) },
	{ 0xae989c51, __VMLINUX_SYMBOL_STR(nci_uart_unregister) },
	{ 0xad48aa10, __VMLINUX_SYMBOL_STR(nci_uart_register) },
	{ 0xaf1a8bb9, __VMLINUX_SYMBOL_STR(of_get_compatible_child) },
	{ 0x223fa293, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfcmrvl,nci_uart";

