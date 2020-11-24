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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x6fe84350, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xfb836368, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xdff6251c, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x3494221b, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x85d3e91b, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xc2aa20a9, __VMLINUX_SYMBOL_STR(nf_conntrack_set_hashsize) },
	{ 0x3d03ef82, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xcef2da9, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp4) },
	{ 0x1ec6f970, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xc3ca734d, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0x20a0705c, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x7a156c4, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x4503d65f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0xa6094c6a, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4755c8ed, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x6846e653, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xe341e557, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x614b7c6c, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0x5e88dc7c, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xf8690989, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0xd0e6ae89, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x63c7f663, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0x2989a348, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x283fbf8f, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0xd53a35f9, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x2f40aee, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0x6e3197fc, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp4) },
	{ 0xebf90b7f, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0xd9468197, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x8a190ea5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x9f1fce75, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0x1360e81e, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0xac7b25c8, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";

