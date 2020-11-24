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
	{ 0xf8f5982b, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x8a190ea5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeb37101c, __VMLINUX_SYMBOL_STR(audit_log_end) },
	{ 0xe7a81967, __VMLINUX_SYMBOL_STR(audit_log_secctx) },
	{ 0xd0f36f0d, __VMLINUX_SYMBOL_STR(audit_log_format) },
	{ 0x64ef43ec, __VMLINUX_SYMBOL_STR(audit_log_start) },
	{ 0x24457174, __VMLINUX_SYMBOL_STR(audit_enabled) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x27954ff3, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xee1091e, __VMLINUX_SYMBOL_STR(xt_register_targets) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";

