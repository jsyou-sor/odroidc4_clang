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
	{ 0xe6be23f6, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xc51b0803, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x8023371c, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xb7a763fa, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x649f7bf2, __VMLINUX_SYMBOL_STR(firmware_kobj) },
	{ 0xc5752e56, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x2de39ca9, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6e90420f, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

