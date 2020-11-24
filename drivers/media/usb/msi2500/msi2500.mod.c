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
	{ 0x8386c46d, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x4b0038cf, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xb3ebf9aa, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0xa0d5ba3e, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xc0f9e7, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xe870dc14, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x1379eb5c, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x702c457d, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x7ec63847, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0xae1f2ea2, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0xe07ad2e0, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0xd38d4b60, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0xba7d18e8, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x11fa270c, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xd5e2ebf2, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xfd7d528b, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x31092ab5, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xee254d21, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x6ef3fc3f, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xbbe2478a, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x19b19677, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xd4809b94, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x139a8d20, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x5b1f65b9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xa7b1a489, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x1d901bb3, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0x817ce597, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0xf5d8ca40, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x889fede0, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5a1e4d3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x2c834fec, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x609c8d61, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x27cbce6f, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xe2431b4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xa9e05503, __VMLINUX_SYMBOL_STR(spi_finalize_current_message) },
	{ 0x3251f9ea, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x7ce1dadd, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xeabb157c, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x86cd0890, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc8c8663f, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xede688dd, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x6b2482b6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6814ea44, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xa1b48ede, __VMLINUX_SYMBOL_STR(spi_unregister_master) },
	{ 0xa84f27f6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x3dcc1906, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xb73638be, __VMLINUX_SYMBOL_STR(v4l2_spi_new_subdev) },
	{ 0xf9386e4e, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x806a49fc, __VMLINUX_SYMBOL_STR(spi_register_master) },
	{ 0xfa936332, __VMLINUX_SYMBOL_STR(spi_alloc_master) },
	{ 0xfa36e568, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe08ab389, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x1cc20884, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videobuf2-core,videobuf2-vmalloc";

MODULE_ALIAS("usb:v1DF7p2500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pD300d*dc*dsc*dp*ic*isc*ip*in*");
