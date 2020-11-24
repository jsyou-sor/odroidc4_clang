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
	{ 0x560f066, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x47bffea2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x20d7a862, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe963b912, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x639f0940, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x486aad1a, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xc4c4fd7c, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xeb5daefc, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x637ae1d0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcf159530, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x78eaa20, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xdae056f4, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9f6b70cf, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x1cde0400, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x164dd20e, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbded90fd, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0x998b487b, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x2d840ce9, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0x22217c08, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

