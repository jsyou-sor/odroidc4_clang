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
	{ 0x2315967d, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0x7e2180cd, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf953d269, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xb9c3f7f5, __VMLINUX_SYMBOL_STR(iov_iter_npages) },
	{ 0xdb70ac43, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x66026022, __VMLINUX_SYMBOL_STR(macvlan_dellink) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xceb49aaa, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0xe7b84118, __VMLINUX_SYMBOL_STR(skb_copy_datagram_from_iter) },
	{ 0xe8983bea, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xf7e266c6, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xf8184c0a, __VMLINUX_SYMBOL_STR(macvlan_common_newlink) },
	{ 0x5072e533, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x25d8cef2, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x692ad9b, __VMLINUX_SYMBOL_STR(sock_alloc_send_pskb) },
	{ 0xf77ddff9, __VMLINUX_SYMBOL_STR(macvlan_link_register) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xe1ca09dc, __VMLINUX_SYMBOL_STR(skb_partial_csum_set) },
	{ 0xf69dd852, __VMLINUX_SYMBOL_STR(kfree_skb_list) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x98ab764, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe55ecd02, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x3b8c8eea, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x2a1c095f, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x6091644e, __VMLINUX_SYMBOL_STR(flow_keys_dissector) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x8ffc438c, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe9e22f03, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbe082271, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x4d553bce, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x994c4c15, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xa43d662, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x8fd836dd, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x98c07fdb, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x2e974295, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xe166f7a2, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xcffd14db, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x1fd1c969, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xe0930fab, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x60f0c53, __VMLINUX_SYMBOL_STR(macvlan_common_setup) },
	{ 0xd34f8f8e, __VMLINUX_SYMBOL_STR(net_ns_type_operations) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x50bde9dc, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x1cbbfc90, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1bca2a90, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xd55b0109, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1108e82c, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x19820f9, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xdbf936a7, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1d01532b, __VMLINUX_SYMBOL_STR(zerocopy_sg_from_iter) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=macvlan";

