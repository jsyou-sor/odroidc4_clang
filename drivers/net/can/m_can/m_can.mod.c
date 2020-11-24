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
	{ 0x5c39d2bc, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0xf7c4a42c, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xc0b3ea35, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x389b79d, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x82e9abdf, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd654c352, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x222c295a, __VMLINUX_SYMBOL_STR(can_len2dlc) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x99730ed3, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xbb1a7a5e, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x365b5729, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9f705dab, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x64cb6866, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xf5be1f5c, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x3984abaf, __VMLINUX_SYMBOL_STR(can_led_event) },
	{ 0xda720306, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0xb346573b, __VMLINUX_SYMBOL_STR(can_dlc2len) },
	{ 0xfbbc3b39, __VMLINUX_SYMBOL_STR(alloc_canfd_skb) },
	{ 0xe7de671e, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x74a9334e, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x47b95977, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x8df3e85, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x731ca6c1, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x97de66a2, __VMLINUX_SYMBOL_STR(devm_can_led_init) },
	{ 0x5d70b380, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdc989217, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x26fda649, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x1c7af636, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xf1776c24, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xd4399de6, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x56cc4d89, __VMLINUX_SYMBOL_STR(platform_get_irq_byname) },
	{ 0x47a0a85a, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x205641a9, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0xd2a45be2, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x8c12880d, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7bd5ec57, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("of:N*T*Cbosch,m_can");
MODULE_ALIAS("of:N*T*Cbosch,m_canC*");
