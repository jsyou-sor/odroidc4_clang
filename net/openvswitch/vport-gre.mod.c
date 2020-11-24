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
	{ 0xdbf936a7, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xea133d9c, __VMLINUX_SYMBOL_STR(ovs_netdev_tunnel_destroy) },
	{ 0xfc35c909, __VMLINUX_SYMBOL_STR(rtnl_delete_link) },
	{ 0x4fff8ca0, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0xabfd1cce, __VMLINUX_SYMBOL_STR(ovs_netdev_link) },
	{ 0xec31b69d, __VMLINUX_SYMBOL_STR(ovs_vport_free) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xda1665d6, __VMLINUX_SYMBOL_STR(gretap_fb_dev_create) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x8b1ffac, __VMLINUX_SYMBOL_STR(ovs_vport_alloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x8ce7cedd, __VMLINUX_SYMBOL_STR(ovs_vport_ops_unregister) },
	{ 0xa8dd2c59, __VMLINUX_SYMBOL_STR(__ovs_vport_ops_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch,ip_gre";

