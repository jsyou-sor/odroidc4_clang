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
	{ 0xa5c3ade6, __VMLINUX_SYMBOL_STR(nci_spi_read) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0x90d545b3, __VMLINUX_SYMBOL_STR(nfcmrvl_nci_unregister_dev) },
	{ 0x4e9b9754, __VMLINUX_SYMBOL_STR(nfcmrvl_nci_recv_frame) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x26b2eaa2, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xd26a3a5c, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc99658df, __VMLINUX_SYMBOL_STR(nfcmrvl_parse_dt) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xec745ac5, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x346c9e1c, __VMLINUX_SYMBOL_STR(nci_spi_send) },
	{ 0x37d30f5c, __VMLINUX_SYMBOL_STR(nci_spi_allocate_spi) },
	{ 0xed9f63d4, __VMLINUX_SYMBOL_STR(nfcmrvl_nci_register_dev) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x193b9bd9, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nci_spi,nfcmrvl";

MODULE_ALIAS("of:N*T*Cmarvell,nfc-spi");
MODULE_ALIAS("of:N*T*Cmarvell,nfc-spiC*");
MODULE_ALIAS("spi:nfcmrvl_spi");
