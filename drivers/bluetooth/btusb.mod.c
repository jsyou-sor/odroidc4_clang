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
	{ 0x8c7a884f, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xe36b2284, __VMLINUX_SYMBOL_STR(hci_recv_diag) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3251f9ea, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x2e6197af, __VMLINUX_SYMBOL_STR(btintel_set_event_mask) },
	{ 0x1f31338c, __VMLINUX_SYMBOL_STR(btintel_load_ddc_config) },
	{ 0xe7822b34, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_timeout) },
	{ 0x44bae227, __VMLINUX_SYMBOL_STR(bit_wait_timeout) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xdf08f2c8, __VMLINUX_SYMBOL_STR(btintel_secure_send) },
	{ 0x67ef25c0, __VMLINUX_SYMBOL_STR(btintel_version_info) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x4f3d54c4, __VMLINUX_SYMBOL_STR(btintel_exit_mfg) },
	{ 0x263c3152, __VMLINUX_SYMBOL_STR(bcmp) },
	{ 0x5f74accc, __VMLINUX_SYMBOL_STR(__hci_cmd_sync_ev) },
	{ 0x6c049048, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xf42236bf, __VMLINUX_SYMBOL_STR(btintel_enter_mfg) },
	{ 0xc7c4e17d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdb73ae85, __VMLINUX_SYMBOL_STR(btintel_check_bdaddr) },
	{ 0x23f52888, __VMLINUX_SYMBOL_STR(btintel_set_event_mask_mfg) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x83f6c9ca, __VMLINUX_SYMBOL_STR(btintel_read_version) },
	{ 0xfb142b08, __VMLINUX_SYMBOL_STR(__hci_cmd_sync) },
	{ 0x6735a700, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x5b1f65b9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xf888adca, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x609c8d61, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0xb3898ecb, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0xc8d43393, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x5a1e4d3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x3e953d39, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0xd2ab202f, __VMLINUX_SYMBOL_STR(usb_scuttle_anchored_urbs) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x9a923583, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x2564aa67, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x7906f8cb, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x1782cc98, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x7aa7ebb8, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0x7199f495, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x27cbce6f, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x9d942409, __VMLINUX_SYMBOL_STR(btrtl_setup_realtek) },
	{ 0x3846b329, __VMLINUX_SYMBOL_STR(btintel_set_diag) },
	{ 0x94fd1989, __VMLINUX_SYMBOL_STR(btintel_hw_error) },
	{ 0x1be52ce, __VMLINUX_SYMBOL_STR(btintel_set_bdaddr) },
	{ 0xfa922867, __VMLINUX_SYMBOL_STR(btintel_set_diag_mfg) },
	{ 0xccf97293, __VMLINUX_SYMBOL_STR(btbcm_setup_apple) },
	{ 0x6986e2cd, __VMLINUX_SYMBOL_STR(btbcm_set_bdaddr) },
	{ 0x7704b5ab, __VMLINUX_SYMBOL_STR(btbcm_setup_patchram) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xa9469d4d, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x26f7e566, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0xa57fd2d, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x76edfa04, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xcf64c36f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2f24cc8c, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,btintel,btrtl,btbcm";

MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105BpE065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "282D849863ADE6A0C479B3A");
