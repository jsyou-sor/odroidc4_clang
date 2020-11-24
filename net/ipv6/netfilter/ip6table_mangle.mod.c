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
	{ 0x9d1ccee6, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
	{ 0x8abd7c86, __VMLINUX_SYMBOL_STR(ip6_route_me_harder) },
	{ 0x1f87ff14, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7a156c4, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd03afa59, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0x6a6f730f, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0x965e203e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2989a348, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x164fa0a2, __VMLINUX_SYMBOL_STR(xt_hook_ops_alloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tables,ipv6,x_tables";

