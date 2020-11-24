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
	{ 0x6fe84350, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x1028d6f7, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0xf410d6f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xbcbcdd2f, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0xef302581, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x50344ea5, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x3bf8db87, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xad687a9d, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x3d3273b1, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x919d710c, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0x5072e533, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x61e913a0, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x253a4b00, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x85308aee, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xe1ef18a3, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb9f08478, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7bafa862, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x276b7823, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xcc116bfd, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xeead97e5, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x8491c0e, __VMLINUX_SYMBOL_STR(sock_efree) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x22f32756, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbfe8a96a, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x2ac9f6a9, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8d437a44, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x4755c8ed, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xb1a3243c, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x3c03e97f, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xc4c58961, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xd2b532a1, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0xbe082271, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x2f92d949, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x965e203e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xd87e01b9, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x6485871b, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0x7738507b, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0x9cd2d094, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x78c993d2, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb1540644, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x73fabbc3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x6dbd491f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x40dbc442, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x1108e82c, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x394e2e4, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x7c858cd7, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";

