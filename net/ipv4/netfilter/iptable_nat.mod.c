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
	{ 0xfaee72e1, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x82cab0e5, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_fn) },
	{ 0x612ec4e8, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_local_fn) },
	{ 0x69b7f36b, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_out) },
	{ 0x26923d18, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_in) },
	{ 0x8bf88ff3, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7a156c4, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfd4efb93, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0xb03f187e, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0x965e203e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2989a348, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tables,nf_nat_ipv4";

