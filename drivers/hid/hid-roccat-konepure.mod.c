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
	{ 0x8c4181ec, __VMLINUX_SYMBOL_STR(roccat_report_event) },
	{ 0x2f622ea1, __VMLINUX_SYMBOL_STR(roccat_disconnect) },
	{ 0xe412bee0, __VMLINUX_SYMBOL_STR(roccat_connect) },
	{ 0xa60e1793, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xacdd8e47, __VMLINUX_SYMBOL_STR(roccat_common2_device_init_struct) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc1338258, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x4b30b987, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x8c77ae8f, __VMLINUX_SYMBOL_STR(roccat_common2_sysfs_write) },
	{ 0x6793eb20, __VMLINUX_SYMBOL_STR(roccat_common2_sysfs_read) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x56503d4a, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x910dd957, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x4e32da5c, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x3e11ced0, __VMLINUX_SYMBOL_STR(__class_create) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-roccat,hid-roccat-common";

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002DBE");
MODULE_ALIAS("hid:b0003g*v00001E7Dp00002DB4");
