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
	{ 0x7bafa862, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x6dbd491f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x1fcf4d4b, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xe11f3cbc, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xaa7c1a41, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x1c1d9821, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe01d434, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0xdcefae32, __VMLINUX_SYMBOL_STR(l2tp_session_get_nth) },
	{ 0x4e634ebc, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x60ffa429, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x88178a59, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x5c26ed29, __VMLINUX_SYMBOL_STR(get_net_ns_by_pid) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xb1dc66ac, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x148ef06a, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x86fc946d, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "5F5145D7BB3D87509E037C7");
