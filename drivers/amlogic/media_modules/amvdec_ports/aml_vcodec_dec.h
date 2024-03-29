/*
* Copyright (C) 2017 Amlogic, Inc. All rights reserved.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along
* with this program; if not, write to the Free Software Foundation, Inc.,
* 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*
* Description:
*/
#ifndef _AML_VCODEC_DEC_H_
#define _AML_VCODEC_DEC_H_

#include <media/videobuf2-core.h>
#include <media/videobuf2-v4l2.h>
#include <linux/amlogic/media/codec_mm/codec_mm.h>
#include "aml_vcodec_util.h"

#define VCODEC_CAPABILITY_4K_DISABLED	0x10
#define VCODEC_DEC_4K_CODED_WIDTH	4096U
#define VCODEC_DEC_4K_CODED_HEIGHT	2304U
#define AML_VDEC_MAX_W			2048U
#define AML_VDEC_MAX_H			1088U

#define AML_VDEC_IRQ_STATUS_DEC_SUCCESS	0x10000
#define V4L2_BUF_FLAG_LAST		0x00100000

#define VDEC_GATHER_MEMORY_TYPE		0
#define VDEC_SCATTER_MEMORY_TYPE	1

#define AML_V4L2_SET_DECMODE (V4L2_CID_USER_AMLOGIC_BASE + 0)

/**
 * struct vdec_fb  - decoder frame buffer
 * @mem_type	: gather or scatter memory.
 * @num_planes	: used number of the plane
 * @mem[4]	: array mem for used planes,
 *		  mem[0]: Y, mem[1]: C/U, mem[2]: V
 * @vf_fd	: the file handle of video frame
 * @vf_handle	: video frame handle
 * @status      : frame buffer status (vdec_fb_status)
 */

struct vdec_v4l2_buffer {
	int	mem_type;
	int	num_planes;
	union {
		struct	aml_vcodec_mem mem[4];
		u32_t	vf_fd;
	} m;
	ulong	vf_handle;
	u32_t	status;
};


/**
 * struct aml_video_dec_buf - Private data related to each VB2 buffer.
 * @b:		VB2 buffer
 * @list:	link list
 * @used:	Capture buffer contain decoded frame data and keep in
 *			codec data structure
 * @ready_to_display:	Capture buffer not display yet
 * @queued_in_vb2:	Capture buffer is queue in vb2
 * @queued_in_v4l2:	Capture buffer is in v4l2 driver, but not in vb2
 *			queue yet
 * @lastframe:		Intput buffer is last buffer - EOS
 * @error:		An unrecoverable error occurs on this buffer.
 * @frame_buffer:	Decode status, and buffer information of Capture buffer
 *
 * Note : These status information help us track and debug buffer state
 */
struct aml_video_dec_buf {
	struct vb2_v4l2_buffer vb;
	struct list_head list;

	struct vdec_v4l2_buffer frame_buffer;
	struct codec_mm_s *mem[2];
	char mem_onwer[32];
	bool used;
	bool ready_to_display;
	bool que_in_m2m;
	bool queued_in_vb2;
	bool queued_in_v4l2;
	bool lastframe;
	bool error;
};

struct aml_vdec_pic_infos {
	u32_t visible_width;
	u32_t visible_height;
	u32_t coded_width;
	u32_t coded_height;
	int dpb_size;
};

extern const struct v4l2_ioctl_ops aml_vdec_ioctl_ops;
extern const struct v4l2_m2m_ops aml_vdec_m2m_ops;


/*
 * aml_vdec_lock/aml_vdec_unlock are for ctx instance to
 * get/release lock before/after access decoder hw.
 * aml_vdec_lock get decoder hw lock and set curr_ctx
 * to ctx instance that get lock
 */
void aml_vdec_unlock(struct aml_vcodec_ctx *ctx);
void aml_vdec_lock(struct aml_vcodec_ctx *ctx);
int aml_vcodec_dec_queue_init(void *priv, struct vb2_queue *src_vq,
			   struct vb2_queue *dst_vq);
void aml_vcodec_dec_set_default_params(struct aml_vcodec_ctx *ctx);
void aml_vcodec_dec_release(struct aml_vcodec_ctx *ctx);
int aml_vcodec_dec_ctrls_setup(struct aml_vcodec_ctx *ctx);

void vdec_device_vf_run(struct aml_vcodec_ctx *ctx);

void try_to_capture(struct aml_vcodec_ctx *ctx);
void aml_thread_notify(struct aml_vcodec_ctx *ctx,
	enum aml_thread_type type);
int aml_thread_start(struct aml_vcodec_ctx *ctx, aml_thread_func func,
	enum aml_thread_type type, const char *thread_name);
void aml_thread_stop(struct aml_vcodec_ctx *ctx);
void wait_vcodec_ending(struct aml_vcodec_ctx *ctx);

#endif /* _AML_VCODEC_DEC_H_ */
