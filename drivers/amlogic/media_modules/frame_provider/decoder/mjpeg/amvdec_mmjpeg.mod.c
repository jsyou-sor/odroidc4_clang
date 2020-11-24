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
	{ 0x8221072e, __VMLINUX_SYMBOL_STR(canvas_config_config) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xcfbfcaa6, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x279c7819, __VMLINUX_SYMBOL_STR(amvdec_suspend) },
	{ 0x21e2d514, __VMLINUX_SYMBOL_STR(vdec_v4l_get_buffer) },
	{ 0x7b090489, __VMLINUX_SYMBOL_STR(get_firmware_data) },
	{ 0x17551d2a, __VMLINUX_SYMBOL_STR(amvdec_vdec_loadmc_ex) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x526b4d1b, __VMLINUX_SYMBOL_STR(amvdec_resume) },
	{ 0x7b0b0b8, __VMLINUX_SYMBOL_STR(vdec_clean_input) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6371901a, __VMLINUX_SYMBOL_STR(vdec_set_status) },
	{ 0xe658743, __VMLINUX_SYMBOL_STR(vdec_vframe_dirty) },
	{ 0x6b4197df, __VMLINUX_SYMBOL_STR(amvdec_stop) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4f9ce2ec, __VMLINUX_SYMBOL_STR(decoder_bmmu_box_free) },
	{ 0xb98ab70f, __VMLINUX_SYMBOL_STR(decoder_bmmu_box_alloc_buf_phy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1cde0400, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcae2e331, __VMLINUX_SYMBOL_STR(vdec_has_more_input) },
	{ 0x5c3f9638, __VMLINUX_SYMBOL_STR(vdec_v4l_set_pic_infos) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x7f331e31, __VMLINUX_SYMBOL_STR(codec_reg_write) },
	{ 0xd8fd1768, __VMLINUX_SYMBOL_STR(codec_reg_read) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x78d5adce, __VMLINUX_SYMBOL_STR(vdec_core_finish_run) },
	{ 0x38ae9d15, __VMLINUX_SYMBOL_STR(vdec_schedule_work) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xf96465fd, __VMLINUX_SYMBOL_STR(vcodec_profile_register) },
	{ 0x6c8bc9ab, __VMLINUX_SYMBOL_STR(canvas_config) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xf4a5a79c, __VMLINUX_SYMBOL_STR(pts_lookup_offset_us64) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x361ba156, __VMLINUX_SYMBOL_STR(vdec_core_release) },
	{ 0xcdb8b3b9, __VMLINUX_SYMBOL_STR(tee_enabled) },
	{ 0xaa408e8, __VMLINUX_SYMBOL_STR(vf_get_receiver) },
	{ 0xefd57ae0, __VMLINUX_SYMBOL_STR(decoder_bmmu_box_alloc_box) },
	{ 0xa6df19bf, __VMLINUX_SYMBOL_STR(vdec_free_irq) },
	{ 0xb0101a5d, __VMLINUX_SYMBOL_STR(codec_mm_unmap_phyaddr) },
	{ 0xc7dd4ae, __VMLINUX_SYMBOL_STR(amvdec_start) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x1339a2ec, __VMLINUX_SYMBOL_STR(vdec_source_changed) },
	{ 0x2cd54376, __VMLINUX_SYMBOL_STR(vdec_reset_core) },
	{ 0xc9b9b232, __VMLINUX_SYMBOL_STR(vdec_core_request) },
	{ 0x8db34c5b, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x5b632a81, __VMLINUX_SYMBOL_STR(vf_provider_init) },
	{ 0x73787221, __VMLINUX_SYMBOL_STR(vdec_prepare_input) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa500333a, __VMLINUX_SYMBOL_STR(vdec_v4l_binding_fd_and_vf) },
	{ 0x3c17cdbc, __VMLINUX_SYMBOL_STR(vf_notify_receiver) },
	{ 0x9f6b70cf, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xdcb4f77c, __VMLINUX_SYMBOL_STR(vdec_enable_input) },
	{ 0xaeebaa28, __VMLINUX_SYMBOL_STR(decoder_bmmu_box_get_mem_handle) },
	{ 0xdae056f4, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x21b78a9e, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xba9cd640, __VMLINUX_SYMBOL_STR(codec_mm_vmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=decoder_common,firmware";

