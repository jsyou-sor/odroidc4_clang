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
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8b2b39e7, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1823b253, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x9abaf14b, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0x48d5e65f, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xfa613bc8, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x3fe2ccbe, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x16909174, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0xe0c93b91, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x499fc659, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0x87258d3c, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x91f5c2d9, __VMLINUX_SYMBOL_STR(dm_disk) },
	{ 0xfe8f4f03, __VMLINUX_SYMBOL_STR(dm_table_get_md) },
	{ 0xf54745d7, __VMLINUX_SYMBOL_STR(md_update_sb) },
	{ 0x71bfd13, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0x8db06fdb, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0xab3cf449, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0x279578a5, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x77b5f2d4, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0x2f2c61ec, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x766d9ec8, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x5c2ac927, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xf52b30a0, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x1ee6cd4c, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7fdec6df, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0xe0c515aa, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x12df8121, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xb2687250, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0xde938f48, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x46feb099, __VMLINUX_SYMBOL_STR(dm_read_arg) },
	{ 0x7deff673, __VMLINUX_SYMBOL_STR(dm_consume_args) },
	{ 0xe04f7caa, __VMLINUX_SYMBOL_STR(dm_read_arg_group) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x5eb24829, __VMLINUX_SYMBOL_STR(dm_shift_arg) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xfc8fd425, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xcb438a7d, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod,dm-mod,raid456";

