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
	{ 0xcfbfcaa6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x21b78a9e, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x337b8662, __VMLINUX_SYMBOL_STR(dma_buf_vunmap) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xa1055f64, __VMLINUX_SYMBOL_STR(codec_mm_dma_flush) },
	{ 0xf8d84ea2, __VMLINUX_SYMBOL_STR(destroy_ge2d_work_queue) },
	{ 0xe4963868, __VMLINUX_SYMBOL_STR(create_ge2d_work_queue) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xde434656, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x700b6051, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb2b5f670, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xa62d2ca0, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0xa17a6ffa, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x3609cff7, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x164dd20e, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x8523ef93, __VMLINUX_SYMBOL_STR(codec_mm_get_total_size) },
	{ 0x4e8a9bd, __VMLINUX_SYMBOL_STR(of_reserved_mem_device_init_by_idx) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb1454e54, __VMLINUX_SYMBOL_STR(codec_mm_alloc_for_dma) },
	{ 0xa1664c9a, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0xfadf2436, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0xff42323c, __VMLINUX_SYMBOL_STR(dma_buf_put) },
	{ 0xd6e89ee, __VMLINUX_SYMBOL_STR(dma_buf_detach) },
	{ 0xf6fc05c5, __VMLINUX_SYMBOL_STR(dma_buf_unmap_attachment) },
	{ 0x4ceec2b8, __VMLINUX_SYMBOL_STR(dma_buf_end_cpu_access) },
	{ 0xc212f944, __VMLINUX_SYMBOL_STR(dma_buf_vmap) },
	{ 0x42c886d2, __VMLINUX_SYMBOL_STR(dma_buf_begin_cpu_access) },
	{ 0xc3d3625a, __VMLINUX_SYMBOL_STR(dma_buf_map_attachment) },
	{ 0x4c09e70f, __VMLINUX_SYMBOL_STR(dma_buf_attach) },
	{ 0xb2937393, __VMLINUX_SYMBOL_STR(dma_buf_get) },
	{ 0xba9cd640, __VMLINUX_SYMBOL_STR(codec_mm_vmap) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0x11e5d11, __VMLINUX_SYMBOL_STR(stretchblt_noalpha) },
	{ 0x627b2272, __VMLINUX_SYMBOL_STR(ge2d_context_config_ex) },
	{ 0x279f3736, __VMLINUX_SYMBOL_STR(canvas_read) },
	{ 0x9f6b70cf, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xf96465fd, __VMLINUX_SYMBOL_STR(vcodec_profile_register) },
	{ 0x1cde0400, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xe963b912, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x2d66357e, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xcb356106, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x8f9b1172, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x639f0940, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xbad422, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x6fa7af4c, __VMLINUX_SYMBOL_STR(codec_mm_free_for_dma) },
	{ 0xb0101a5d, __VMLINUX_SYMBOL_STR(codec_mm_unmap_phyaddr) },
	{ 0xf9dde891, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xeb5daefc, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x637ae1d0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xdf1ded2c, __VMLINUX_SYMBOL_STR(amports_switch_gate) },
	{ 0x6c8bc9ab, __VMLINUX_SYMBOL_STR(canvas_config) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdccfd96a, __VMLINUX_SYMBOL_STR(get_meson_cpu_version) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe415230d, __VMLINUX_SYMBOL_STR(vdec_poweroff) },
	{ 0x285de1a, __VMLINUX_SYMBOL_STR(vdec_poweron) },
	{ 0x89335dfb, __VMLINUX_SYMBOL_STR(amhcodec_stop) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x309c42b5, __VMLINUX_SYMBOL_STR(amhcodec_start) },
	{ 0x700ddba0, __VMLINUX_SYMBOL_STR(amhcodec_loadmc) },
	{ 0xf16bc341, __VMLINUX_SYMBOL_STR(vdec_on) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x551f21ab, __VMLINUX_SYMBOL_STR(dummy_dma_ops) },
	{ 0xa6d5cd, __VMLINUX_SYMBOL_STR(get_data_from_name) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7f331e31, __VMLINUX_SYMBOL_STR(codec_reg_write) },
	{ 0xd8fd1768, __VMLINUX_SYMBOL_STR(codec_reg_read) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=decoder_common,media_clock,firmware";

