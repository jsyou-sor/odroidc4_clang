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
	{ 0x4a66cad2, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x98ab764, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x263c3152, __VMLINUX_SYMBOL_STR(bcmp) },
	{ 0xb1c9a382, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0xb731db81, __VMLINUX_SYMBOL_STR(skb_to_sgvec_nomark) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7cd60ecd, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x127158a4, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xe50c61dc, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1babd4ec, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x2a484251, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xed6a046c, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
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

