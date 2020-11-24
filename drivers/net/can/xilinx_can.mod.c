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
	{ 0x560f066, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x47718744, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xc13103ce, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x7e8d9bba, __VMLINUX_SYMBOL_STR(pm_runtime_force_resume) },
	{ 0x7ce035a, __VMLINUX_SYMBOL_STR(pm_runtime_force_suspend) },
	{ 0xafbd50a9, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xdc55359c, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x9012107d, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xad5c4a5a, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0x951dbdd7, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0xc3b220e6, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x83c5d1d8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xaba17e93, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x1960ce86, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x9ddc24f7, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0xa5289e62, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xdf9bcc77, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x562b4daa, __VMLINUX_SYMBOL_STR(netdev_alert) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe0723399, __VMLINUX_SYMBOL_STR(can_led_event) },
	{ 0xcfe35d2c, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x4dfbe3b9, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0xb749b6b, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0x36f44459, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x7ccf404c, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x887ae865, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0x1ae3f3db, __VMLINUX_SYMBOL_STR(devm_can_led_init) },
	{ 0xf0e7dcda, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0xe6bf0d60, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2d78eb21, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x7453ec7d, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xcbaf584e, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0xe4367773, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x373ce2b2, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xd8504272, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xd801b250, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x9baa972e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xae5a97da, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x164dd20e, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x842d5e74, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x57b7dbb7, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xaee072ac, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xcf159530, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x78eaa20, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x9f6b70cf, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x1cde0400, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("of:N*T*Cxlnx,zynq-can-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,zynq-can-1.0C*");
MODULE_ALIAS("of:N*T*Cxlnx,axi-can-1.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-can-1.00.aC*");
