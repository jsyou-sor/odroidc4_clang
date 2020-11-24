#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x5c9da02c, __VMLINUX_SYMBOL_STR(nfc_register_device) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x6d356209, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd9befbb8, __VMLINUX_SYMBOL_STR(nfc_dep_link_is_up) },
	{ 0xca9aae17, __VMLINUX_SYMBOL_STR(nfc_targets_found) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a4de076, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x72b83c3f, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe2d6ea5a, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0x981dae68, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0x9c3d85e6, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf9386e4e, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x13fb6bf4, __VMLINUX_SYMBOL_STR(nfc_alloc_recv_skb) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3201efa2, __VMLINUX_SYMBOL_STR(__pskb_copy_fclone) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe7d6ec8b, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x1a703ba1, __VMLINUX_SYMBOL_STR(crc_ccitt) },
	{ 0x223ecf2e, __VMLINUX_SYMBOL_STR(nfc_allocate_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7e4b807d, __VMLINUX_SYMBOL_STR(nfc_unregister_device) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfc";

