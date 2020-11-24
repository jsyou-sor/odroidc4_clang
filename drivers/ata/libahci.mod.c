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
	{ 0x12137d4c, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x4545cd5a, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb6f9e2f9, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xf8f3a0fb, __VMLINUX_SYMBOL_STR(ata_ratelimit) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xf175cb24, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9ebaeb18, __VMLINUX_SYMBOL_STR(dev_attr_sw_activity) },
	{ 0x8f9a211e, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0xe471257e, __VMLINUX_SYMBOL_STR(sata_pmp_error_handler) },
	{ 0xc6c323b3, __VMLINUX_SYMBOL_STR(sata_link_scr_lpm) },
	{ 0xcb7c2fa5, __VMLINUX_SYMBOL_STR(sata_pmp_qc_defer_cmd_switch) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3a8f8916, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x53730525, __VMLINUX_SYMBOL_STR(ata_port_desc) },
	{ 0x22cfc32a, __VMLINUX_SYMBOL_STR(dev_attr_em_message) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4fdc945d, __VMLINUX_SYMBOL_STR(sata_deb_timing_normal) },
	{ 0x15eb4436, __VMLINUX_SYMBOL_STR(sata_pmp_port_ops) },
	{ 0x46e89311, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1b5f1989, __VMLINUX_SYMBOL_STR(ata_dev_set_feature) },
	{ 0x9063d8c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x390b91b1, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0xf92a173f, __VMLINUX_SYMBOL_STR(ata_wait_register) },
	{ 0x7585db41, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0x49dfa25a, __VMLINUX_SYMBOL_STR(ata_host_start) },
	{ 0x7e62ba2d, __VMLINUX_SYMBOL_STR(ata_link_abort) },
	{ 0xe3f666d0, __VMLINUX_SYMBOL_STR(dev_attr_unload_heads) },
	{ 0x9714268d, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xcccfb2fa, __VMLINUX_SYMBOL_STR(sata_deb_timing_hotplug) },
	{ 0xa52654ea, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x75368f3f, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0x47b27f61, __VMLINUX_SYMBOL_STR(sata_link_hardreset) },
	{ 0x744b4fc7, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0x6c0f948b, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0x1a676c64, __VMLINUX_SYMBOL_STR(ata_host_register) },
	{ 0x83eed77a, __VMLINUX_SYMBOL_STR(dev_attr_em_message_type) },
	{ 0x779a7e07, __VMLINUX_SYMBOL_STR(sata_lpm_ignore_phy_events) },
	{ 0xe49d99c1, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xd0fe3150, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0xdb6c8608, __VMLINUX_SYMBOL_STR(ata_wait_after_reset) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8b408b86, __VMLINUX_SYMBOL_STR(ata_qc_complete_multiple) },
	{ 0x5314a267, __VMLINUX_SYMBOL_STR(ata_link_next) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x985f9294, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xbd3782c7, __VMLINUX_SYMBOL_STR(ata_std_postreset) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3179a721, __VMLINUX_SYMBOL_STR(dev_attr_link_power_management_policy) },
	{ 0xf2fa5303, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0xf8e18e66, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x193b9bd9, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xf7560f84, __VMLINUX_SYMBOL_STR(sata_async_notification) },
	{ 0x170a8959, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

