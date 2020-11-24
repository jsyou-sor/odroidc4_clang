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
	{ 0xc3ca734d, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0x4c7d2a0d, __VMLINUX_SYMBOL_STR(nf_log_unset) },
	{ 0x7f77a132, __VMLINUX_SYMBOL_STR(nf_log_set) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xa89956e2, __VMLINUX_SYMBOL_STR(nf_log_unregister) },
	{ 0x7a156c4, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xd4e4865f, __VMLINUX_SYMBOL_STR(nf_log_register) },
	{ 0x2989a348, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x39e61495, __VMLINUX_SYMBOL_STR(nf_logger_request_module) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

