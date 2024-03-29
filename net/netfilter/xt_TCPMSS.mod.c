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
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe50c61dc, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x74b0277e, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x3ad9298, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x3c011a44, __VMLINUX_SYMBOL_STR(nf_afinfo) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x4fafad0, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xf8f5982b, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x27954ff3, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xee1091e, __VMLINUX_SYMBOL_STR(xt_register_targets) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";

