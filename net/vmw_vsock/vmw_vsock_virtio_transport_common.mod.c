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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6fe84350, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xe7e113fd, __VMLINUX_SYMBOL_STR(__vsock_create) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc79d5ef, __VMLINUX_SYMBOL_STR(vm_sockets_get_local_cid) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x5072e533, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x76943f44, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x1e22c269, __VMLINUX_SYMBOL_STR(vsock_stream_has_space) },
	{ 0xd813c629, __VMLINUX_SYMBOL_STR(vsock_core_get_transport) },
	{ 0x7d966cb1, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x4a38b698, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xd20ede47, __VMLINUX_SYMBOL_STR(vsock_find_connected_socket) },
	{ 0xbff2e090, __VMLINUX_SYMBOL_STR(vsock_stream_has_data) },
	{ 0x4755c8ed, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x16624d6e, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xda68dc4a, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xbe082271, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xf70e4a4d, __VMLINUX_SYMBOL_STR(preempt_schedule_notrace) },
	{ 0x244b6588, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0x87cfe738, __VMLINUX_SYMBOL_STR(perf_trace_buf_alloc) },
	{ 0x15c0c57c, __VMLINUX_SYMBOL_STR(vsock_addr_init) },
	{ 0xa3ab4ecf, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9d378f70, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x498d03d, __VMLINUX_SYMBOL_STR(vsock_find_bound_socket) },
	{ 0xd4d3491c, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x184e965a, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x61520529, __VMLINUX_SYMBOL_STR(trace_print_symbols_seq) },
	{ 0x29ade55f, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x1bca2a90, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xbfc906a2, __VMLINUX_SYMBOL_STR(vsock_remove_sock) },
	{ 0x1108e82c, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0xe0557cf6, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0xca0c5633, __VMLINUX_SYMBOL_STR(vsock_insert_connected) },
	{ 0x13962182, __VMLINUX_SYMBOL_STR(vsock_enqueue_accept) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vsock";

