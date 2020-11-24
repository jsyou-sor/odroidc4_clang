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
	{ 0xa382ffcf, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x90d545b3, __VMLINUX_SYMBOL_STR(nfcmrvl_nci_unregister_dev) },
	{ 0x4e9b9754, __VMLINUX_SYMBOL_STR(nfcmrvl_nci_recv_frame) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x26b2eaa2, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x7f996084, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc99658df, __VMLINUX_SYMBOL_STR(nfcmrvl_parse_dt) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdeeef1bb, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x6f83ec00, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x38dbf0b8, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xed9f63d4, __VMLINUX_SYMBOL_STR(nfcmrvl_nci_register_dev) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x193b9bd9, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfcmrvl";

MODULE_ALIAS("i2c:nfcmrvl_i2c");
MODULE_ALIAS("of:N*T*Cmarvell,nfc-i2c");
MODULE_ALIAS("of:N*T*Cmarvell,nfc-i2cC*");
