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
	{ 0x9c6ad0c, __VMLINUX_SYMBOL_STR(store_sampling_rate) },
	{ 0x4640facc, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_limits) },
	{ 0xd2e0928, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_stop) },
	{ 0x5214135f, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_start) },
	{ 0x804e2d5b, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_exit) },
	{ 0x3fb0b5dd, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_init) },
	{ 0xa6daa78b, __VMLINUX_SYMBOL_STR(gov_update_cpu_data) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8dc648b0, __VMLINUX_SYMBOL_STR(__cpufreq_driver_target) },
	{ 0x9c1f88ee, __VMLINUX_SYMBOL_STR(dbs_update) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7791dc02, __VMLINUX_SYMBOL_STR(cpufreq_unregister_governor) },
	{ 0xe6d35a96, __VMLINUX_SYMBOL_STR(cpufreq_register_governor) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

