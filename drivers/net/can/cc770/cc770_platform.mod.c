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
	{ 0x579ccb4, __VMLINUX_SYMBOL_STR(unregister_cc770dev) },
	{ 0x8d15114a, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x45a55ec8, __VMLINUX_SYMBOL_STR(__iounmap) },
	{ 0x899cba3a, __VMLINUX_SYMBOL_STR(free_cc770dev) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x855f4e33, __VMLINUX_SYMBOL_STR(register_cc770dev) },
	{ 0xf0988114, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xd42fbd71, __VMLINUX_SYMBOL_STR(alloc_cc770dev) },
	{ 0xf24b3dfe, __VMLINUX_SYMBOL_STR(__ioremap) },
	{ 0xe6be8b5, __VMLINUX_SYMBOL_STR(cpu_hwcaps) },
	{ 0x50f3f6da, __VMLINUX_SYMBOL_STR(cpu_hwcap_keys) },
	{ 0xb38ee7b4, __VMLINUX_SYMBOL_STR(arm64_const_caps_ready) },
	{ 0x5e25804, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xc364ae22, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x7e9cca0b, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x76c51871, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x8c12880d, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7bd5ec57, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cc770";

MODULE_ALIAS("of:N*T*Cbosch,cc770");
MODULE_ALIAS("of:N*T*Cbosch,cc770C*");
MODULE_ALIAS("of:N*T*Cintc,82527");
MODULE_ALIAS("of:N*T*Cintc,82527C*");
