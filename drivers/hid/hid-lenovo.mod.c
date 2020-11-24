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
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xad9e0ba5, __VMLINUX_SYMBOL_STR(__hid_request) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x1a779f26, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xeffa9c96, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xb7a763fa, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xa60e1793, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0xa3966446, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x985f9294, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc5752e56, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xe1ffff8, __VMLINUX_SYMBOL_STR(hid_validate_values) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc1338258, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x4b30b987, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x56503d4a, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x4e32da5c, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v000017EFp00006009");
MODULE_ALIAS("hid:b0003g*v000017EFp00006047");
MODULE_ALIAS("hid:b0005g*v000017EFp00006048");
MODULE_ALIAS("hid:b0003g*v000017EFp00006067");