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
	{ 0xa3477533, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x9a02c828, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xcf87ad4b, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x5bec9112, __VMLINUX_SYMBOL_STR(atrtr_get_dev) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x45507cf1, __VMLINUX_SYMBOL_STR(aarp_send_ddp) },
	{ 0xef5fa41c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x98f60387, __VMLINUX_SYMBOL_STR(atalk_find_dev_addr) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8870b56b, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf315ed53, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x4ee61d4b, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x623eb197, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=appletalk";

