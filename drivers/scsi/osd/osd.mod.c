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
	{ 0x1fd150e9, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x2315967d, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf953d269, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x5896758, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xc17edb1, __VMLINUX_SYMBOL_STR(osd_sec_init_nosec_doall_caps) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb5b751fa, __VMLINUX_SYMBOL_STR(osd_dev_fini) },
	{ 0xfb1bac03, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe9e22f03, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xec745ac5, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x586f0e4a, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x8fd836dd, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xc79d81bb, __VMLINUX_SYMBOL_STR(osd_dev_init) },
	{ 0xed696697, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xb2923978, __VMLINUX_SYMBOL_STR(osd_auto_detect_ver) },
	{ 0xcffd14db, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x10e0aea0, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xf9386e4e, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x6f67defb, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xe8da5729, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xdc5efdda, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6c635d68, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x274642dc, __VMLINUX_SYMBOL_STR(ida_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1d194cee, __VMLINUX_SYMBOL_STR(ida_pre_get) },
	{ 0x7d8c8df2, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x4119e4af, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xef975820, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x8618c8aa, __VMLINUX_SYMBOL_STR(ida_get_new_above) },
	{ 0x263c3152, __VMLINUX_SYMBOL_STR(bcmp) },
	{ 0xe55ac83, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd";

