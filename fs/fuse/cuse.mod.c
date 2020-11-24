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
	{ 0x3ce74fcc, __VMLINUX_SYMBOL_STR(fuse_file_poll) },
	{ 0x586f0e4a, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xfa87db24, __VMLINUX_SYMBOL_STR(fuse_sync_release) },
	{ 0x88c5676d, __VMLINUX_SYMBOL_STR(fuse_do_open) },
	{ 0xf788ce31, __VMLINUX_SYMBOL_STR(fuse_conn_get) },
	{ 0x1f5e64b3, __VMLINUX_SYMBOL_STR(fuse_do_ioctl) },
	{ 0xaf754074, __VMLINUX_SYMBOL_STR(fuse_direct_io) },
	{ 0x8023371c, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xcffd14db, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xc0472b8e, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0xf9386e4e, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xf2462dab, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x5b76f3c9, __VMLINUX_SYMBOL_STR(fuse_abort_conn) },
	{ 0x4119e4af, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xc4a173a2, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x36e0775d, __VMLINUX_SYMBOL_STR(fuse_dev_release) },
	{ 0x2315967d, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x7d8c8df2, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf8153700, __VMLINUX_SYMBOL_STR(fuse_conn_put) },
	{ 0x33cff033, __VMLINUX_SYMBOL_STR(fuse_dev_free) },
	{ 0x748e8735, __VMLINUX_SYMBOL_STR(fuse_put_request) },
	{ 0x6f7d8599, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xe50c3fb8, __VMLINUX_SYMBOL_STR(fuse_request_send_background) },
	{ 0x8fff2b9a, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xb9197e70, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xeae2d4ee, __VMLINUX_SYMBOL_STR(fuse_get_req_for_background) },
	{ 0x207bf069, __VMLINUX_SYMBOL_STR(fuse_dev_alloc) },
	{ 0xc323d7be, __VMLINUX_SYMBOL_STR(fuse_conn_init) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xe9bd654c, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x910dd957, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x6ea1602e, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x3e11ced0, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe3211256, __VMLINUX_SYMBOL_STR(fuse_dev_operations) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fuse";

