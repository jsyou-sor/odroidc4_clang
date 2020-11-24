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
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x54534b69, __VMLINUX_SYMBOL_STR(nci_req_complete) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x44f77388, __VMLINUX_SYMBOL_STR(nci_core_conn_close) },
	{ 0xd0bd2437, __VMLINUX_SYMBOL_STR(nci_recv_frame) },
	{ 0xcd5c9fc5, __VMLINUX_SYMBOL_STR(nci_send_data) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xaa2a92fb, __VMLINUX_SYMBOL_STR(nci_core_init) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x89c6a24b, __VMLINUX_SYMBOL_STR(nci_unregister_device) },
	{ 0xac95992d, __VMLINUX_SYMBOL_STR(nci_core_conn_create) },
	{ 0xc6e77f45, __VMLINUX_SYMBOL_STR(nci_prop_cmd) },
	{ 0x62257e90, __VMLINUX_SYMBOL_STR(nci_core_reset) },
	{ 0x9468833f, __VMLINUX_SYMBOL_STR(nci_core_cmd) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc7c4e17d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x22a01bf0, __VMLINUX_SYMBOL_STR(nci_register_device) },
	{ 0xddb0cb01, __VMLINUX_SYMBOL_STR(nci_get_conn_info_by_dest_type_params) },
	{ 0x6c049048, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x769f5127, __VMLINUX_SYMBOL_STR(nci_allocate_device) },
	{ 0x9a914756, __VMLINUX_SYMBOL_STR(nci_free_device) },
	{ 0xcb8912ee, __VMLINUX_SYMBOL_STR(nci_conn_max_data_pkt_payload_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nci";

