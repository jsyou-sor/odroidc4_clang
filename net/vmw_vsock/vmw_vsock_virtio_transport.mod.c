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
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x6fe84350, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x1068c05d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7e281c94, __VMLINUX_SYMBOL_STR(virtio_transport_recv_pkt) },
	{ 0xc7889cd9, __VMLINUX_SYMBOL_STR(virtio_transport_set_buffer_size) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x7c5bd84, __VMLINUX_SYMBOL_STR(virtio_transport_destruct) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x72d0bdee, __VMLINUX_SYMBOL_STR(virtio_transport_get_max_buffer_size) },
	{ 0x1148cfc7, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_pre_block) },
	{ 0xfb69230f, __VMLINUX_SYMBOL_STR(virtio_transport_stream_has_space) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x512cf095, __VMLINUX_SYMBOL_STR(virtio_transport_notify_poll_in) },
	{ 0xa970609, __VMLINUX_SYMBOL_STR(virtio_transport_do_socket_init) },
	{ 0xe9f9d658, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0xe187e7f0, __VMLINUX_SYMBOL_STR(virtio_transport_stream_is_active) },
	{ 0xfc51e5a7, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x145bdbe2, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x711cd8b7, __VMLINUX_SYMBOL_STR(__vsock_core_init) },
	{ 0xb00e66c9, __VMLINUX_SYMBOL_STR(virtio_transport_set_min_buffer_size) },
	{ 0xfccbb30, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x98d42558, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_allow) },
	{ 0xa923b300, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_post_dequeue) },
	{ 0xea6e2539, __VMLINUX_SYMBOL_STR(virtio_transport_notify_poll_out) },
	{ 0x7f730c80, __VMLINUX_SYMBOL_STR(vsock_core_exit) },
	{ 0x92a32265, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0xe2431b4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xadaf6a63, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x4755c8ed, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x20c2abae, __VMLINUX_SYMBOL_STR(virtio_transport_stream_dequeue) },
	{ 0x70db45f1, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x205f9a62, __VMLINUX_SYMBOL_STR(virtio_transport_stream_enqueue) },
	{ 0xf6223e7e, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_pre_dequeue) },
	{ 0x906bf319, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xeff8259f, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_pre_enqueue) },
	{ 0xb3a248b, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_init) },
	{ 0xaa2a6413, __VMLINUX_SYMBOL_STR(virtqueue_get_vring_size) },
	{ 0xe16ca3f8, __VMLINUX_SYMBOL_STR(virtio_transport_stream_allow) },
	{ 0xcb24771d, __VMLINUX_SYMBOL_STR(virtio_transport_get_buffer_size) },
	{ 0x78fe653a, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x1d5bf1d7, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_dequeue) },
	{ 0x55912691, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_post_enqueue) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x8e769ab, __VMLINUX_SYMBOL_STR(virtio_transport_shutdown) },
	{ 0x10604d77, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_enqueue) },
	{ 0xeccdffc5, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_pre_block) },
	{ 0x23d48a92, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd0325f27, __VMLINUX_SYMBOL_STR(virtio_transport_free_pkt) },
	{ 0x8e4c0b89, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_bind) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x36576aed, __VMLINUX_SYMBOL_STR(virtio_transport_stream_rcvhiwat) },
	{ 0x3ef6d25a, __VMLINUX_SYMBOL_STR(virtio_transport_set_max_buffer_size) },
	{ 0xe4e5d472, __VMLINUX_SYMBOL_STR(virtio_transport_stream_has_data) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa6c64c51, __VMLINUX_SYMBOL_STR(virtio_transport_connect) },
	{ 0x16a27738, __VMLINUX_SYMBOL_STR(virtqueue_detach_unused_buf) },
	{ 0xfde52adf, __VMLINUX_SYMBOL_STR(vsock_for_each_connected_socket) },
	{ 0x92dd7abe, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0xc50556c6, __VMLINUX_SYMBOL_STR(virtio_transport_release) },
	{ 0xe0410dc1, __VMLINUX_SYMBOL_STR(virtio_transport_get_min_buffer_size) },
	{ 0x966ebde1, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_init) },
	{ 0x68527ae7, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vmw_vsock_virtio_transport_common,vsock";

MODULE_ALIAS("virtio:d00000013v*");
