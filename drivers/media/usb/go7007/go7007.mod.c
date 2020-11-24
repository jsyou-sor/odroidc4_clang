#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xee254d21, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x415a0a1, __VMLINUX_SYMBOL_STR(v4l2_event_queue) },
	{ 0xb3ebf9aa, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x94780111, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x6814ea44, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xa84f27f6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x817ce597, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0x3969ac20, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xfd7d528b, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xc0f9e7, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xbbe2478a, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xede688dd, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xb3158dcc, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x7cb154ce, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xfa36e568, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x31092ab5, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x202c8945, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0x8ef2cb9f, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1cc20884, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0xcd5d469c, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x11fa270c, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x7ec63847, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0xd1a3748a, __VMLINUX_SYMBOL_STR(v4l2_event_subscribe) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x72c0b68a, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x4b0038cf, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xd4809b94, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x889fede0, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x74a57213, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbd48a292, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0x96a6d0d6, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x702c457d, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xe8d21a0b, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x6d162e58, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd38d4b60, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x19b19677, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x2c7fdfd2, __VMLINUX_SYMBOL_STR(v4l2_ctrl_grab) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xba7d18e8, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xae1f2ea2, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf301b8ce, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x3dcc1906, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x6ef3fc3f, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xc7c4e17d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x3fb1a6a9, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x3ffb8d83, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev_board) },
	{ 0xaeb860fa, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x66838b33, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfa4f6367, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xa0d5ba3e, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x7ce1dadd, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x6c049048, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xd5e2ebf2, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xe08ab389, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videobuf2-vmalloc,videobuf2-core";

