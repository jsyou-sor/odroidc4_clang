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
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x96816e87, __VMLINUX_SYMBOL_STR(pskb_trim_rcsum_slow) },
	{ 0x21458145, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x8af18728, __VMLINUX_SYMBOL_STR(ip_do_fragment) },
	{ 0x462c660f, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x3ad9298, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2e897218, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xddf1148c, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xf51bf88b, __VMLINUX_SYMBOL_STR(nf_hooks_needed) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x5eb773dc, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0x98ab764, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x7a156c4, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x55ca1a89, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x40e9fd6, __VMLINUX_SYMBOL_STR(nf_unregister_net_hooks) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x965e203e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf3d9db4f, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0x41d1a65c, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0x28acc02e, __VMLINUX_SYMBOL_STR(nf_ipv6_ops) },
	{ 0x1bca7d7e, __VMLINUX_SYMBOL_STR(nf_register_net_hooks) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x2989a348, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xe50c61dc, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa99f007b, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0xb87ac202, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd043b98a, __VMLINUX_SYMBOL_STR(nf_br_ops) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x797e53ff, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x6cf4fbd6, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge";

