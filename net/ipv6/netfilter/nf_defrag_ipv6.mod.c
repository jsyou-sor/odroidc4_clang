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
	{ 0x74163737, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xb42a1c83, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0x96816e87, __VMLINUX_SYMBOL_STR(pskb_trim_rcsum_slow) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x21458145, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xfd99623a, __VMLINUX_SYMBOL_STR(ip_frag_ecn_table) },
	{ 0x3ad9298, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xc4fdc614, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0xf4794f8f, __VMLINUX_SYMBOL_STR(inet_frag_reasm_prepare) },
	{ 0x98ab764, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x7a156c4, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0xb93c4e20, __VMLINUX_SYMBOL_STR(proc_doulongvec_minmax) },
	{ 0x8befa77c, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x8bf26212, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0xd2b532a1, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x965e203e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x5e88dc7c, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x66e5b044, __VMLINUX_SYMBOL_STR(inet_frag_reasm_finish) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1798d2c, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x2989a348, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4f16d27e, __VMLINUX_SYMBOL_STR(rhashtable_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd53a35f9, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xf9390430, __VMLINUX_SYMBOL_STR(inet_frag_pull_head) },
	{ 0xe9b3f03, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0xa6619543, __VMLINUX_SYMBOL_STR(inet_frag_queue_insert) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x6cf4fbd6, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0xd9468197, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x8a190ea5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

