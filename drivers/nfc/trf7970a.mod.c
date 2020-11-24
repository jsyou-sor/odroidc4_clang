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
	{ 0xc69c919d, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x41e20d97, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x3a8f8916, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x13fb6bf4, __VMLINUX_SYMBOL_STR(nfc_alloc_recv_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9c3d85e6, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe29376a8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x4a38b698, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x25e7a2b2, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0x2d025614, __VMLINUX_SYMBOL_STR(nfc_digital_unregister_device) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x18f2e36, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x887df921, __VMLINUX_SYMBOL_STR(nfc_digital_free_device) },
	{ 0x483aed99, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x8468d804, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x7f40c683, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xb2df0717, __VMLINUX_SYMBOL_STR(nfc_digital_register_device) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1641e576, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xfd7bc06d, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x9467d24c, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xdf902960, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x6524d91e, __VMLINUX_SYMBOL_STR(nfc_digital_allocate_device) },
	{ 0x692228b5, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0x26fda649, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x73190d1a, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xa428f0c4, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x193b9bd9, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4467532c, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xde342ef4, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xdeeef1bb, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x9c5fa8ed, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xec745ac5, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xd26a3a5c, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfc,nfc_digital";

MODULE_ALIAS("of:N*T*Cti,trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970aC*");
MODULE_ALIAS("spi:trf7970a");
