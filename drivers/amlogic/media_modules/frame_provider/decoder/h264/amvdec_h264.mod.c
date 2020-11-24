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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x637ae1d0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x48b0a81, __VMLINUX_SYMBOL_STR(canvas_config_ex) },
	{ 0x4c2a881a, __VMLINUX_SYMBOL_STR(get_post_canvas) },
	{ 0x30531a3b, __VMLINUX_SYMBOL_STR(vdec_wakeup_userdata_poll) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x279c7819, __VMLINUX_SYMBOL_STR(amvdec_suspend) },
	{ 0xca485605, __VMLINUX_SYMBOL_STR(configs_register_configs) },
	{ 0x7b090489, __VMLINUX_SYMBOL_STR(get_firmware_data) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x834d1b18, __VMLINUX_SYMBOL_STR(vdec_is_support_4k) },
	{ 0xdccfd96a, __VMLINUX_SYMBOL_STR(get_meson_cpu_version) },
	{ 0x526b4d1b, __VMLINUX_SYMBOL_STR(amvdec_resume) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe4963868, __VMLINUX_SYMBOL_STR(create_ge2d_work_queue) },
	{ 0x47bffea2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6b4197df, __VMLINUX_SYMBOL_STR(amvdec_stop) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4f9ce2ec, __VMLINUX_SYMBOL_STR(decoder_bmmu_box_free) },
	{ 0xb98ab70f, __VMLINUX_SYMBOL_STR(decoder_bmmu_box_alloc_buf_phy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x627b2272, __VMLINUX_SYMBOL_STR(ge2d_context_config_ex) },
	{ 0x1cde0400, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdf60c5af, __VMLINUX_SYMBOL_STR(amvdec_loadmc_ex) },
	{ 0x11e5d11, __VMLINUX_SYMBOL_STR(stretchblt_noalpha) },
	{ 0x33648a5c, __VMLINUX_SYMBOL_STR(configs_init_new_node) },
	{ 0xf8d84ea2, __VMLINUX_SYMBOL_STR(destroy_ge2d_work_queue) },
	{ 0x7c72b17c, __VMLINUX_SYMBOL_STR(jiffies_64) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x269a4d1d, __VMLINUX_SYMBOL_STR(amstream_wakeup_userdata_poll) },
	{ 0x4dba61e, __VMLINUX_SYMBOL_STR(vf_unreg_provider) },
	{ 0x7f331e31, __VMLINUX_SYMBOL_STR(codec_reg_write) },
	{ 0xd8fd1768, __VMLINUX_SYMBOL_STR(codec_reg_read) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x429e256, __VMLINUX_SYMBOL_STR(get_decoder_firmware_data) },
	{ 0x88a71869, __VMLINUX_SYMBOL_STR(amports_get_dma_device) },
	{ 0x3ed11365, __VMLINUX_SYMBOL_STR(vdec_fill_frame_info) },
	{ 0x20d7a862, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe9e29db2, __VMLINUX_SYMBOL_STR(vf_reg_provider) },
	{ 0xf96465fd, __VMLINUX_SYMBOL_STR(vcodec_profile_register) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x48b69316, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0xb5c66c56, __VMLINUX_SYMBOL_STR(vdec_count_info) },
	{ 0x2c840860, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0x1023dffa, __VMLINUX_SYMBOL_STR(query_video_status) },
	{ 0x6c8bc9ab, __VMLINUX_SYMBOL_STR(canvas_config) },
	{ 0xf4a5a79c, __VMLINUX_SYMBOL_STR(pts_lookup_offset_us64) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xcdb8b3b9, __VMLINUX_SYMBOL_STR(tee_enabled) },
	{ 0xaa408e8, __VMLINUX_SYMBOL_STR(vf_get_receiver) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xefd57ae0, __VMLINUX_SYMBOL_STR(decoder_bmmu_box_alloc_box) },
	{ 0x7a75a898, __VMLINUX_SYMBOL_STR(amvdec_enable) },
	{ 0x8bc0c9, __VMLINUX_SYMBOL_STR(get_cpu_major_id) },
	{ 0x8523ef93, __VMLINUX_SYMBOL_STR(codec_mm_get_total_size) },
	{ 0xa6df19bf, __VMLINUX_SYMBOL_STR(vdec_free_irq) },
	{ 0xc7dd4ae, __VMLINUX_SYMBOL_STR(amvdec_start) },
	{ 0xeb5daefc, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x551f21ab, __VMLINUX_SYMBOL_STR(dummy_dma_ops) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2874b8e, __VMLINUX_SYMBOL_STR(tsync_get_av_threshold_min) },
	{ 0x10e4b394, __VMLINUX_SYMBOL_STR(amvdec_disable) },
	{ 0x1339a2ec, __VMLINUX_SYMBOL_STR(vdec_source_changed) },
	{ 0x279f3736, __VMLINUX_SYMBOL_STR(canvas_read) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7bcc3832, __VMLINUX_SYMBOL_STR(pts_pickout_offset_us64) },
	{ 0x5b632a81, __VMLINUX_SYMBOL_STR(vf_provider_init) },
	{ 0x8255b784, __VMLINUX_SYMBOL_STR(vdec_request_irq) },
	{ 0x17df716e, __VMLINUX_SYMBOL_STR(trickmode_i) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x7ad93f61, __VMLINUX_SYMBOL_STR(configs_register_path_node) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3c17cdbc, __VMLINUX_SYMBOL_STR(vf_notify_receiver) },
	{ 0x9f6b70cf, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xaeebaa28, __VMLINUX_SYMBOL_STR(decoder_bmmu_box_get_mem_handle) },
	{ 0x21b78a9e, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xd8583cfd, __VMLINUX_SYMBOL_STR(init_userdata_fifo) },
	{ 0x8fa7b4ae, __VMLINUX_SYMBOL_STR(decoder_do_frame_check) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=decoder_common,firmware,stream_input,media_clock";

