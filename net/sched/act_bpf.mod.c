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
	{ 0x6d9899b0, __VMLINUX_SYMBOL_STR(tcf_hashinfo_destroy) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4fc040ad, __VMLINUX_SYMBOL_STR(tcf_generic_walker) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xf77ed15, __VMLINUX_SYMBOL_STR(tcf_hash_insert) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x435c9e10, __VMLINUX_SYMBOL_STR(tcf_hash_cleanup) },
	{ 0xbb2ec4a1, __VMLINUX_SYMBOL_STR(bpf_prog_get_type) },
	{ 0x98853882, __VMLINUX_SYMBOL_STR(bpf_prog_create) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4c43f252, __VMLINUX_SYMBOL_STR(__tcf_hash_release) },
	{ 0x9f02f3cb, __VMLINUX_SYMBOL_STR(tcf_hash_create) },
	{ 0x204fb709, __VMLINUX_SYMBOL_STR(tcf_hash_check) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x45847d76, __VMLINUX_SYMBOL_STR(tcf_hash_search) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe47922bf, __VMLINUX_SYMBOL_STR(bpf_prog_put) },
	{ 0x9bef074d, __VMLINUX_SYMBOL_STR(bpf_prog_destroy) },
	{ 0x2b392cf1, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x7d0db45c, __VMLINUX_SYMBOL_STR(jiffies_to_clock_t) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x63978bae, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0xee19c743, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd7564359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x9b343743, __VMLINUX_SYMBOL_STR(tcf_unregister_action) },
	{ 0x22588411, __VMLINUX_SYMBOL_STR(tcf_register_action) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

