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
	{ 0xa83c665b, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0xfa1eb477, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x79805128, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xb2ab07a5, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x606f75de, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x3ec92cb7, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xf4a27bab, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x765ea060, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x842a944f, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x8a190ea5, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x4a66cad2, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0xc3ccc8f9, __VMLINUX_SYMBOL_STR(pskb_put) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x98ab764, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x86be9089, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x127158a4, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0x1babd4ec, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x41d64322, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x582bd608, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x93546951, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xd76cc6a5, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0x59b52064, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x92270d4a, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x1211020c, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";

