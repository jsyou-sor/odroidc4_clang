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
	{ 0x223fa293, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x967d49fa, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4c461c1b, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0xe79667c2, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xb142af01, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x8df3e85, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0xc9fb6ea8, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xabd09e70, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0x82e9abdf, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd654c352, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x99730ed3, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbb1a7a5e, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x365b5729, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8e6e149a, __VMLINUX_SYMBOL_STR(dummy_dma_ops) },
	{ 0x71b6bf77, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0xf5be1f5c, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x389b79d, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x47b95977, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0xda720306, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x64cb6866, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x36d127bb, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x74a9334e, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xb8d7f4b5, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x731ca6c1, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0x2c7db649, __VMLINUX_SYMBOL_STR(irq_dispose_mapping) },
	{ 0x5d70b380, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0xdc989217, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf1776c24, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd4399de6, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x26b2eaa2, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x47a0a85a, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x76c51871, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x26fda649, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x8c12880d, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7bd5ec57, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("of:NGAISLER_GRCANT*");
MODULE_ALIAS("of:NGAISLER_GRCANT*C*");
MODULE_ALIAS("of:N01_03dT*");
MODULE_ALIAS("of:N01_03dT*C*");
MODULE_ALIAS("of:NGAISLER_GRHCANT*");
MODULE_ALIAS("of:NGAISLER_GRHCANT*C*");
MODULE_ALIAS("of:N01_034T*");
MODULE_ALIAS("of:N01_034T*C*");
