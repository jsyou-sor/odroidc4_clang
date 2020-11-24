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
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x2049a5a9, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xae240fa9, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x605cb43c, __VMLINUX_SYMBOL_STR(ip_md_tunnel_xmit) },
	{ 0x62b807b7, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x296e321c, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x6c5492b3, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x7492cfd3, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x40b3767c, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x7c46ad2d, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xb11a56a7, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x9cf90823, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x85f8ac31, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0xc00bd840, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe30ec0f2, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xc123dd27, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xf712ea20, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x727a909e, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x271f8cf4, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x2e974295, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xb87cd7ff, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x4bf2440, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0xd2999508, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x4c1211e4, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x96542273, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";

