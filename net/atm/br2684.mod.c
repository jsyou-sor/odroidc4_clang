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
	{ 0x9a02c828, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xa3477533, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x4e634ebc, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x7bafa862, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x6dbd491f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xd41fe818, __VMLINUX_SYMBOL_STR(_raw_read_unlock_irqrestore) },
	{ 0x2e7be112, __VMLINUX_SYMBOL_STR(_raw_read_lock_irqsave) },
	{ 0xcf87ad4b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xaa1212f1, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7cbe2ec5, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x64cb6866, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xb142af01, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x2dd6eb39, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x6dacc863, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc2b428b2, __VMLINUX_SYMBOL_STR(vcc_process_recv_queue) },
	{ 0xe820b269, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xe79667c2, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xc9fb6ea8, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4ee61d4b, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xf904b6cc, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xb70789e, __VMLINUX_SYMBOL_STR(__might_fault) },
	{ 0x294b7c01, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe7d4daac, __VMLINUX_SYMBOL_STR(seq_list_next) },
	{ 0xd702e480, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0xff1e9dd8, __VMLINUX_SYMBOL_STR(seq_list_start) },
	{ 0x7b6646bb, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x88178a59, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x71fd3b7, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x50c52151, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irq) },
	{ 0x2aa1ad41, __VMLINUX_SYMBOL_STR(_raw_write_lock_irq) },
	{ 0xf315ed53, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x8870b56b, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xcfb6a3da, __VMLINUX_SYMBOL_STR(unregister_atmdevice_notifier) },
	{ 0x253a4b00, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x7f9d6988, __VMLINUX_SYMBOL_STR(deregister_atm_ioctl) },
	{ 0xb09faf79, __VMLINUX_SYMBOL_STR(register_atmdevice_notifier) },
	{ 0x597a709d, __VMLINUX_SYMBOL_STR(register_atm_ioctl) },
	{ 0x73fabbc3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x4443d399, __VMLINUX_SYMBOL_STR(atm_proc_root) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm";

