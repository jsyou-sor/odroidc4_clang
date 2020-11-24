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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6fe84350, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x7e2180cd, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x50344ea5, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x3bf8db87, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x9621f6cf, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xd25e16e3, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x1829d188, __VMLINUX_SYMBOL_STR(wait_woken) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x85308aee, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf7fe6da6, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x276b7823, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xcc116bfd, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x6ea1602e, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbfe8a96a, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x2a1c095f, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xe2431b4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4755c8ed, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x3c03e97f, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc4c58961, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xbe082271, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xa6ffec60, __VMLINUX_SYMBOL_STR(woken_wake_function) },
	{ 0x6d3db3d4, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x144ab0c5, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x249e4962, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x8bbfb7c7, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x9bc6ef31, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x1bca2a90, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xed6e175d, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xe9bd654c, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xda10ec3, __VMLINUX_SYMBOL_STR(security_sock_graft) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "703AC08D17CEA5BDCDD52E8");
