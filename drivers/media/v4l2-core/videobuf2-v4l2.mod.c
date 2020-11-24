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
	{ 0x48468434, __VMLINUX_SYMBOL_STR(vb2_core_streamoff) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9f1b516d, __VMLINUX_SYMBOL_STR(vb2_core_dqbuf) },
	{ 0x390bfd75, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x469c0000, __VMLINUX_SYMBOL_STR(vb2_core_qbuf) },
	{ 0x55a6fc33, __VMLINUX_SYMBOL_STR(vb2_core_querybuf) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5e753e85, __VMLINUX_SYMBOL_STR(vb2_core_streamon) },
	{ 0xabd405f7, __VMLINUX_SYMBOL_STR(vb2_core_poll) },
	{ 0x714ee20c, __VMLINUX_SYMBOL_STR(vb2_read) },
	{ 0x8618ad95, __VMLINUX_SYMBOL_STR(vb2_core_prepare_buf) },
	{ 0xe2431b4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb358f247, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc1aa9897, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0xa24985b9, __VMLINUX_SYMBOL_STR(vb2_core_queue_release) },
	{ 0x125b68cc, __VMLINUX_SYMBOL_STR(vb2_write) },
	{ 0x19b19677, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x2bc037cc, __VMLINUX_SYMBOL_STR(vb2_core_create_bufs) },
	{ 0x8a178c9b, __VMLINUX_SYMBOL_STR(vb2_core_expbuf) },
	{ 0x91be5c9, __VMLINUX_SYMBOL_STR(vb2_core_reqbufs) },
	{ 0xce693183, __VMLINUX_SYMBOL_STR(vb2_verify_memory_type) },
	{ 0x9f71057d, __VMLINUX_SYMBOL_STR(vb2_core_queue_init) },
	{ 0xb7b44eff, __VMLINUX_SYMBOL_STR(vb2_buffer_in_use) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core";

