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
	{ 0xce8a1698, __VMLINUX_SYMBOL_STR(nf_ct_nat_ext_add) },
	{ 0x62c3574a, __VMLINUX_SYMBOL_STR(nf_ct_kill_acct) },
	{ 0x3ad9298, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x9647379d, __VMLINUX_SYMBOL_STR(nf_nat_used_tuple) },
	{ 0x8e7454bb, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0x74b0277e, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xd03c7700, __VMLINUX_SYMBOL_STR(secure_ipv4_port_ephemeral) },
	{ 0x1ec6f970, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0x5d41c070, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xd9bae4b, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_nlattr_to_range) },
	{ 0x85827a13, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xda52920e, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0x69ae94b0, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0xd25bc5d4, __VMLINUX_SYMBOL_STR(csum_tcpudp_nofold) },
	{ 0x9abe7046, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0x4fafad0, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xd2f4679e, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_unregister) },
	{ 0x2f1b5c33, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_register) },
	{ 0x87302d5b, __VMLINUX_SYMBOL_STR(__nf_nat_l4proto_find) },
	{ 0xc1010380, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack";
