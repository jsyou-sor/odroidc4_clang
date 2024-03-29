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
	{ 0xf40f1d62, __VMLINUX_SYMBOL_STR(ife_validate_meta_u16) },
	{ 0x61ca3940, __VMLINUX_SYMBOL_STR(ife_release_meta_gen) },
	{ 0x28cd7503, __VMLINUX_SYMBOL_STR(ife_alloc_meta_u16) },
	{ 0x475657d9, __VMLINUX_SYMBOL_STR(ife_get_meta_u16) },
	{ 0x12a84f42, __VMLINUX_SYMBOL_STR(ife_encode_meta_u16) },
	{ 0xc7649612, __VMLINUX_SYMBOL_STR(ife_check_meta_u16) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xa3930a7b, __VMLINUX_SYMBOL_STR(unregister_ife_op) },
	{ 0x1f3806b0, __VMLINUX_SYMBOL_STR(register_ife_op) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=act_ife";

