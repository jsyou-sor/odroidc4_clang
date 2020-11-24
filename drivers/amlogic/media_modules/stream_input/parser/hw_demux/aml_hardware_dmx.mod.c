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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x5ab4496e, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_free) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc3c77f8d, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_init) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x92e17b29, __VMLINUX_SYMBOL_STR(of_find_i2c_adapter_by_node) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xcfbfcaa6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x4564e966, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xd90508dd, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0xd9404106, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x3afcdd4b, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xbded90fd, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xc8d262fd, __VMLINUX_SYMBOL_STR(dvb_register_device) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x22217c08, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0x6494fc7c, __VMLINUX_SYMBOL_STR(tsdemux_set_ops) },
	{ 0xdccfd96a, __VMLINUX_SYMBOL_STR(get_meson_cpu_version) },
	{ 0xc26af0cc, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x47bffea2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2d840ce9, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xe6d531e9, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x1cde0400, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x260241a1, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xe60d865f, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_write) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x77258fa6, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x9baa972e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x30a5f621, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xd0d2ef6c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xcb356106, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xb61bf00c, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xd7b96b47, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x1876ece9, __VMLINUX_SYMBOL_STR(aml_write_cbus) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xfadf2436, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0x6ab0d308, __VMLINUX_SYMBOL_STR(dvb_generic_release) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x328b7bcb, __VMLINUX_SYMBOL_STR(codec_mm_phys_to_virt) },
	{ 0x228f4555, __VMLINUX_SYMBOL_STR(kimage_voffset) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x7a32a70, __VMLINUX_SYMBOL_STR(dvb_unregister_device) },
	{ 0x639f0940, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x3c754fc1, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x66d87d38, __VMLINUX_SYMBOL_STR(symbol_put_addr) },
	{ 0xb3b345be, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_packets) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x1912a06b, __VMLINUX_SYMBOL_STR(dvb_generic_open) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xc1f4ef87, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xc72dd23c, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xae5a97da, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x551f21ab, __VMLINUX_SYMBOL_STR(dummy_dma_ops) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb0287b1e, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x998b487b, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x45e7d947, __VMLINUX_SYMBOL_STR(aml_read_cbus) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8db34c5b, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9f6b70cf, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xaee072ac, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xdf1ded2c, __VMLINUX_SYMBOL_STR(amports_switch_gate) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xb99d5a0c, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=stream_input,media_clock";

