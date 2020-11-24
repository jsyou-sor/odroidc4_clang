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
	{ 0x88abe7d6, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0x5c117c75, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xe6d8eb92, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0x950d7e01, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xa0e8972e, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x8b419f49, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0x32f30d6a, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x4fafad0, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x6c71344f, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0x49020462, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0xc3775132, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x10fbc6b0, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0x97f66d5d, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0xec9ece83, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xb261ef06, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x9db0f29d, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x77f082bf, __VMLINUX_SYMBOL_STR(nf_nat_sip_hooks) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_sip,nf_nat,nf_conntrack";

