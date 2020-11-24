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
	{ 0x232f8069, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0xa9726b8, __VMLINUX_SYMBOL_STR(sock_diag_destroy) },
	{ 0x23db286f, __VMLINUX_SYMBOL_STR(inet_diag_find_one_icsk) },
	{ 0x55034e39, __VMLINUX_SYMBOL_STR(tcp_get_info) },
	{ 0x8b564a2c, __VMLINUX_SYMBOL_STR(inet_diag_dump_one_icsk) },
	{ 0x2cef6ee7, __VMLINUX_SYMBOL_STR(inet_diag_dump_icsk) },
	{ 0x475f2225, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x1a2ca5f9, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0xfe62189c, __VMLINUX_SYMBOL_STR(inet_diag_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";

