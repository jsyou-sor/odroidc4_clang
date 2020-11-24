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
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1314ecda, __VMLINUX_SYMBOL_STR(media_device_unregister_entity) },
	{ 0xfef1d3f2, __VMLINUX_SYMBOL_STR(media_create_pad_link) },
	{ 0xa3f09340, __VMLINUX_SYMBOL_STR(media_device_register_entity) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x355629ef, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xd998e86e, __VMLINUX_SYMBOL_STR(v4l2_async_unregister_subdev) },
	{ 0x5c04da29, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x2743cfd4, __VMLINUX_SYMBOL_STR(v4l2_async_register_subdev) },
	{ 0xa84f27f6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x727aad3a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu_items) },
	{ 0x3969ac20, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x3dcc1906, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x48c591cc, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x892a0e06, __VMLINUX_SYMBOL_STR(media_entity_pads_init) },
	{ 0x4ba47e67, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x2a9bdda9, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x26fda649, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xddb278bc, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0x238458da, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xb65871d5, __VMLINUX_SYMBOL_STR(v4l2_of_parse_endpoint) },
	{ 0xfa30bd90, __VMLINUX_SYMBOL_STR(of_graph_get_next_endpoint) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcf0a8cb0, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xd0b42871, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7f996084, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x6f83ec00, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:tvp5150");
MODULE_ALIAS("of:N*T*Cti,tvp5150");
MODULE_ALIAS("of:N*T*Cti,tvp5150C*");
