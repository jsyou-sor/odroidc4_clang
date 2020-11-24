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
	{ 0x22baea3d, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x6fe84350, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x9a694f4d, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x5b4c974a, __VMLINUX_SYMBOL_STR(rds_trans_register) },
	{ 0xdc09afaa, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x490b4f00, __VMLINUX_SYMBOL_STR(sock_create_lite) },
	{ 0x21458145, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xe9cc44e5, __VMLINUX_SYMBOL_STR(rds_conn_path_drop) },
	{ 0x5d0b0349, __VMLINUX_SYMBOL_STR(tcp_done) },
	{ 0xc71cd3bb, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xa30e562a, __VMLINUX_SYMBOL_STR(rds_inc_path_init) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x50cbe7b3, __VMLINUX_SYMBOL_STR(rds_stats) },
	{ 0xa22c9f04, __VMLINUX_SYMBOL_STR(___might_sleep) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xf21397ce, __VMLINUX_SYMBOL_STR(rds_conn_create) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x438a1873, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3dd6560c, __VMLINUX_SYMBOL_STR(rds_recv_incoming) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xeb49cfff, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0xe440ee5a, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xee559fe0, __VMLINUX_SYMBOL_STR(rds_connect_path_complete) },
	{ 0x7a156c4, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x16a0b68, __VMLINUX_SYMBOL_STR(pskb_extract) },
	{ 0x8ffc438c, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xacf4269a, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0x4755c8ed, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x16624d6e, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xd573380d, __VMLINUX_SYMBOL_STR(rds_info_register_func) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x72bfbc53, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa3a95f99, __VMLINUX_SYMBOL_STR(rds_inc_put) },
	{ 0x7bc62829, __VMLINUX_SYMBOL_STR(rds_stats_info_copy) },
	{ 0xc2dab779, __VMLINUX_SYMBOL_STR(rds_info_copy) },
	{ 0x65634411, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x359f3c25, __VMLINUX_SYMBOL_STR(rds_send_path_drop_acked) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x965e203e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x20417053, __VMLINUX_SYMBOL_STR(rds_conn_destroy) },
	{ 0xd3b87d6b, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xde48538b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xa467af, __VMLINUX_SYMBOL_STR(rds_wq) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2989a348, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd7ce2481, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x8bd0a3fd, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xe11f3cbc, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x1fcf4d4b, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x436a370d, __VMLINUX_SYMBOL_STR(rds_info_deregister_func) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x3117fa42, __VMLINUX_SYMBOL_STR(rds_trans_unregister) },
	{ 0x85061b76, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x6cf4fbd6, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x8a190ea5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x86c9f36c, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0x24497b9a, __VMLINUX_SYMBOL_STR(rds_send_path_reset) },
	{ 0x99e3769, __VMLINUX_SYMBOL_STR(rds_cong_map_updated) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rds";

