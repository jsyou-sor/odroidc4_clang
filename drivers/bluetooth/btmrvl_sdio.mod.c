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
	{ 0xd28294dd, __VMLINUX_SYMBOL_STR(hci_resume_dev) },
	{ 0xc724a06d, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x5d057a1b, __VMLINUX_SYMBOL_STR(btmrvl_enable_hs) },
	{ 0x25133f0d, __VMLINUX_SYMBOL_STR(hci_suspend_dev) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xde3ce907, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x91a762dd, __VMLINUX_SYMBOL_STR(btmrvl_interrupt) },
	{ 0x16a9a1b3, __VMLINUX_SYMBOL_STR(dev_coredumpv) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xac570aa6, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xcbe9be89, __VMLINUX_SYMBOL_STR(btmrvl_process_event) },
	{ 0xa57fd2d, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0xad0a5663, __VMLINUX_SYMBOL_STR(btmrvl_check_evtpkt) },
	{ 0x809fc424, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x6af8da4f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc412b8d2, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1a995182, __VMLINUX_SYMBOL_STR(btmrvl_remove_card) },
	{ 0x4163025f, __VMLINUX_SYMBOL_STR(btmrvl_send_module_cfg_cmd) },
	{ 0x6c049048, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5608ae0c, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc7c4e17d, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x3d074495, __VMLINUX_SYMBOL_STR(btmrvl_register_hdev) },
	{ 0x856de2e, __VMLINUX_SYMBOL_STR(btmrvl_add_card) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x193b9bd9, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x26b2eaa2, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x832b9928, __VMLINUX_SYMBOL_STR(of_match_node) },
	{ 0xfe437586, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x5a7b6544, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x5172cf8, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x1e522756, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x3244be67, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xfb343c28, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x3b32fcd4, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x3c8f1ada, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xdda0ce1b, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x8519564b, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x93cb0338, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,btmrvl";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "1B3452A70B280802F9A4C28");
