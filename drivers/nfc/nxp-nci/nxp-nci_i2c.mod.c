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
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7f996084, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd0bd2437, __VMLINUX_SYMBOL_STR(nci_recv_frame) },
	{ 0x41e20d97, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcc62b5b8, __VMLINUX_SYMBOL_STR(nxp_nci_probe) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x4467532c, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x6f83ec00, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xde342ef4, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x38dbf0b8, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xd122796a, __VMLINUX_SYMBOL_STR(nxp_nci_remove) },
	{ 0xc69c919d, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xfb61f07f, __VMLINUX_SYMBOL_STR(nxp_nci_fw_recv_frame) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nci,nxp-nci";

MODULE_ALIAS("of:N*T*Cnxp,nxp-nci-i2c");
MODULE_ALIAS("of:N*T*Cnxp,nxp-nci-i2cC*");
MODULE_ALIAS("i2c:nxp-nci_i2c");
