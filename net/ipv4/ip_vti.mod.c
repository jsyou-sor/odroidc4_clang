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
	{ 0x6b8cd02c, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x10571c5e, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xbcef413b, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x32ff99a3, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x34e9f10, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xa74292fe, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x6c5492b3, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x7492cfd3, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x7c46ad2d, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xb11a56a7, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x85f8ac31, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0xf58efa4c, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x79805128, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xe30ec0f2, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xc123dd27, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xf4a27bab, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xf712ea20, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xc00bd840, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x727a909e, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x271f8cf4, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x2049a5a9, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x74163737, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x915c945d, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x56b90780, __VMLINUX_SYMBOL_STR(__icmp_send) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3ad9298, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x11bf7489, __VMLINUX_SYMBOL_STR(ip6_route_output_flags) },
	{ 0x77e7ca20, __VMLINUX_SYMBOL_STR(__ip_route_output_key_hash) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xbdfda82d, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0xa16016b7, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0x296e321c, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xef60486, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x2e974295, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xb87cd7ff, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xe0945577, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x4bf2440, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0xd2999508, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x4c1211e4, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0xa9564732, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x96542273, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,ipv6,tunnel4";

