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
	{ 0x8836196f, __VMLINUX_SYMBOL_STR(team_modeop_port_change_dev_addr) },
	{ 0xce5eb485, __VMLINUX_SYMBOL_STR(team_modeop_port_enter) },
	{ 0xecea36c3, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xdbf936a7, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xe29376a8, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xb14db3e6, __VMLINUX_SYMBOL_STR(team_mode_unregister) },
	{ 0x6c79499a, __VMLINUX_SYMBOL_STR(team_mode_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=team";

