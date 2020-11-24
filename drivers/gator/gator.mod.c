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
	{ 0x61b7b126, __VMLINUX_SYMBOL_STR(simple_strtoull) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xdb91e05c, __VMLINUX_SYMBOL_STR(tracepoint_probe_register) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xb68513a0, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x7c25eeb, __VMLINUX_SYMBOL_STR(down_killable) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xce151a36, __VMLINUX_SYMBOL_STR(for_each_kernel_tracepoint) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd9d636d8, __VMLINUX_SYMBOL_STR(perf_event_release_kernel) },
	{ 0xef302581, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x361e2bcc, __VMLINUX_SYMBOL_STR(save_stack_trace) },
	{ 0x3d3273b1, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x7dda30af, __VMLINUX_SYMBOL_STR(unregister_tracepoint_module_notifier) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x96a70cfd, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xb61c8482, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x9ec98ca8, __VMLINUX_SYMBOL_STR(vm_node_stat) },
	{ 0x564d44b3, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xde815296, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0xd07a79, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x4127ebd3, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x40c7247c, __VMLINUX_SYMBOL_STR(si_meminfo) },
	{ 0x50d188e2, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7c46233a, __VMLINUX_SYMBOL_STR(cpufreq_quick_get) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0x8dead1d9, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x11c2ae32, __VMLINUX_SYMBOL_STR(vm_zone_stat) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x8ef2cb9f, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xe8ef0ff0, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x22f32756, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x926a546d, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x8974c179, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0x985558a1, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x305cec12, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0x16624d6e, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xfb04661a, __VMLINUX_SYMBOL_STR(get_task_mm) },
	{ 0x56d697ce, __VMLINUX_SYMBOL_STR(cpu_up) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x965e203e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0x9f99aebd, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xf4abce0b, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0x8b43159b, __VMLINUX_SYMBOL_STR(register_cpu_notifier) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x211f68f1, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x9769c334, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x90471034, __VMLINUX_SYMBOL_STR(get_user_pages_remote) },
	{ 0x2dce2f1c, __VMLINUX_SYMBOL_STR(__irq_regs) },
	{ 0xf0988114, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x123f82f3, __VMLINUX_SYMBOL_STR(getrawmonotonic64) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x93e9c0e8, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x76ca2b7d, __VMLINUX_SYMBOL_STR(of_find_node_by_type) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x40dbc442, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xf7bb4239, __VMLINUX_SYMBOL_STR(__cpu_present_mask) },
	{ 0x324b3877, __VMLINUX_SYMBOL_STR(up) },
	{ 0x7681946c, __VMLINUX_SYMBOL_STR(unregister_pm_notifier) },
	{ 0xf3a40d47, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0xb42ca3ba, __VMLINUX_SYMBOL_STR(__module_address) },
	{ 0xc2ffb315, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xefa2c27d, __VMLINUX_SYMBOL_STR(register_tracepoint_module_notifier) },
	{ 0x307f38f2, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x11b8e60c, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xc47706b2, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xcd97e10d, __VMLINUX_SYMBOL_STR(perf_event_create_kernel_counter) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xbfe20205, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x5541ea93, __VMLINUX_SYMBOL_STR(on_each_cpu) },
	{ 0xe3102dbc, __VMLINUX_SYMBOL_STR(simple_dir_inode_operations) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x6228c21f, __VMLINUX_SYMBOL_STR(smp_call_function_single) },
	{ 0x766d9ec8, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xa6647139, __VMLINUX_SYMBOL_STR(tracepoint_probe_unregister) },
	{ 0x6e1136f4, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "887A50524B33100187D4044");
