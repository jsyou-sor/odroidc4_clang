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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe61c03cf, __VMLINUX_SYMBOL_STR(is_fw_load) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x94780111, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xa7b1a489, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xa20d2e54, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0x471bf5cc, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x5cb22d91, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x29beed06, __VMLINUX_SYMBOL_STR(cx231xx_register_extension) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x72c0b68a, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x96a6d0d6, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xe8d21a0b, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5a1e4d3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x6f909754, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x8b0dea1e, __VMLINUX_SYMBOL_STR(cx231xx_capture_start) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2551e689, __VMLINUX_SYMBOL_STR(cx231xx_set_alt_setting) },
	{ 0x3fb1a6a9, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xaeb860fa, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x66838b33, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xfa4f6367, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x5b1f65b9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1571cfb7, __VMLINUX_SYMBOL_STR(cx231xx_unregister_extension) },
	{ 0x609c8d61, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx";

