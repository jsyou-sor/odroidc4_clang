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
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x7846af3e, __VMLINUX_SYMBOL_STR(__kfifo_len_r) },
	{ 0x94780111, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xa7b1a489, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x2484adc3, __VMLINUX_SYMBOL_STR(__kfifo_to_user_r) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x5663ceb8, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x471bf5cc, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xb3158dcc, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd7d1175a, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xe9a37d29, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0xc6cb465a, __VMLINUX_SYMBOL_STR(__kfifo_max_r) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe2431b4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x72c0b68a, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x27cbce6f, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x74a57213, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0x3251f9ea, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb122693f, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_peek) },
	{ 0xf6850d41, __VMLINUX_SYMBOL_STR(snd_hwdep_new) },
	{ 0xe58fca13, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x96a6d0d6, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x7cf58f5f, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0x8bcaac19, __VMLINUX_SYMBOL_STR(usb_urb_ep_type_check) },
	{ 0xe8d21a0b, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x48a3e147, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_ratdens) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5a1e4d3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x6cb35b99, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xb6faac83, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_ack) },
	{ 0x8c7a884f, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x278de0bd, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xdf6af8c6, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x3955fcf6, __VMLINUX_SYMBOL_STR(__kfifo_in_r) },
	{ 0xe1d4425d, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd280d4a9, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x66838b33, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x8e9c0f7, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x5b1f65b9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x8c919838, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0x609c8d61, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

