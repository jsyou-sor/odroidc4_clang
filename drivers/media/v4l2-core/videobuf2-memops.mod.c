#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xa1dee5f1, __VMLINUX_SYMBOL_STR(frame_vector_create) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xff903b43, __VMLINUX_SYMBOL_STR(frame_vector_destroy) },
	{ 0x655611bf, __VMLINUX_SYMBOL_STR(get_vaddr_frames) },
	{ 0x568f2f3f, __VMLINUX_SYMBOL_STR(put_vaddr_frames) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

