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
	{ 0xf301b8ce, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x967d49fa, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x2dd3fe27, __VMLINUX_SYMBOL_STR(ip_vs_conn_in_get) },
	{ 0xd831a1a2, __VMLINUX_SYMBOL_STR(ip_vs_proto_name) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xb2899650, __VMLINUX_SYMBOL_STR(ip_vs_conn_put) },
	{ 0x224c8e59, __VMLINUX_SYMBOL_STR(ip_vs_tcp_conn_listen) },
	{ 0x5df3dbf9, __VMLINUX_SYMBOL_STR(ip_vs_nfct_expect_related) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xc3775132, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd0722f9d, __VMLINUX_SYMBOL_STR(ip_vs_conn_new) },
	{ 0x8581aa5f, __VMLINUX_SYMBOL_STR(ip_vs_conn_out_get) },
	{ 0x7176a134, __VMLINUX_SYMBOL_STR(ip_vs_get_debug_level) },
	{ 0x4fafad0, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xb3306d6a, __VMLINUX_SYMBOL_STR(unregister_ip_vs_app) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x83f4bd21, __VMLINUX_SYMBOL_STR(register_ip_vs_app_inc) },
	{ 0x70827af6, __VMLINUX_SYMBOL_STR(register_ip_vs_app) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7a156c4, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x2989a348, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_vs,nf_nat";

