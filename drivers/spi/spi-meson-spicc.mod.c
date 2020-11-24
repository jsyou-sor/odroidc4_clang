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
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7f40c683, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x9c5fa8ed, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x393bb664, __VMLINUX_SYMBOL_STR(spi_alloc_device) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3e2d6df3, __VMLINUX_SYMBOL_STR(clk_divider_ops) },
	{ 0x39f99f53, __VMLINUX_SYMBOL_STR(clk_fixed_factor_ops) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0x1f5ac93a, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x41e20d97, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xf040d89e, __VMLINUX_SYMBOL_STR(spi_finalize_current_transfer) },
	{ 0x8e6e149a, __VMLINUX_SYMBOL_STR(dummy_dma_ops) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xe9e22f03, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x8fd836dd, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xf9386e4e, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xbaf7cfd0, __VMLINUX_SYMBOL_STR(devm_spi_register_master) },
	{ 0x5a245c7f, __VMLINUX_SYMBOL_STR(__device_reset) },
	{ 0x9a5e2731, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0xb73f28c2, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x9e931bf4, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0x296a0eb1, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0x2396c7f0, __VMLINUX_SYMBOL_STR(clk_set_parent) },
	{ 0xbb541fba, __VMLINUX_SYMBOL_STR(devm_clk_register) },
	{ 0xde46e353, __VMLINUX_SYMBOL_STR(clk_mux_ops) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc569d8ce, __VMLINUX_SYMBOL_STR(__clk_get_name) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xd2a45be2, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x193b9bd9, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x7e9cca0b, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x47a0a85a, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x76c51871, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x5fef062, __VMLINUX_SYMBOL_STR(of_device_get_match_data) },
	{ 0xfa936332, __VMLINUX_SYMBOL_STR(spi_alloc_master) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x8c12880d, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7bd5ec57, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Camlogic,meson-gx-spicc");
MODULE_ALIAS("of:N*T*Camlogic,meson-gx-spiccC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-txlx-spicc");
MODULE_ALIAS("of:N*T*Camlogic,meson-txlx-spiccC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-spicc");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-spiccC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-spicc");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-spiccC*");
