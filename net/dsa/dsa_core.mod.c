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
	{ 0xc37331cf, __VMLINUX_SYMBOL_STR(of_phy_is_fixed_link) },
	{ 0x36d127bb, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xebdddbbc, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0x3ceca080, __VMLINUX_SYMBOL_STR(of_mdio_find_bus) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xffe94337, __VMLINUX_SYMBOL_STR(hwmon_device_register_with_groups) },
	{ 0x2d4fc788, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x352877df, __VMLINUX_SYMBOL_STR(of_phy_deregister_fixed_link) },
	{ 0x260a3d21, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0xa6e7d606, __VMLINUX_SYMBOL_STR(of_property_read_u32_index) },
	{ 0x4c1734c6, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0x2032cea9, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xce895c8d, __VMLINUX_SYMBOL_STR(phy_resume) },
	{ 0x39426a8d, __VMLINUX_SYMBOL_STR(genphy_update_link) },
	{ 0xf1ca2404, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0xd8a808c7, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_setlink) },
	{ 0x583e225, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x8f036cec, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_dump) },
	{ 0x859212d0, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x59986e08, __VMLINUX_SYMBOL_STR(mdiobus_get_phy) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xe79667c2, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x433568e3, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0x78599d7a, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1b8512d3, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0x2b5d62bc, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_del) },
	{ 0x419bbe10, __VMLINUX_SYMBOL_STR(of_get_phy_mode) },
	{ 0xb246d7fc, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_getlink) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3635ea7d, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x7bd5ec57, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x5b58b48f, __VMLINUX_SYMBOL_STR(of_mdio_parse_addr) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xa7f894c2, __VMLINUX_SYMBOL_STR(devm_mdiobus_alloc_size) },
	{ 0x75f22f0f, __VMLINUX_SYMBOL_STR(phy_ethtool_get_eee) },
	{ 0xecea36c3, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0x2075917a, __VMLINUX_SYMBOL_STR(phy_print_status) },
	{ 0x8dbae4, __VMLINUX_SYMBOL_STR(of_phy_register_fixed_link) },
	{ 0xba5cd83a, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x6d294e43, __VMLINUX_SYMBOL_STR(clock_t_to_jiffies) },
	{ 0x19012671, __VMLINUX_SYMBOL_STR(device_find_child) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6139fc0b, __VMLINUX_SYMBOL_STR(of_find_net_device_by_node) },
	{ 0x99e6f152, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0xf315ed53, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x4ee61d4b, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb2df9035, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x10ee78fe, __VMLINUX_SYMBOL_STR(fixed_phy_set_link_update) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x6cf95331, __VMLINUX_SYMBOL_STR(phy_suspend) },
	{ 0x238458da, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xf7c4a42c, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xc0b3ea35, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x4bf0488b, __VMLINUX_SYMBOL_STR(phy_connect_direct) },
	{ 0xf9386e4e, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdea2c73c, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf904b6cc, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xe71393b1, __VMLINUX_SYMBOL_STR(genphy_config_init) },
	{ 0xac293a2b, __VMLINUX_SYMBOL_STR(of_phy_connect) },
	{ 0x74a9334e, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xf0988114, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x7cbe2ec5, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x563769b9, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7a7e55ee, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_add) },
	{ 0xddb278bc, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0x6c635d68, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x52e778b3, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0xc49927f4, __VMLINUX_SYMBOL_STR(of_get_parent) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x80deff4, __VMLINUX_SYMBOL_STR(phy_attached_info) },
	{ 0xd8b57f20, __VMLINUX_SYMBOL_STR(phy_ethtool_set_eee) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x487e7671, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x795a15e, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0x985f9294, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8870b56b, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x27fc2c88, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_dellink) },
	{ 0xe84299d9, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0x12b0269d, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x46d856db, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xb2dd8d39, __VMLINUX_SYMBOL_STR(of_phy_find_device) },
	{ 0x8c12880d, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xdbf936a7, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x26fda649, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8e2aed2d, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xba23e77, __VMLINUX_SYMBOL_STR(genphy_restart_aneg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmarvell,dsa");
MODULE_ALIAS("of:N*T*Cmarvell,dsaC*");
