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
	{ 0xe07ad2e0, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8386c46d, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xee254d21, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x416be1ce, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xb3ebf9aa, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x6814ea44, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xa84f27f6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xfd7d528b, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xc0f9e7, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xa7b1a489, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xbbe2478a, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xede688dd, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7cb154ce, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xfa36e568, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x31092ab5, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x86cd0890, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1cc20884, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x11fa270c, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x7ec63847, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe2431b4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeabb157c, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x27cbce6f, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x4b0038cf, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xd4809b94, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x889fede0, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x3251f9ea, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x139a8d20, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x702c457d, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0xe8d21a0b, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x6d162e58, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5a1e4d3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xd38d4b60, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x19b19677, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x45452cf0, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x71190a27, __VMLINUX_SYMBOL_STR(snd_ac97_bus) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xba7d18e8, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xb1c423b0, __VMLINUX_SYMBOL_STR(snd_ac97_mixer) },
	{ 0xae1f2ea2, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3dcc1906, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x6ef3fc3f, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x3fb1a6a9, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x985f9294, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xaeb860fa, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5e5e7973, __VMLINUX_SYMBOL_STR(vb2_ioctl_expbuf) },
	{ 0x2c834fec, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xa0d5ba3e, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x7ce1dadd, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x5b1f65b9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xd5e2ebf2, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x609c8d61, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe08ab389, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videobuf2-vmalloc,videobuf2-core,snd-ac97-codec";

MODULE_ALIAS("usb:v05E1p0408d*dc*dsc*dp*ic*isc*ip*in*");
