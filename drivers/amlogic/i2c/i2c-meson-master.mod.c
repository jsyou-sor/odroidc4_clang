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
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf3a426a4, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf8b4100, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x142d9f6e, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xd8cfd241, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xbded90fd, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0x998b487b, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x2d840ce9, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0x22217c08, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x200f357a, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x164dd20e, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xcf159530, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x78eaa20, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x9baa972e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xae5a97da, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x4ea23487, __VMLINUX_SYMBOL_STR(of_device_get_match_data) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe74a742f, __VMLINUX_SYMBOL_STR(fwnode_property_present) },
	{ 0xaee072ac, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xdae056f4, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9f6b70cf, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x1cde0400, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xbaf160cd, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Camlogic,meson6-i2c");
MODULE_ALIAS("of:N*T*Camlogic,meson6-i2cC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-i2c");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-i2cC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gx-i2c");
MODULE_ALIAS("of:N*T*Camlogic,meson-gx-i2cC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-i2c");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-i2cC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-txl-i2c");
MODULE_ALIAS("of:N*T*Camlogic,meson-txl-i2cC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-txlx-i2c");
MODULE_ALIAS("of:N*T*Camlogic,meson-txlx-i2cC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-i2c");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-i2cC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12b-i2c");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12b-i2cC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-i2c");
MODULE_ALIAS("of:N*T*Camlogic,meson-i2cC*");
