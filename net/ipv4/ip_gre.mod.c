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
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x96542273, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x10571c5e, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x6b8cd02c, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x3ad9298, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x9cf90823, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xc123dd27, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xf712ea20, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x6c400812, __VMLINUX_SYMBOL_STR(__ip_tunnel_change_mtu) },
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xbb67bcac, __VMLINUX_SYMBOL_STR(dst_cache_get_ip4) },
	{ 0x56b90780, __VMLINUX_SYMBOL_STR(__icmp_send) },
	{ 0xae240fa9, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x24f5de0e, __VMLINUX_SYMBOL_STR(inetdev_by_index) },
	{ 0x85f8ac31, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0x7c46ad2d, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xa74292fe, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5d41c070, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x3642bf5d, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0x7492cfd3, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb87cd7ff, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x32ff99a3, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0xf315ed53, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xa3eb2d0c, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xcadfb5b, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x727a909e, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x296e321c, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x34e9f10, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x2e974295, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x2049a5a9, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x6c5492b3, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x64e5e791, __VMLINUX_SYMBOL_STR(rtnl_configure_link) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe30ec0f2, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x3e3ffaab, __VMLINUX_SYMBOL_STR(ip_mc_inc_group) },
	{ 0xe50c61dc, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x7cbe2ec5, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x271f8cf4, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x62b807b7, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xb87ac202, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x8d49e132, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0x9a02c828, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x4811fc73, __VMLINUX_SYMBOL_STR(ip6_err_gen_icmpv6_unreach) },
	{ 0xd2999508, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xc84d4c75, __VMLINUX_SYMBOL_STR(dst_cache_set_ip4) },
	{ 0x40b3767c, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xbcef413b, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xcf87ad4b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xf2e3008d, __VMLINUX_SYMBOL_STR(ip_mc_dec_group) },
	{ 0x79cde9f8, __VMLINUX_SYMBOL_STR(gre_parse_header) },
	{ 0xb11a56a7, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre,ipv6";

