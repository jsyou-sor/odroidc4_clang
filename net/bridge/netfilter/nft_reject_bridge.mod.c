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
	{ 0xa2db3c7f, __VMLINUX_SYMBOL_STR(nft_reject_policy) },
	{ 0xdd7f7b11, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xf8f5982b, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x4d65cbd5, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0x96816e87, __VMLINUX_SYMBOL_STR(pskb_trim_rcsum_slow) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1ec6f970, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xe48adc81, __VMLINUX_SYMBOL_STR(nft_chain_validate_hooks) },
	{ 0x98ab764, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x687a4af7, __VMLINUX_SYMBOL_STR(br_forward) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x55286272, __VMLINUX_SYMBOL_STR(nf_reject_ip6_tcphdr_put) },
	{ 0x18fdf603, __VMLINUX_SYMBOL_STR(nf_reject_ip6hdr_put) },
	{ 0x752757a7, __VMLINUX_SYMBOL_STR(nf_reject_ip6_tcphdr_get) },
	{ 0xe8cdab4e, __VMLINUX_SYMBOL_STR(nft_reject_icmpv6_code) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xdb49f016, __VMLINUX_SYMBOL_STR(nf_reject_ip_tcphdr_put) },
	{ 0x1ddf9eac, __VMLINUX_SYMBOL_STR(nf_reject_iphdr_put) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdc15d1e0, __VMLINUX_SYMBOL_STR(nf_reject_ip_tcphdr_get) },
	{ 0xddf15889, __VMLINUX_SYMBOL_STR(nft_reject_icmp_code) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xc3c2e8b, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0xaf9a1071, __VMLINUX_SYMBOL_STR(nft_register_expr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_reject,ipv6,nf_tables,bridge,nf_reject_ipv6,nf_reject_ipv4";

