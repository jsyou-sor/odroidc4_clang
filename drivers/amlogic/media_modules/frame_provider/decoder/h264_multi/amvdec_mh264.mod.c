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
	{ 0xcc7c349d, __VMLINUX_SYMBOL_STR(vdec_v4l_write_frame_sync) },
	{ 0xa214e024, __VMLINUX_SYMBOL_STR(amhevc_disable) },
	{ 0x637ae1d0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x48b0a81, __VMLINUX_SYMBOL_STR(canvas_config_ex) },
	{ 0x30531a3b, __VMLINUX_SYMBOL_STR(vdec_wakeup_userdata_poll) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xcfbfcaa6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x279c7819, __VMLINUX_SYMBOL_STR(amvdec_suspend) },
	{ 0x21e2d514, __VMLINUX_SYMBOL_STR(vdec_v4l_get_buffer) },
	{ 0x8c562b42, __VMLINUX_SYMBOL_STR(vdec_set_next_sched) },
	{ 0xca485605, __VMLINUX_SYMBOL_STR(configs_register_configs) },
	{ 0x7b090489, __VMLINUX_SYMBOL_STR(get_firmware_data) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x372d3021, __VMLINUX_SYMBOL_STR(amhevc_enable) },
	{ 0x69b76ced, __VMLINUX_SYMBOL_STR(decoder_mmu_box_free_idx_tail) },
	{ 0xb62a9ab, __VMLINUX_SYMBOL_STR(decoder_mmu_box_alloc_box) },
	{ 0x17551d2a, __VMLINUX_SYMBOL_STR(amvdec_vdec_loadmc_ex) },
	{ 0xfb95c41b, __VMLINUX_SYMBOL_STR(decoder_mmu_box_free_idx) },
	{ 0xe68435ce, __VMLINUX_SYMBOL_STR(amhevc_start) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x834d1b18, __VMLINUX_SYMBOL_STR(vdec_is_support_4k) },
	{ 0x526b4d1b, __VMLINUX_SYMBOL_STR(amvdec_resume) },
	{ 0x7b0b0b8, __VMLINUX_SYMBOL_STR(vdec_clean_input) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6371901a, __VMLINUX_SYMBOL_STR(vdec_set_status) },
	{ 0xe658743, __VMLINUX_SYMBOL_STR(vdec_vframe_dirty) },
	{ 0x47bffea2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6b4197df, __VMLINUX_SYMBOL_STR(amvdec_stop) },
	{ 0xde643b50, __VMLINUX_SYMBOL_STR(hevc_mmu_dma_check) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4f9ce2ec, __VMLINUX_SYMBOL_STR(decoder_bmmu_box_free) },
	{ 0xb98ab70f, __VMLINUX_SYMBOL_STR(decoder_bmmu_box_alloc_buf_phy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1cde0400, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x9aecee7f, __VMLINUX_SYMBOL_STR(decoder_mmu_box_alloc_idx) },
	{ 0xcae2e331, __VMLINUX_SYMBOL_STR(vdec_has_more_input) },
	{ 0x33648a5c, __VMLINUX_SYMBOL_STR(configs_init_new_node) },
	{ 0xa29927b6, __VMLINUX_SYMBOL_STR(vdec_set_flag) },
	{ 0x5c3f9638, __VMLINUX_SYMBOL_STR(vdec_v4l_set_pic_infos) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xa1055f64, __VMLINUX_SYMBOL_STR(codec_mm_dma_flush) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x269a4d1d, __VMLINUX_SYMBOL_STR(amstream_wakeup_userdata_poll) },
	{ 0x7f331e31, __VMLINUX_SYMBOL_STR(codec_reg_write) },
	{ 0xd8fd1768, __VMLINUX_SYMBOL_STR(codec_reg_read) },
	{ 0xc4c4fd7c, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x88a71869, __VMLINUX_SYMBOL_STR(amports_get_dma_device) },
	{ 0x3ed11365, __VMLINUX_SYMBOL_STR(vdec_fill_frame_info) },
	{ 0x78d5adce, __VMLINUX_SYMBOL_STR(vdec_core_finish_run) },
	{ 0x328b7bcb, __VMLINUX_SYMBOL_STR(codec_mm_phys_to_virt) },
	{ 0x20d7a862, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x38ae9d15, __VMLINUX_SYMBOL_STR(vdec_schedule_work) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xf96465fd, __VMLINUX_SYMBOL_STR(vcodec_profile_register) },
	{ 0x48b69316, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0xeb207a7f, __VMLINUX_SYMBOL_STR(vdec_set_prepare_level) },
	{ 0x4b297ab8, __VMLINUX_SYMBOL_STR(vdec_get_debug_flags) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x2c840860, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xf4a5a79c, __VMLINUX_SYMBOL_STR(pts_lookup_offset_us64) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x361ba156, __VMLINUX_SYMBOL_STR(vdec_core_release) },
	{ 0xaa408e8, __VMLINUX_SYMBOL_STR(vf_get_receiver) },
	{ 0xcdb8b3b9, __VMLINUX_SYMBOL_STR(tee_enabled) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xefd57ae0, __VMLINUX_SYMBOL_STR(decoder_bmmu_box_alloc_box) },
	{ 0x7a75a898, __VMLINUX_SYMBOL_STR(amvdec_enable) },
	{ 0x47e7ce5b, __VMLINUX_SYMBOL_STR(amhevc_stop) },
	{ 0x8bc0c9, __VMLINUX_SYMBOL_STR(get_cpu_major_id) },
	{ 0xa6df19bf, __VMLINUX_SYMBOL_STR(vdec_free_irq) },
	{ 0xb0101a5d, __VMLINUX_SYMBOL_STR(codec_mm_unmap_phyaddr) },
	{ 0xc7dd4ae, __VMLINUX_SYMBOL_STR(amvdec_start) },
	{ 0xeb5daefc, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x551f21ab, __VMLINUX_SYMBOL_STR(dummy_dma_ops) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2479ebf9, __VMLINUX_SYMBOL_STR(decoder_mmu_box_sc_check) },
	{ 0x10e4b394, __VMLINUX_SYMBOL_STR(amvdec_disable) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1339a2ec, __VMLINUX_SYMBOL_STR(vdec_source_changed) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x90f7658c, __VMLINUX_SYMBOL_STR(decoder_mmu_box_get_mem_handle) },
	{ 0x2cd54376, __VMLINUX_SYMBOL_STR(vdec_reset_core) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7bcc3832, __VMLINUX_SYMBOL_STR(pts_pickout_offset_us64) },
	{ 0xc9b9b232, __VMLINUX_SYMBOL_STR(vdec_core_request) },
	{ 0x8db34c5b, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x5b632a81, __VMLINUX_SYMBOL_STR(vf_provider_init) },
	{ 0x1360469b, __VMLINUX_SYMBOL_STR(amhevc_loadmc_ex) },
	{ 0x1f2aa3bd, __VMLINUX_SYMBOL_STR(vdec_sync_input) },
	{ 0x981c1c75, __VMLINUX_SYMBOL_STR(get_config_int) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x23ccba33, __VMLINUX_SYMBOL_STR(decoder_bmmu_box_free_idx) },
	{ 0x73787221, __VMLINUX_SYMBOL_STR(vdec_prepare_input) },
	{ 0x7ad93f61, __VMLINUX_SYMBOL_STR(configs_register_path_node) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa500333a, __VMLINUX_SYMBOL_STR(vdec_v4l_binding_fd_and_vf) },
	{ 0x3c17cdbc, __VMLINUX_SYMBOL_STR(vf_notify_receiver) },
	{ 0xe5ce808d, __VMLINUX_SYMBOL_STR(hevc_reset_core) },
	{ 0x9f6b70cf, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xdcb4f77c, __VMLINUX_SYMBOL_STR(vdec_enable_input) },
	{ 0xaeebaa28, __VMLINUX_SYMBOL_STR(decoder_bmmu_box_get_mem_handle) },
	{ 0x21b78a9e, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x8fa7b4ae, __VMLINUX_SYMBOL_STR(decoder_do_frame_check) },
	{ 0x69ba1bad, __VMLINUX_SYMBOL_STR(decoder_mmu_box_free) },
	{ 0xba9cd640, __VMLINUX_SYMBOL_STR(codec_mm_vmap) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x263c3152, __VMLINUX_SYMBOL_STR(bcmp) },
	{ 0x85f5e2aa, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x281823c5, __VMLINUX_SYMBOL_STR(__kfifo_out_peek) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=decoder_common,firmware,stream_input,media_clock";

