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
	{ 0xfc050b9, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0xef1c68bc, __VMLINUX_SYMBOL_STR(hid_add_device) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0x7e2180cd, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xe034a7c, __VMLINUX_SYMBOL_STR(hid_ignore) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xb68513a0, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xdc09afaa, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x6174faef, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x50344ea5, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xd2a531fd, __VMLINUX_SYMBOL_STR(hid_parse_report) },
	{ 0x3bf8db87, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xd25e16e3, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x1829d188, __VMLINUX_SYMBOL_STR(wait_woken) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x61e913a0, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x74786585, __VMLINUX_SYMBOL_STR(bt_sock_register) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x50d188e2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x100bdfbb, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x769a82a7, __VMLINUX_SYMBOL_STR(hid_input_report) },
	{ 0x8dead1d9, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x98ab764, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x1a779f26, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xcc116bfd, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xd3daf266, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0xa7087666, __VMLINUX_SYMBOL_STR(bt_sock_unlink) },
	{ 0xe440ee5a, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbfe8a96a, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xb9fc9f5e, __VMLINUX_SYMBOL_STR(l2cap_conn_put) },
	{ 0x2a1c095f, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xe2431b4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xcd580b8f, __VMLINUX_SYMBOL_STR(l2cap_is_socket) },
	{ 0x8d437a44, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3c03e97f, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc4c58961, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xbe082271, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8fea24bd, __VMLINUX_SYMBOL_STR(bt_sock_unregister) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x6450794d, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x965e203e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x4db2df17, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xed696697, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xd87e01b9, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x694f5aed, __VMLINUX_SYMBOL_STR(bt_sock_link) },
	{ 0xd3b87d6b, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xa6ffec60, __VMLINUX_SYMBOL_STR(woken_wake_function) },
	{ 0x6d3db3d4, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf9386e4e, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x5917c436, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x249e4962, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x64ec2edc, __VMLINUX_SYMBOL_STR(l2cap_register_user) },
	{ 0x5f11a0a9, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0x9769c334, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xcdef4d42, __VMLINUX_SYMBOL_STR(hid_destroy_device) },
	{ 0xfcad9a19, __VMLINUX_SYMBOL_STR(hid_allocate_device) },
	{ 0x153aa8ad, __VMLINUX_SYMBOL_STR(l2cap_conn_get) },
	{ 0x6c635d68, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xe820b269, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x3184b81c, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x9bc6ef31, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x65151a5e, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xb95ba0c6, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x2b46cd2c, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x88973b20, __VMLINUX_SYMBOL_STR(bt_procfs_init) },
	{ 0xed6e175d, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb2938748, __VMLINUX_SYMBOL_STR(bt_procfs_cleanup) },
	{ 0xf812cff6, __VMLINUX_SYMBOL_STR(memscan) },
	{ 0x6a9343f3, __VMLINUX_SYMBOL_STR(l2cap_unregister_user) },
	{ 0x580f1434, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "464434D13538B5BE1957228");
