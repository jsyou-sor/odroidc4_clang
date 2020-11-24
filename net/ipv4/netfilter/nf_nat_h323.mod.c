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
	{ 0x5c117c75, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0x8a190ea5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x49020462, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0xc3775132, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xa0e8972e, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x950d7e01, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x1a96ace0, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0x305a42e4, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xb261ef06, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x9db0f29d, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x5da1b478, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0xd05d5ace, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0x9c0fbdb6, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0x993352c6, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0xaa0cbf8e, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0x45081435, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0xea6af150, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0x4106f0ef, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0xef6266cf, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack,nf_conntrack_h323";

