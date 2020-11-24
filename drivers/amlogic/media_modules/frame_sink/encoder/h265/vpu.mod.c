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
	{ 0x21b78a9e, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xfc56e983, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x45a55ec8, __VMLINUX_SYMBOL_STR(__iounmap) },
	{ 0xf24b3dfe, __VMLINUX_SYMBOL_STR(__ioremap) },
	{ 0x6bc651c2, __VMLINUX_SYMBOL_STR(of_address_to_resource) },
	{ 0x5b783e8b, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x25576f06, __VMLINUX_SYMBOL_STR(platform_get_irq_byname) },
	{ 0x8523ef93, __VMLINUX_SYMBOL_STR(codec_mm_get_total_size) },
	{ 0x4e8a9bd, __VMLINUX_SYMBOL_STR(of_reserved_mem_device_init_by_idx) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xfadf2436, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0xc3d3625a, __VMLINUX_SYMBOL_STR(dma_buf_map_attachment) },
	{ 0x4c09e70f, __VMLINUX_SYMBOL_STR(dma_buf_attach) },
	{ 0xb2937393, __VMLINUX_SYMBOL_STR(dma_buf_get) },
	{ 0xff42323c, __VMLINUX_SYMBOL_STR(dma_buf_put) },
	{ 0xd6e89ee, __VMLINUX_SYMBOL_STR(dma_buf_detach) },
	{ 0xf6fc05c5, __VMLINUX_SYMBOL_STR(dma_buf_unmap_attachment) },
	{ 0x551791eb, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xdf1ded2c, __VMLINUX_SYMBOL_STR(amports_switch_gate) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x6fa7af4c, __VMLINUX_SYMBOL_STR(codec_mm_free_for_dma) },
	{ 0xb1454e54, __VMLINUX_SYMBOL_STR(codec_mm_alloc_for_dma) },
	{ 0x51e77c97, __VMLINUX_SYMBOL_STR(pfn_valid) },
	{ 0xa1664c9a, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x3744cf36, __VMLINUX_SYMBOL_STR(vmalloc_to_pfn) },
	{ 0x324b3877, __VMLINUX_SYMBOL_STR(up) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x551f21ab, __VMLINUX_SYMBOL_STR(dummy_dma_ops) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xfa91eb38, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xeb5daefc, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x637ae1d0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9f6b70cf, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x1cde0400, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xe963b912, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x2d66357e, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xcb356106, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x8f9b1172, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x639f0940, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xbad422, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x7f331e31, __VMLINUX_SYMBOL_STR(codec_reg_write) },
	{ 0xd8fd1768, __VMLINUX_SYMBOL_STR(codec_reg_read) },
	{ 0xdccfd96a, __VMLINUX_SYMBOL_STR(get_meson_cpu_version) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=media_clock";

