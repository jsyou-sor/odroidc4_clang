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
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x637ae1d0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5ab4496e, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_free) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x92e17b29, __VMLINUX_SYMBOL_STR(of_find_i2c_adapter_by_node) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xcfbfcaa6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xd90508dd, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xd9404106, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x3afcdd4b, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xbded90fd, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xc8d262fd, __VMLINUX_SYMBOL_STR(dvb_register_device) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x22217c08, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0x2d66357e, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xbad422, __VMLINUX_SYMBOL_STR(__register_chrdev) },
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
	{ 0x3609cff7, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x1cde0400, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x260241a1, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x77258fa6, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x9baa972e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7f331e31, __VMLINUX_SYMBOL_STR(codec_reg_write) },
	{ 0x30a5f621, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xd0d2ef6c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xd8fd1768, __VMLINUX_SYMBOL_STR(codec_reg_read) },
	{ 0xc4c4fd7c, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb2b5f670, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xcb356106, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xd7b96b47, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x1876ece9, __VMLINUX_SYMBOL_STR(aml_write_cbus) },
	{ 0xfadf2436, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0x6ab0d308, __VMLINUX_SYMBOL_STR(dvb_generic_release) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x228f4555, __VMLINUX_SYMBOL_STR(kimage_voffset) },
	{ 0x20d7a862, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f9b1172, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x7a32a70, __VMLINUX_SYMBOL_STR(dvb_unregister_device) },
	{ 0x639f0940, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x66d87d38, __VMLINUX_SYMBOL_STR(symbol_put_addr) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1912a06b, __VMLINUX_SYMBOL_STR(dvb_generic_open) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xc1f4ef87, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xa17a6ffa, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xa6df19bf, __VMLINUX_SYMBOL_STR(vdec_free_irq) },
	{ 0xc72dd23c, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xae5a97da, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xeb5daefc, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x551f21ab, __VMLINUX_SYMBOL_STR(dummy_dma_ops) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb0287b1e, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x998b487b, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x45e7d947, __VMLINUX_SYMBOL_STR(aml_read_cbus) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8db34c5b, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xe963b912, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8255b784, __VMLINUX_SYMBOL_STR(vdec_request_irq) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9f6b70cf, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xaee072ac, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x67465503, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xa973a80a, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xb99d5a0c, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=decoder_common";

