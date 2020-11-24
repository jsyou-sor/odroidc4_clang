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
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7c25eeb, __VMLINUX_SYMBOL_STR(down_killable) },
	{ 0x2d025614, __VMLINUX_SYMBOL_STR(nfc_digital_unregister_device) },
	{ 0x18f2e36, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x41e20d97, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xd26a3a5c, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8974c179, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xec745ac5, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4467532c, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x7f40c683, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa428f0c4, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x13fb6bf4, __VMLINUX_SYMBOL_STR(nfc_alloc_recv_skb) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xde342ef4, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xb2df0717, __VMLINUX_SYMBOL_STR(nfc_digital_register_device) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc69c919d, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x324b3877, __VMLINUX_SYMBOL_STR(up) },
	{ 0x887df921, __VMLINUX_SYMBOL_STR(nfc_digital_free_device) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf3a426a4, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x193b9bd9, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x6b75eeb4, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0x73190d1a, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x6524d91e, __VMLINUX_SYMBOL_STR(nfc_digital_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfc_digital,nfc";

MODULE_ALIAS("of:N*T*Cst,st95hf");
MODULE_ALIAS("of:N*T*Cst,st95hfC*");
MODULE_ALIAS("spi:st95hf");
