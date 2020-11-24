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
	{ 0x3466c6bc, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x87258d3c, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x16909174, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x279578a5, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfb5dc896, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xb33508c6, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xa590e1d0, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0xac948da6, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbbb12c35, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xa76353e5, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xa32096a4, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xcf4f4d1c, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xf24ebcd4, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x141efa7c, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xee528fff, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x2b170bdb, __VMLINUX_SYMBOL_STR(register_md_personality) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

