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

/*
 * This file is automaticly generated by genregs.awk. Please do not edit it
 * Base files are ..
 *   ..
 *   ..
 * Tue Oct 22 15:28:48 CST 2013
 **/

#ifndef __MACH_MESON8_REG_ADDR_H_
#define __MACH_MESON8_REG_ADDR_H_
#include <linux/amlogic/iomap.h>
#define CBUS_REG_ADDR(_r) aml_read_cbus(_r)


#define STB_CBUS_BASE		aml_stb_get_base(ID_STB_CBUS_BASE)
#define SMARTCARD_REG_BASE	aml_stb_get_base(ID_SMARTCARD_REG_BASE)
#define ASYNC_FIFO_REG_BASE	aml_stb_get_base(ID_ASYNC_FIFO_REG_BASE)
#define ASYNC_FIFO1_REG_BASE	aml_stb_get_base(ID_ASYNC_FIFO1_REG_BASE)
#define ASYNC_FIFO2_REG_BASE	aml_stb_get_base(ID_ASYNC_FIFO2_REG_BASE)
#define RESET_BASE		aml_stb_get_base(ID_RESET_BASE)
#define PARSER_SUB_START_PTR_BASE \
	aml_stb_get_base(ID_PARSER_SUB_START_PTR_BASE)

#define HHI_CSI_PHY_CNTL_BASE 0x1000

#define DEMUX_1_OFFSET         0x00
#define DEMUX_2_OFFSET         0x50
#define DEMUX_3_OFFSET         0xa0


#define STB_S2P2_CONFIG  (STB_CBUS_BASE + 0xef)
#define P_STB_S2P2_CONFIG                CBUS_REG_ADDR(STB_S2P2_CONFIG)

#define STB_RECORDER2_CNTL	(STB_CBUS_BASE + 0xee)
#define P_STB_RECORDER2_CNTL             CBUS_REG_ADDR(STB_RECORDER2_CNTL)

#define STB_TOP_CONFIG  (STB_CBUS_BASE + 0xf0)
#define P_STB_TOP_CONFIG                CBUS_REG_ADDR(STB_TOP_CONFIG)
#define TS_TOP_CONFIG	(STB_CBUS_BASE + 0xf1)
#define P_TS_TOP_CONFIG                 CBUS_REG_ADDR(TS_TOP_CONFIG)
#define TS_FILE_CONFIG	(STB_CBUS_BASE + 0xf2)
#define P_TS_FILE_CONFIG        CBUS_REG_ADDR(TS_FILE_CONFIG)
#define TS_PL_PID_INDEX (STB_CBUS_BASE + 0xf3)
#define P_TS_PL_PID_INDEX               CBUS_REG_ADDR(TS_PL_PID_INDEX)
#define TS_PL_PID_DATA  (STB_CBUS_BASE + 0xf4)
#define P_TS_PL_PID_DATA                CBUS_REG_ADDR(TS_PL_PID_DATA)
#define COMM_DESC_KEY0  (STB_CBUS_BASE + 0xf5)
#define P_COMM_DESC_KEY0                CBUS_REG_ADDR(COMM_DESC_KEY0)
#define COMM_DESC_KEY1  (STB_CBUS_BASE + 0xf6)
#define P_COMM_DESC_KEY1                CBUS_REG_ADDR(COMM_DESC_KEY1)
#define COMM_DESC_KEY_RW (STB_CBUS_BASE + 0xf7)
#define P_COMM_DESC_KEY_RW              CBUS_REG_ADDR(COMM_DESC_KEY_RW)
#define CIPLUS_KEY0		(STB_CBUS_BASE + 0xf8)
#define P_CIPLUS_KEY0           CBUS_REG_ADDR(CIPLUS_KEY0)
#define CIPLUS_KEY1		(STB_CBUS_BASE + 0xf9)
#define P_CIPLUS_KEY1           CBUS_REG_ADDR(CIPLUS_KEY1)
#define CIPLUS_KEY2		(STB_CBUS_BASE + 0xfa)
#define P_CIPLUS_KEY2           CBUS_REG_ADDR(CIPLUS_KEY2)
#define CIPLUS_KEY3		(STB_CBUS_BASE + 0xfb)
#define P_CIPLUS_KEY3           CBUS_REG_ADDR(CIPLUS_KEY3)
#define CIPLUS_KEY_WR    (STB_CBUS_BASE + 0xfc)
#define P_CIPLUS_KEY_WR                 CBUS_REG_ADDR(CIPLUS_KEY_WR)
#define CIPLUS_CONFIG    (STB_CBUS_BASE + 0xfd)
#define P_CIPLUS_CONFIG                 CBUS_REG_ADDR(CIPLUS_CONFIG)
#define CIPLUS_ENDIAN    (STB_CBUS_BASE + 0xfe)
#define P_CIPLUS_ENDIAN                 CBUS_REG_ADDR(CIPLUS_ENDIAN)

#define SMARTCARD_REG0 (SMARTCARD_REG_BASE + 0x0)
#define P_SMARTCARD_REG0                CBUS_REG_ADDR(SMARTCARD_REG0)
#define SMARTCARD_REG1 (SMARTCARD_REG_BASE + 0x1)
#define P_SMARTCARD_REG1                CBUS_REG_ADDR(SMARTCARD_REG1)
#define SMARTCARD_REG2 (SMARTCARD_REG_BASE + 0x2)
#define P_SMARTCARD_REG2                CBUS_REG_ADDR(SMARTCARD_REG2)
#define SMARTCARD_STATUS (SMARTCARD_REG_BASE + 0x3)
#define P_SMARTCARD_STATUS              CBUS_REG_ADDR(SMARTCARD_STATUS)
#define SMARTCARD_INTR (SMARTCARD_REG_BASE + 0x4)
#define P_SMARTCARD_INTR                CBUS_REG_ADDR(SMARTCARD_INTR)
#define SMARTCARD_REG5 (SMARTCARD_REG_BASE + 0x5)
#define P_SMARTCARD_REG5                CBUS_REG_ADDR(SMARTCARD_REG5)
#define SMARTCARD_REG6 (SMARTCARD_REG_BASE + 0x6)
#define P_SMARTCARD_REG6                CBUS_REG_ADDR(SMARTCARD_REG6)
#define SMARTCARD_FIFO (SMARTCARD_REG_BASE + 0x7)
#define P_SMARTCARD_FIFO                CBUS_REG_ADDR(SMARTCARD_FIFO)
#define SMARTCARD_REG8 (SMARTCARD_REG_BASE + 0x8)
#define P_SMARTCARD_REG8                CBUS_REG_ADDR(SMARTCARD_REG8)

#define ASYNC_FIFO_REG0 (ASYNC_FIFO_REG_BASE + 0x0)
#define P_ASYNC_FIFO_REG0               CBUS_REG_ADDR(ASYNC_FIFO_REG0)
#define ASYNC_FIFO_REG1 (ASYNC_FIFO_REG_BASE + 0x1)
#define P_ASYNC_FIFO_REG1               CBUS_REG_ADDR(ASYNC_FIFO_REG1)
#define ASYNC_FIFO_REG2 (ASYNC_FIFO_REG_BASE + 0x2)
#define P_ASYNC_FIFO_REG2               CBUS_REG_ADDR(ASYNC_FIFO_REG2)
#define ASYNC_FIFO_REG3 (ASYNC_FIFO_REG_BASE + 0x3)
#define P_ASYNC_FIFO_REG3               CBUS_REG_ADDR(ASYNC_FIFO_REG3)
#define ASYNC_FIFO_REG4 (ASYNC_FIFO_REG_BASE + 0x4)
#define P_ASYNC_FIFO_REG4               CBUS_REG_ADDR(ASYNC_FIFO_REG4)
#define ASYNC_FIFO_REG5 (ASYNC_FIFO_REG_BASE + 0x5)
#define P_ASYNC_FIFO_REG5               CBUS_REG_ADDR(ASYNC_FIFO_REG5)

#define ASYNC_FIFO1_REG0 (ASYNC_FIFO1_REG_BASE + 0x0)
#define P_ASYNC_FIFO1_REG0              CBUS_REG_ADDR(ASYNC_FIFO1_REG0)
#define ASYNC_FIFO1_REG1 (ASYNC_FIFO1_REG_BASE + 0x1)
#define P_ASYNC_FIFO1_REG1              CBUS_REG_ADDR(ASYNC_FIFO1_REG1)
#define ASYNC_FIFO1_REG2 (ASYNC_FIFO1_REG_BASE + 0x2)
#define P_ASYNC_FIFO1_REG2              CBUS_REG_ADDR(ASYNC_FIFO1_REG2)
#define ASYNC_FIFO1_REG3 (ASYNC_FIFO1_REG_BASE + 0x3)
#define P_ASYNC_FIFO1_REG3              CBUS_REG_ADDR(ASYNC_FIFO1_REG3)
#define ASYNC_FIFO1_REG4 (ASYNC_FIFO1_REG_BASE + 0x4)
#define P_ASYNC_FIFO1_REG4              CBUS_REG_ADDR(ASYNC_FIFO1_REG4)
#define ASYNC_FIFO1_REG5 (ASYNC_FIFO1_REG_BASE + 0x5)
#define P_ASYNC_FIFO1_REG5              CBUS_REG_ADDR(ASYNC_FIFO1_REG5)


#define ASYNC_FIFO2_REG0 (ASYNC_FIFO2_REG_BASE + 0x0)
#define P_ASYNC_FIFO2_REG0              CBUS_REG_ADDR(ASYNC_FIFO2_REG0)
#define ASYNC_FIFO2_REG1 (ASYNC_FIFO2_REG_BASE + 0x1)
#define P_ASYNC_FIFO2_REG1              CBUS_REG_ADDR(ASYNC_FIFO2_REG1)
#define ASYNC_FIFO2_REG2 (ASYNC_FIFO2_REG_BASE + 0x2)
#define P_ASYNC_FIFO2_REG2              CBUS_REG_ADDR(ASYNC_FIFO2_REG2)
#define ASYNC_FIFO2_REG3 (ASYNC_FIFO2_REG_BASE + 0x3)
#define P_ASYNC_FIFO2_REG3              CBUS_REG_ADDR(ASYNC_FIFO2_REG3)
#define ASYNC_FIFO2_REG4 (ASYNC_FIFO2_REG_BASE + 0x4)
#define P_ASYNC_FIFO2_REG4              CBUS_REG_ADDR(ASYNC_FIFO2_REG4)
#define ASYNC_FIFO2_REG5 (ASYNC_FIFO2_REG_BASE + 0x5)
#define P_ASYNC_FIFO2_REG5              CBUS_REG_ADDR(ASYNC_FIFO2_REG5)


#define RESET0_REGISTER (RESET_BASE + 0x1)
#define P_RESET0_REGISTER               CBUS_REG_ADDR(RESET0_REGISTER)
#define RESET1_REGISTER (RESET_BASE + 0x2)
#define P_RESET1_REGISTER               CBUS_REG_ADDR(RESET1_REGISTER)
#define RESET2_REGISTER (RESET_BASE + 0x3)
#define P_RESET2_REGISTER               CBUS_REG_ADDR(RESET2_REGISTER)
#define RESET3_REGISTER (RESET_BASE + 0x4)
#define P_RESET3_REGISTER               CBUS_REG_ADDR(RESET3_REGISTER)
#define RESET4_REGISTER (RESET_BASE + 0x5)
#define P_RESET4_REGISTER               CBUS_REG_ADDR(RESET4_REGISTER)
#define RESET5_REGISTER (RESET_BASE + 0x6)
#define P_RESET5_REGISTER               CBUS_REG_ADDR(RESET5_REGISTER)
#define RESET6_REGISTER (RESET_BASE + 0x7)
#define P_RESET6_REGISTER               CBUS_REG_ADDR(RESET6_REGISTER)
#define RESET7_REGISTER (RESET_BASE + 0x8)
#define P_RESET7_REGISTER               CBUS_REG_ADDR(RESET7_REGISTER)
#define RESET0_MASK (RESET_BASE + 0x10)
#define P_RESET0_MASK           CBUS_REG_ADDR(RESET0_MASK)
#define RESET1_MASK (RESET_BASE + 0x11)
#define P_RESET1_MASK           CBUS_REG_ADDR(RESET1_MASK)
#define RESET2_MASK (RESET_BASE + 0x12)
#define P_RESET2_MASK           CBUS_REG_ADDR(RESET2_MASK)
#define RESET3_MASK (RESET_BASE + 0x13)
#define P_RESET3_MASK           CBUS_REG_ADDR(RESET3_MASK)
#define RESET4_MASK (RESET_BASE + 0x14)
#define P_RESET4_MASK           CBUS_REG_ADDR(RESET4_MASK)
#define RESET5_MASK (RESET_BASE + 0x15)
#define P_RESET5_MASK           CBUS_REG_ADDR(RESET5_MASK)
#define RESET6_MASK (RESET_BASE + 0x16)
#define P_RESET6_MASK           CBUS_REG_ADDR(RESET6_MASK)
#define CRT_MASK    (RESET_BASE + 0x17)
#define P_CRT_MASK              CBUS_REG_ADDR(CRT_MASK)
#define RESET7_MASK (RESET_BASE + 0x18)
#define P_RESET7_MASK           CBUS_REG_ADDR(RESET7_MASK)
/*add from M8M2*/
#define P_RESET0_LEVEL          CBUS_REG_ADDR(RESET0_LEVEL)
#define RESET1_LEVEL (RESET_BASE + 0x21)
#define P_RESET1_LEVEL          CBUS_REG_ADDR(RESET1_LEVEL)
#define RESET2_LEVEL (RESET_BASE + 0x22)
#define P_RESET2_LEVEL          CBUS_REG_ADDR(RESET2_LEVEL)
#define RESET3_LEVEL (RESET_BASE + 0x23)
#define P_RESET3_LEVEL          CBUS_REG_ADDR(RESET3_LEVEL)
#define RESET4_LEVEL (RESET_BASE + 0x24)
#define P_RESET4_LEVEL          CBUS_REG_ADDR(RESET4_LEVEL)
#define RESET5_LEVEL (RESET_BASE + 0x25)
#define P_RESET5_LEVEL          CBUS_REG_ADDR(RESET5_LEVEL)
#define RESET6_LEVEL (RESET_BASE + 0x26)
#define P_RESET6_LEVEL          CBUS_REG_ADDR(RESET6_LEVEL)
#define RESET7_LEVEL (RESET_BASE + 0x27)
#define P_RESET7_LEVEL          CBUS_REG_ADDR(RESET7_LEVEL)

/*no set*/
#ifdef	MESON_M8_CPU
#define HHI_CSI_PHY_CNTL0 (HHI_CSI_PHY_CNTL_BASE + 0xd3)
#define P_HHI_CSI_PHY_CNTL0             CBUS_REG_ADDR(HHI_CSI_PHY_CNTL0)
#define HHI_CSI_PHY_CNTL1 (HHI_CSI_PHY_CNTL_BASE + 0xd4)
#define P_HHI_CSI_PHY_CNTL1             CBUS_REG_ADDR(HHI_CSI_PHY_CNTL1)
#define HHI_CSI_PHY_CNTL2 (HHI_CSI_PHY_CNTL_BASE + 0xd5)
#define P_HHI_CSI_PHY_CNTL2             CBUS_REG_ADDR(HHI_CSI_PHY_CNTL2)
#define HHI_CSI_PHY_CNTL3 (HHI_CSI_PHY_CNTL_BASE + 0xd6)
#define P_HHI_CSI_PHY_CNTL3             CBUS_REG_ADDR(HHI_CSI_PHY_CNTL3)
#define HHI_CSI_PHY_CNTL4 (HHI_CSI_PHY_CNTL_BASE + 0xd7)
#define P_HHI_CSI_PHY_CNTL4             CBUS_REG_ADDR(HHI_CSI_PHY_CNTL4)
#endif

#define PARSER_SUB_START_PTR (PARSER_SUB_START_PTR_BASE + 0x8a)
#define P_PARSER_SUB_START_PTR          CBUS_REG_ADDR(PARSER_SUB_START_PTR)
#define PARSER_SUB_END_PTR (PARSER_SUB_START_PTR_BASE + 0x8b)
#define P_PARSER_SUB_END_PTR            CBUS_REG_ADDR(PARSER_SUB_END_PTR)
#define PARSER_SUB_WP (PARSER_SUB_START_PTR_BASE + 0x8c)
#define P_PARSER_SUB_WP                 CBUS_REG_ADDR(PARSER_SUB_WP)
#define PARSER_SUB_RP (PARSER_SUB_START_PTR_BASE + 0x8d)
#define P_PARSER_SUB_RP                 CBUS_REG_ADDR(PARSER_SUB_RP)
#define PARSER_SUB_HOLE (PARSER_SUB_START_PTR_BASE + 0x8e)
#define P_PARSER_SUB_HOLE	CBUS_REG_ADDR(PARSER_SUB_HOLE)

/*no set*/
#define AO_RTI_GEN_PWR_SLEEP0 ((0x00 << 10) | (0x3a << 2))
#define P_AO_RTI_GEN_PWR_SLEEP0                 \
	AOBUS_REG_ADDR(AO_RTI_GEN_PWR_SLEEP0)
#define AO_RTI_GEN_PWR_ISO0 ((0x00 << 10) | (0x3b << 2))
#define P_AO_RTI_GEN_PWR_ISO0           AOBUS_REG_ADDR(AO_RTI_GEN_PWR_ISO0)

/**/
#define STB_VERSION   (STB_CBUS_BASE + 0x00)
#define P_STB_VERSION           CBUS_REG_ADDR(STB_VERSION)
#define STB_VERSION_2 (STB_CBUS_BASE + 0x50)
#define P_STB_VERSION_2                 CBUS_REG_ADDR(STB_VERSION_2)
#define STB_VERSION_3 (STB_CBUS_BASE + 0xa0)
#define P_STB_VERSION_3                 CBUS_REG_ADDR(STB_VERSION_3)
#define STB_TEST_REG   (STB_CBUS_BASE + 0x01)
#define P_STB_TEST_REG          CBUS_REG_ADDR(STB_TEST_REG)
#define STB_TEST_REG_2 (STB_CBUS_BASE + 0x51)
#define P_STB_TEST_REG_2                CBUS_REG_ADDR(STB_TEST_REG_2)
#define STB_TEST_REG_3 (STB_CBUS_BASE + 0xa1)
#define P_STB_TEST_REG_3                CBUS_REG_ADDR(STB_TEST_REG_3)

#define FEC_INPUT_CONTROL   (STB_CBUS_BASE + 0x2)
#define P_FEC_INPUT_CONTROL             CBUS_REG_ADDR(FEC_INPUT_CONTROL)
#define FEC_INPUT_CONTROL_2 (STB_CBUS_BASE + 0x52)
#define P_FEC_INPUT_CONTROL_2           CBUS_REG_ADDR(FEC_INPUT_CONTROL_2)
#define FEC_INPUT_CONTROL_3 (STB_CBUS_BASE + 0xa2)
#define P_FEC_INPUT_CONTROL_3           CBUS_REG_ADDR(FEC_INPUT_CONTROL_3)
/*no used*/
#define FEC_INPUT_DATA (STB_CBUS_BASE + 0x03)
#define P_FEC_INPUT_DATA                CBUS_REG_ADDR(FEC_INPUT_DATA)
#define FEC_INPUT_DATA_2 (STB_CBUS_BASE + 0x53)
#define P_FEC_INPUT_DATA_2              CBUS_REG_ADDR(FEC_INPUT_DATA_2)
#define FEC_INPUT_DATA_3 (STB_CBUS_BASE + 0xa3)
#define P_FEC_INPUT_DATA_3              CBUS_REG_ADDR(FEC_INPUT_DATA_3)
/*no used end*/
#define DEMUX_CONTROL (STB_CBUS_BASE + 0x04)
#define P_DEMUX_CONTROL                 CBUS_REG_ADDR(DEMUX_CONTROL)
#define DEMUX_CONTROL_2 (STB_CBUS_BASE + 0x54)
#define P_DEMUX_CONTROL_2               CBUS_REG_ADDR(DEMUX_CONTROL_2)
#define DEMUX_CONTROL_3 (STB_CBUS_BASE + 0xa4)
#define P_DEMUX_CONTROL_3               CBUS_REG_ADDR(DEMUX_CONTROL_3)
/*no used*/
#define FEC_SYNC_BYTE (STB_CBUS_BASE + 0x05)
#define P_FEC_SYNC_BYTE                 CBUS_REG_ADDR(FEC_SYNC_BYTE)
#define FEC_SYNC_BYTE_2 (STB_CBUS_BASE + 0x55)
#define P_FEC_SYNC_BYTE_2               CBUS_REG_ADDR(FEC_SYNC_BYTE_2)
#define FEC_SYNC_BYTE_3 (STB_CBUS_BASE + 0xa5)
#define P_FEC_SYNC_BYTE_3               CBUS_REG_ADDR(FEC_SYNC_BYTE_3)
/*no used end*/

#define FM_WR_DATA (STB_CBUS_BASE + 0x06)
#define P_FM_WR_DATA            CBUS_REG_ADDR(FM_WR_DATA)
#define FM_WR_DATA_2 (STB_CBUS_BASE + 0x56)
#define P_FM_WR_DATA_2          CBUS_REG_ADDR(FM_WR_DATA_2)
#define FM_WR_DATA_3 (STB_CBUS_BASE + 0xa6)
#define P_FM_WR_DATA_3          CBUS_REG_ADDR(FM_WR_DATA_3)
#define FM_WR_ADDR (STB_CBUS_BASE + 0x07)
#define P_FM_WR_ADDR            CBUS_REG_ADDR(FM_WR_ADDR)
#define FM_WR_ADDR_2 (STB_CBUS_BASE + 0x57)
#define P_FM_WR_ADDR_2          CBUS_REG_ADDR(FM_WR_ADDR_2)
#define FM_WR_ADDR_3 (STB_CBUS_BASE + 0xa7)
#define P_FM_WR_ADDR_3          CBUS_REG_ADDR(FM_WR_ADDR_3)
#define MAX_FM_COMP_ADDR (STB_CBUS_BASE + 0x08)
#define P_MAX_FM_COMP_ADDR              CBUS_REG_ADDR(MAX_FM_COMP_ADDR)
#define MAX_FM_COMP_ADDR_2 (STB_CBUS_BASE + 0x58)
#define P_MAX_FM_COMP_ADDR_2            CBUS_REG_ADDR(MAX_FM_COMP_ADDR_2)
#define MAX_FM_COMP_ADDR_3 (STB_CBUS_BASE + 0xa8)
#define P_MAX_FM_COMP_ADDR_3            CBUS_REG_ADDR(MAX_FM_COMP_ADDR_3)

#define TS_HEAD_0 (STB_CBUS_BASE + 0x09)
#define P_TS_HEAD_0             CBUS_REG_ADDR(TS_HEAD_0)
#define TS_HEAD_0_2 (STB_CBUS_BASE + 0x59)
#define P_TS_HEAD_0_2           CBUS_REG_ADDR(TS_HEAD_0_2)
#define TS_HEAD_0_3 (STB_CBUS_BASE + 0xa9)
#define P_TS_HEAD_0_3           CBUS_REG_ADDR(TS_HEAD_0_3)
#define TS_HEAD_1 (STB_CBUS_BASE + 0x0a)
#define P_TS_HEAD_1             CBUS_REG_ADDR(TS_HEAD_1)
#define TS_HEAD_1_2 (STB_CBUS_BASE + 0x5a)
#define P_TS_HEAD_1_2           CBUS_REG_ADDR(TS_HEAD_1_2)
#define TS_HEAD_1_3 (STB_CBUS_BASE + 0xaa)
#define P_TS_HEAD_1_3           CBUS_REG_ADDR(TS_HEAD_1_3)

#define OM_CMD_STATUS (STB_CBUS_BASE + 0x0b)
#define P_OM_CMD_STATUS                 CBUS_REG_ADDR(OM_CMD_STATUS)
#define OM_CMD_STATUS_2 (STB_CBUS_BASE + 0x5b)
#define P_OM_CMD_STATUS_2               CBUS_REG_ADDR(OM_CMD_STATUS_2)
#define OM_CMD_STATUS_3 (STB_CBUS_BASE + 0xab)
#define P_OM_CMD_STATUS_3               CBUS_REG_ADDR(OM_CMD_STATUS_3)

#define OM_CMD_DATA (STB_CBUS_BASE + 0x0c)
#define P_OM_CMD_DATA           CBUS_REG_ADDR(OM_CMD_DATA)
#define OM_CMD_DATA_2 (STB_CBUS_BASE + 0x5c)
#define P_OM_CMD_DATA_2                 CBUS_REG_ADDR(OM_CMD_DATA_2)
#define OM_CMD_DATA_3 (STB_CBUS_BASE + 0xac)
#define P_OM_CMD_DATA_3                 CBUS_REG_ADDR(OM_CMD_DATA_3)
#define OM_CMD_DATA2 (STB_CBUS_BASE + 0x0d)
#define P_OM_CMD_DATA2          CBUS_REG_ADDR(OM_CMD_DATA2)
#define OM_CMD_DATA2_2 (STB_CBUS_BASE + 0x5d)
#define P_OM_CMD_DATA2_2                CBUS_REG_ADDR(OM_CMD_DATA2_2)
#define OM_CMD_DATA2_3 (STB_CBUS_BASE + 0xad)
#define P_OM_CMD_DATA2_3                CBUS_REG_ADDR(OM_CMD_DATA2_3)

#define SEC_BUFF_01_START (STB_CBUS_BASE + 0x0e)
#define P_SEC_BUFF_01_START             CBUS_REG_ADDR(SEC_BUFF_01_START)
#define SEC_BUFF_01_START_2 (STB_CBUS_BASE + 0x5e)
#define P_SEC_BUFF_01_START_2           CBUS_REG_ADDR(SEC_BUFF_01_START_2)
#define SEC_BUFF_01_START_3 (STB_CBUS_BASE + 0xae)
#define P_SEC_BUFF_01_START_3           CBUS_REG_ADDR(SEC_BUFF_01_START_3)
#define SEC_BUFF_23_START (STB_CBUS_BASE + 0x0f)
#define P_SEC_BUFF_23_START             CBUS_REG_ADDR(SEC_BUFF_23_START)
#define SEC_BUFF_23_START_2 (STB_CBUS_BASE + 0x5f)
#define P_SEC_BUFF_23_START_2           CBUS_REG_ADDR(SEC_BUFF_23_START_2)
#define SEC_BUFF_23_START_3 (STB_CBUS_BASE + 0xaf)
#define P_SEC_BUFF_23_START_3           CBUS_REG_ADDR(SEC_BUFF_23_START_3)
#define SEC_BUFF_SIZE (STB_CBUS_BASE + 0x10)
#define P_SEC_BUFF_SIZE                 CBUS_REG_ADDR(SEC_BUFF_SIZE)
#define SEC_BUFF_SIZE_2 (STB_CBUS_BASE + 0x60)
#define P_SEC_BUFF_SIZE_2               CBUS_REG_ADDR(SEC_BUFF_SIZE_2)
#define SEC_BUFF_SIZE_3 (STB_CBUS_BASE + 0xb0)
#define P_SEC_BUFF_SIZE_3               CBUS_REG_ADDR(SEC_BUFF_SIZE_3)
#define SEC_BUFF_BUSY (STB_CBUS_BASE + 0x11)
#define P_SEC_BUFF_BUSY                 CBUS_REG_ADDR(SEC_BUFF_BUSY)
#define SEC_BUFF_BUSY_2 (STB_CBUS_BASE + 0x61)
#define P_SEC_BUFF_BUSY_2               CBUS_REG_ADDR(SEC_BUFF_BUSY_2)
#define SEC_BUFF_BUSY_3 (STB_CBUS_BASE + 0xb1)
#define P_SEC_BUFF_BUSY_3               CBUS_REG_ADDR(SEC_BUFF_BUSY_3)
#define SEC_BUFF_READY (STB_CBUS_BASE + 0x12)
#define P_SEC_BUFF_READY                CBUS_REG_ADDR(SEC_BUFF_READY)
#define SEC_BUFF_READY_2 (STB_CBUS_BASE + 0x62)
#define P_SEC_BUFF_READY_2              CBUS_REG_ADDR(SEC_BUFF_READY_2)
#define SEC_BUFF_READY_3 (STB_CBUS_BASE + 0xb2)
#define P_SEC_BUFF_READY_3              CBUS_REG_ADDR(SEC_BUFF_READY_3)
#define SEC_BUFF_NUMBER (STB_CBUS_BASE + 0x13)
#define P_SEC_BUFF_NUMBER               CBUS_REG_ADDR(SEC_BUFF_NUMBER)
#define SEC_BUFF_NUMBER_2 (STB_CBUS_BASE + 0x63)
#define P_SEC_BUFF_NUMBER_2             CBUS_REG_ADDR(SEC_BUFF_NUMBER_2)
#define SEC_BUFF_NUMBER_3 (STB_CBUS_BASE + 0xb3)
#define P_SEC_BUFF_NUMBER_3             CBUS_REG_ADDR(SEC_BUFF_NUMBER_3)


/**no used*/
#define ASSIGN_PID_NUMBER (STB_CBUS_BASE + 0x14)
#define P_ASSIGN_PID_NUMBER             CBUS_REG_ADDR(ASSIGN_PID_NUMBER)
#define ASSIGN_PID_NUMBER_2 (STB_CBUS_BASE + 0x64)
#define P_ASSIGN_PID_NUMBER_2           CBUS_REG_ADDR(ASSIGN_PID_NUMBER_2)
#define ASSIGN_PID_NUMBER_3 (STB_CBUS_BASE + 0xb4)
#define P_ASSIGN_PID_NUMBER_3           CBUS_REG_ADDR(ASSIGN_PID_NUMBER_3)
#define VIDEO_STREAM_ID (STB_CBUS_BASE + 0x15)
#define P_VIDEO_STREAM_ID               CBUS_REG_ADDR(VIDEO_STREAM_ID)
#define VIDEO_STREAM_ID_2 (STB_CBUS_BASE + 0x65)
#define P_VIDEO_STREAM_ID_2             CBUS_REG_ADDR(VIDEO_STREAM_ID_2)
#define VIDEO_STREAM_ID_3 (STB_CBUS_BASE + 0xb5)
#define P_VIDEO_STREAM_ID_3             CBUS_REG_ADDR(VIDEO_STREAM_ID_3)
#define AUDIO_STREAM_ID (STB_CBUS_BASE + 0x16)
#define P_AUDIO_STREAM_ID               CBUS_REG_ADDR(AUDIO_STREAM_ID)
#define AUDIO_STREAM_ID_2 (STB_CBUS_BASE + 0x66)
#define P_AUDIO_STREAM_ID_2             CBUS_REG_ADDR(AUDIO_STREAM_ID_2)
#define AUDIO_STREAM_ID_3 (STB_CBUS_BASE + 0xb6)
#define P_AUDIO_STREAM_ID_3             CBUS_REG_ADDR(AUDIO_STREAM_ID_3)
#define SUB_STREAM_ID (STB_CBUS_BASE + 0x17)
#define P_SUB_STREAM_ID                 CBUS_REG_ADDR(SUB_STREAM_ID)
#define SUB_STREAM_ID_2 (STB_CBUS_BASE + 0x67)
#define P_SUB_STREAM_ID_2               CBUS_REG_ADDR(SUB_STREAM_ID_2)
#define SUB_STREAM_ID_3 (STB_CBUS_BASE + 0xb7)
#define P_SUB_STREAM_ID_3               CBUS_REG_ADDR(SUB_STREAM_ID_3)
#define OTHER_STREAM_ID (STB_CBUS_BASE + 0x18)
#define P_OTHER_STREAM_ID               CBUS_REG_ADDR(OTHER_STREAM_ID)
#define OTHER_STREAM_ID_2 (STB_CBUS_BASE + 0x68)
#define P_OTHER_STREAM_ID_2             CBUS_REG_ADDR(OTHER_STREAM_ID_2)
#define OTHER_STREAM_ID_3 (STB_CBUS_BASE + 0xb8)
#define P_OTHER_STREAM_ID_3             CBUS_REG_ADDR(OTHER_STREAM_ID_3)
#define PCR90K_CTL (STB_CBUS_BASE + 0x19)
#define P_PCR90K_CTL            CBUS_REG_ADDR(PCR90K_CTL)
#define PCR90K_CTL_2 (STB_CBUS_BASE + 0x69)
#define P_PCR90K_CTL_2          CBUS_REG_ADDR(PCR90K_CTL_2)
#define PCR90K_CTL_3 (STB_CBUS_BASE + 0xb9)
#define P_PCR90K_CTL_3          CBUS_REG_ADDR(PCR90K_CTL_3)
/*no used end*/
#define PCR_DEMUX (STB_CBUS_BASE + 0x1a)
#define P_PCR_DEMUX             CBUS_REG_ADDR(PCR_DEMUX)
#define PCR_DEMUX_2 (STB_CBUS_BASE + 0x6a)
#define P_PCR_DEMUX_2           CBUS_REG_ADDR(PCR_DEMUX_2)
#define PCR_DEMUX_3 (STB_CBUS_BASE + 0xba)
#define P_PCR_DEMUX_3           CBUS_REG_ADDR(PCR_DEMUX_3)

#define VIDEO_PTS_DEMUX (STB_CBUS_BASE + 0x1b)
#define P_VIDEO_PTS_DEMUX               CBUS_REG_ADDR(VIDEO_PTS_DEMUX)
#define VIDEO_PTS_DEMUX_2 (STB_CBUS_BASE + 0x6b)
#define P_VIDEO_PTS_DEMUX_2             CBUS_REG_ADDR(VIDEO_PTS_DEMUX_2)
#define VIDEO_PTS_DEMUX_3 (STB_CBUS_BASE + 0xbb)
#define P_VIDEO_PTS_DEMUX_3             CBUS_REG_ADDR(VIDEO_PTS_DEMUX_3)
/*no used*/
#define VIDEO_DTS_DEMUX (STB_CBUS_BASE + 0x1c)
#define P_VIDEO_DTS_DEMUX               CBUS_REG_ADDR(VIDEO_DTS_DEMUX)
#define VIDEO_DTS_DEMUX_2 (STB_CBUS_BASE + 0x6c)
#define P_VIDEO_DTS_DEMUX_2             CBUS_REG_ADDR(VIDEO_DTS_DEMUX_2)
#define VIDEO_DTS_DEMUX_3 (STB_CBUS_BASE + 0xbc)
#define P_VIDEO_DTS_DEMUX_3             CBUS_REG_ADDR(VIDEO_DTS_DEMUX_3)
/*no used end*/
#define AUDIO_PTS_DEMUX (STB_CBUS_BASE + 0x1d)
#define P_AUDIO_PTS_DEMUX               CBUS_REG_ADDR(AUDIO_PTS_DEMUX)
#define AUDIO_PTS_DEMUX_2 (STB_CBUS_BASE + 0x6d)
#define P_AUDIO_PTS_DEMUX_2             CBUS_REG_ADDR(AUDIO_PTS_DEMUX_2)
#define AUDIO_PTS_DEMUX_3 (STB_CBUS_BASE + 0xbd)
#define P_AUDIO_PTS_DEMUX_3             CBUS_REG_ADDR(AUDIO_PTS_DEMUX_3)
/*no used */
#define SUB_PTS_DEMUX (STB_CBUS_BASE + 0x1e)
#define P_SUB_PTS_DEMUX                 CBUS_REG_ADDR(SUB_PTS_DEMUX)
#define SUB_PTS_DEMUX_2 (STB_CBUS_BASE + 0x6e)
#define P_SUB_PTS_DEMUX_2               CBUS_REG_ADDR(SUB_PTS_DEMUX_2)
#define SUB_PTS_DEMUX_3 (STB_CBUS_BASE + 0xbe)
#define P_SUB_PTS_DEMUX_3               CBUS_REG_ADDR(SUB_PTS_DEMUX_3)
/*no used end*/
#define STB_PTS_DTS_STATUS (STB_CBUS_BASE + 0x1f)
#define P_STB_PTS_DTS_STATUS            CBUS_REG_ADDR(STB_PTS_DTS_STATUS)
#define STB_PTS_DTS_STATUS_2 (STB_CBUS_BASE + 0x6f)
#define P_STB_PTS_DTS_STATUS_2          CBUS_REG_ADDR(STB_PTS_DTS_STATUS_2)
#define STB_PTS_DTS_STATUS_3 (STB_CBUS_BASE + 0xbf)
#define P_STB_PTS_DTS_STATUS_3          CBUS_REG_ADDR(STB_PTS_DTS_STATUS_3)

/*no use*/
#define STB_DEBUG_INDEX (STB_CBUS_BASE + 0x20)
#define P_STB_DEBUG_INDEX               CBUS_REG_ADDR(STB_DEBUG_INDEX)
#define STB_DEBUG_INDEX_2 (STB_CBUS_BASE + 0x70)
#define P_STB_DEBUG_INDEX_2             CBUS_REG_ADDR(STB_DEBUG_INDEX_2)
#define STB_DEBUG_INDEX_3 (STB_CBUS_BASE + 0xc0)
#define P_STB_DEBUG_INDEX_3             CBUS_REG_ADDR(STB_DEBUG_INDEX_3)
#define STB_DEBUG_DATAUT_O (STB_CBUS_BASE + 0x21)
#define P_STB_DEBUG_DATAUT_O            CBUS_REG_ADDR(STB_DEBUG_DATAUT_O)
#define STB_DEBUG_DATAUT_O_2 (STB_CBUS_BASE + 0x71)
#define P_STB_DEBUG_DATAUT_O_2          CBUS_REG_ADDR(STB_DEBUG_DATAUT_O_2)
#define STB_DEBUG_DATAUT_O_3 (STB_CBUS_BASE + 0xc1)
#define P_STB_DEBUG_DATAUT_O_3          CBUS_REG_ADDR(STB_DEBUG_DATAUT_O_3)
/*no use end*/

#define STBM_CTL_O (STB_CBUS_BASE + 0x22)
#define P_STBM_CTL_O            CBUS_REG_ADDR(STBM_CTL_O)
#define STBM_CTL_O_2 (STB_CBUS_BASE + 0x72)
#define P_STBM_CTL_O_2          CBUS_REG_ADDR(STBM_CTL_O_2)
#define STBM_CTL_O_3 (STB_CBUS_BASE + 0xc2)
#define P_STBM_CTL_O_3          CBUS_REG_ADDR(STBM_CTL_O_3)
#define STB_INT_STATUS (STB_CBUS_BASE + 0x23)
#define P_STB_INT_STATUS                CBUS_REG_ADDR(STB_INT_STATUS)
#define STB_INT_STATUS_2 (STB_CBUS_BASE + 0x73)
#define P_STB_INT_STATUS_2              CBUS_REG_ADDR(STB_INT_STATUS_2)
#define STB_INT_STATUS_3 (STB_CBUS_BASE + 0xc3)
#define P_STB_INT_STATUS_3              CBUS_REG_ADDR(STB_INT_STATUS_3)
#define DEMUX_ENDIAN (STB_CBUS_BASE + 0x24)
#define P_DEMUX_ENDIAN          CBUS_REG_ADDR(DEMUX_ENDIAN)
#define DEMUX_ENDIAN_2 (STB_CBUS_BASE + 0x74)
#define P_DEMUX_ENDIAN_2                CBUS_REG_ADDR(DEMUX_ENDIAN_2)
#define DEMUX_ENDIAN_3 (STB_CBUS_BASE + 0xc4)
#define P_DEMUX_ENDIAN_3                CBUS_REG_ADDR(DEMUX_ENDIAN_3)
#define TS_HIU_CTL (STB_CBUS_BASE + 0x25)
#define P_TS_HIU_CTL            CBUS_REG_ADDR(TS_HIU_CTL)
#define TS_HIU_CTL_2 (STB_CBUS_BASE + 0x75)
#define P_TS_HIU_CTL_2          CBUS_REG_ADDR(TS_HIU_CTL_2)
#define TS_HIU_CTL_3 (STB_CBUS_BASE + 0xc5)
#define P_TS_HIU_CTL_3          CBUS_REG_ADDR(TS_HIU_CTL_3)

#define SEC_BUFF_BASE (STB_CBUS_BASE + 0x26)
#define P_SEC_BUFF_BASE                 CBUS_REG_ADDR(SEC_BUFF_BASE)
#define SEC_BUFF_BASE_2 (STB_CBUS_BASE + 0x76)
#define P_SEC_BUFF_BASE_2               CBUS_REG_ADDR(SEC_BUFF_BASE_2)
#define SEC_BUFF_BASE_3 (STB_CBUS_BASE + 0xc6)
#define P_SEC_BUFF_BASE_3               CBUS_REG_ADDR(SEC_BUFF_BASE_3)
#define DEMUX_MEM_REQ_EN (STB_CBUS_BASE + 0x27)
#define P_DEMUX_MEM_REQ_EN              CBUS_REG_ADDR(DEMUX_MEM_REQ_EN)
#define DEMUX_MEM_REQ_EN_2 (STB_CBUS_BASE + 0x77)
#define P_DEMUX_MEM_REQ_EN_2            CBUS_REG_ADDR(DEMUX_MEM_REQ_EN_2)
#define DEMUX_MEM_REQ_EN_3 (STB_CBUS_BASE + 0xc7)
#define P_DEMUX_MEM_REQ_EN_3            CBUS_REG_ADDR(DEMUX_MEM_REQ_EN_3)


/*no use*/
#define VIDEO_PDTS_WR_PTR (STB_CBUS_BASE + 0x28)
#define P_VIDEO_PDTS_WR_PTR             CBUS_REG_ADDR(VIDEO_PDTS_WR_PTR)
#define VIDEO_PDTS_WR_PTR_2 (STB_CBUS_BASE + 0x78)
#define P_VIDEO_PDTS_WR_PTR_2           CBUS_REG_ADDR(VIDEO_PDTS_WR_PTR_2)
#define VIDEO_PDTS_WR_PTR_3 (STB_CBUS_BASE + 0xc8)
#define P_VIDEO_PDTS_WR_PTR_3           CBUS_REG_ADDR(VIDEO_PDTS_WR_PTR_3)
#define AUDIO_PDTS_WR_PTR (STB_CBUS_BASE + 0x29)
#define P_AUDIO_PDTS_WR_PTR             CBUS_REG_ADDR(AUDIO_PDTS_WR_PTR)
#define AUDIO_PDTS_WR_PTR_2 (STB_CBUS_BASE + 0x79)
#define P_AUDIO_PDTS_WR_PTR_2           CBUS_REG_ADDR(AUDIO_PDTS_WR_PTR_2)
#define AUDIO_PDTS_WR_PTR_3 (STB_CBUS_BASE + 0xc9)
#define P_AUDIO_PDTS_WR_PTR_3           CBUS_REG_ADDR(AUDIO_PDTS_WR_PTR_3)
#define SUB_WR_PTR (STB_CBUS_BASE + 0x2a)
#define P_SUB_WR_PTR            CBUS_REG_ADDR(SUB_WR_PTR)
#define SUB_WR_PTR_2 (STB_CBUS_BASE + 0x7a)
#define P_SUB_WR_PTR_2          CBUS_REG_ADDR(SUB_WR_PTR_2)
#define SUB_WR_PTR_3 (STB_CBUS_BASE + 0xca)
#define P_SUB_WR_PTR_3          CBUS_REG_ADDR(SUB_WR_PTR_3)
/*no use*/

#define SB_START (STB_CBUS_BASE + 0x2b)
#define P_SB_START              CBUS_REG_ADDR(SB_START)
#define SB_START_2 (STB_CBUS_BASE + 0x7b)
#define P_SB_START_2            CBUS_REG_ADDR(SB_START_2)
#define SB_START_3 (STB_CBUS_BASE + 0xcb)
#define P_SB_START_3            CBUS_REG_ADDR(SB_START_3)
#define SB_LAST_ADDR (STB_CBUS_BASE + 0x2c)
#define P_SB_LAST_ADDR          CBUS_REG_ADDR(SB_LAST_ADDR)
#define SB_LAST_ADDR_2 (STB_CBUS_BASE + 0x7c)
#define P_SB_LAST_ADDR_2                CBUS_REG_ADDR(SB_LAST_ADDR_2)
#define SB_LAST_ADDR_3 (STB_CBUS_BASE + 0xcc)
#define P_SB_LAST_ADDR_3                CBUS_REG_ADDR(SB_LAST_ADDR_3)
#define SB_PES_WR_PTR (STB_CBUS_BASE + 0x2d)
#define P_SB_PES_WR_PTR                 CBUS_REG_ADDR(SB_PES_WR_PTR)
#define SB_PES_WR_PTR_2 (STB_CBUS_BASE + 0x7d)
#define P_SB_PES_WR_PTR_2               CBUS_REG_ADDR(SB_PES_WR_PTR_2)
#define SB_PES_WR_PTR_3 (STB_CBUS_BASE + 0xcd)
#define P_SB_PES_WR_PTR_3               CBUS_REG_ADDR(SB_PES_WR_PTR_3)
#define OTHER_WR_PTR (STB_CBUS_BASE + 0x2e)
#define P_OTHER_WR_PTR          CBUS_REG_ADDR(OTHER_WR_PTR)
#define OTHER_WR_PTR_2 (STB_CBUS_BASE + 0x7e)
#define P_OTHER_WR_PTR_2                CBUS_REG_ADDR(OTHER_WR_PTR_2)
#define OTHER_WR_PTR_3 (STB_CBUS_BASE + 0xce)
#define P_OTHER_WR_PTR_3                CBUS_REG_ADDR(OTHER_WR_PTR_3)

#define OB_START (STB_CBUS_BASE + 0x2f)
#define P_OB_START              CBUS_REG_ADDR(OB_START)
#define OB_START_2 (STB_CBUS_BASE + 0x7f)
#define P_OB_START_2            CBUS_REG_ADDR(OB_START_2)
#define OB_START_3 (STB_CBUS_BASE + 0xcf)
#define P_OB_START_3            CBUS_REG_ADDR(OB_START_3)
#define OB_LAST_ADDR (STB_CBUS_BASE + 0x30)
#define P_OB_LAST_ADDR          CBUS_REG_ADDR(OB_LAST_ADDR)
#define OB_LAST_ADDR_2 (STB_CBUS_BASE + 0x80)
#define P_OB_LAST_ADDR_2                CBUS_REG_ADDR(OB_LAST_ADDR_2)
#define OB_LAST_ADDR_3 (STB_CBUS_BASE + 0xd0)
#define P_OB_LAST_ADDR_3                CBUS_REG_ADDR(OB_LAST_ADDR_3)
#define OB_PES_WR_PTR (STB_CBUS_BASE + 0x31)
#define P_OB_PES_WR_PTR                 CBUS_REG_ADDR(OB_PES_WR_PTR)
#define OB_PES_WR_PTR_2 (STB_CBUS_BASE + 0x81)
#define P_OB_PES_WR_PTR_2               CBUS_REG_ADDR(OB_PES_WR_PTR_2)
#define OB_PES_WR_PTR_3 (STB_CBUS_BASE + 0xd1)
#define P_OB_PES_WR_PTR_3               CBUS_REG_ADDR(OB_PES_WR_PTR_3)
#define STB_INT_MASK (STB_CBUS_BASE + 0x32)
#define P_STB_INT_MASK          CBUS_REG_ADDR(STB_INT_MASK)
#define STB_INT_MASK_2 (STB_CBUS_BASE + 0x82)
#define P_STB_INT_MASK_2                CBUS_REG_ADDR(STB_INT_MASK_2)
#define STB_INT_MASK_3 (STB_CBUS_BASE + 0xd2)
#define P_STB_INT_MASK_3                CBUS_REG_ADDR(STB_INT_MASK_3)
/*no used */
#define VIDEO_SPLICING_CTL (STB_CBUS_BASE + 0x33)
#define P_VIDEO_SPLICING_CTL            CBUS_REG_ADDR(VIDEO_SPLICING_CTL)
#define VIDEO_SPLICING_CTL_2 (STB_CBUS_BASE + 0x83)
#define P_VIDEO_SPLICING_CTL_2          CBUS_REG_ADDR(VIDEO_SPLICING_CTL_2)
#define VIDEO_SPLICING_CTL_3 (STB_CBUS_BASE + 0xd3)
#define P_VIDEO_SPLICING_CTL_3          CBUS_REG_ADDR(VIDEO_SPLICING_CTL_3)
#define AUDIO_SPLICING_CTL (STB_CBUS_BASE + 0x34)
#define P_AUDIO_SPLICING_CTL            CBUS_REG_ADDR(AUDIO_SPLICING_CTL)
#define AUDIO_SPLICING_CTL_2 (STB_CBUS_BASE + 0x84)
#define P_AUDIO_SPLICING_CTL_2          CBUS_REG_ADDR(AUDIO_SPLICING_CTL_2)
#define AUDIO_SPLICING_CTL_3 (STB_CBUS_BASE + 0xd4)
#define P_AUDIO_SPLICING_CTL_3          CBUS_REG_ADDR(AUDIO_SPLICING_CTL_3)
#define TS_PACKAGE_BYTE_COUNT (STB_CBUS_BASE + 0x35)
#define P_TS_PACKAGE_BYTE_COUNT                 \
	CBUS_REG_ADDR(TS_PACKAGE_BYTE_COUNT)
#define TS_PACKAGE_BYTE_COUNT_2 (STB_CBUS_BASE + 0x85)
#define P_TS_PACKAGE_BYTE_COUNT_2               \
	CBUS_REG_ADDR(TS_PACKAGE_BYTE_COUNT_2)
#define TS_PACKAGE_BYTE_COUNT_3 (STB_CBUS_BASE + 0xd5)
#define P_TS_PACKAGE_BYTE_COUNT_3               \
	CBUS_REG_ADDR(TS_PACKAGE_BYTE_COUNT_3)
/*no used end*/

#define PES_STRONG_SYNC (STB_CBUS_BASE + 0x36)
#define P_PES_STRONG_SYNC               CBUS_REG_ADDR(PES_STRONG_SYNC)
#define PES_STRONG_SYNC_2 (STB_CBUS_BASE + 0x86)
#define P_PES_STRONG_SYNC_2             CBUS_REG_ADDR(PES_STRONG_SYNC_2)
#define PES_STRONG_SYNC_3 (STB_CBUS_BASE + 0xd6)
#define P_PES_STRONG_SYNC_3             CBUS_REG_ADDR(PES_STRONG_SYNC_3)

#define OM_DATA_RD_ADDR (STB_CBUS_BASE + 0x37)
#define P_OM_DATA_RD_ADDR               CBUS_REG_ADDR(OM_DATA_RD_ADDR)
#define OM_DATA_RD_ADDR_2 (STB_CBUS_BASE + 0x87)
#define P_OM_DATA_RD_ADDR_2             CBUS_REG_ADDR(OM_DATA_RD_ADDR_2)
#define OM_DATA_RD_ADDR_3 (STB_CBUS_BASE + 0xd7)
#define P_OM_DATA_RD_ADDR_3             CBUS_REG_ADDR(OM_DATA_RD_ADDR_3)
#define OM_DATA_RD (STB_CBUS_BASE + 0x38)
#define P_OM_DATA_RD            CBUS_REG_ADDR(OM_DATA_RD)
#define OM_DATA_RD_2 (STB_CBUS_BASE + 0x88)
#define P_OM_DATA_RD_2          CBUS_REG_ADDR(OM_DATA_RD_2)
#define OM_DATA_RD_3 (STB_CBUS_BASE + 0xd8)
#define P_OM_DATA_RD_3          CBUS_REG_ADDR(OM_DATA_RD_3)

/*no used*/

#define SECTION_AUTO_STOP_3 (STB_CBUS_BASE + 0x39)
#define P_SECTION_AUTO_STOP_3           CBUS_REG_ADDR(SECTION_AUTO_STOP_3)
#define SECTION_AUTO_STOP_3_2 (STB_CBUS_BASE + 0x89)
#define P_SECTION_AUTO_STOP_3_2                 \
	CBUS_REG_ADDR(SECTION_AUTO_STOP_3_2)
#define SECTION_AUTO_STOP_3_3 (STB_CBUS_BASE + 0xd9)
#define P_SECTION_AUTO_STOP_3_3                 \
	CBUS_REG_ADDR(SECTION_AUTO_STOP_3_3)
#define SECTION_AUTO_STOP_2 (STB_CBUS_BASE + 0x3a)
#define P_SECTION_AUTO_STOP_2           \
	CBUS_REG_ADDR(SECTION_AUTO_STOP_2)
#define SECTION_AUTO_STOP_2_2 (STB_CBUS_BASE + 0x8a)
#define P_SECTION_AUTO_STOP_2_2                 \
	CBUS_REG_ADDR(SECTION_AUTO_STOP_2_2)
#define SECTION_AUTO_STOP_2_3 (STB_CBUS_BASE + 0xda)
#define P_SECTION_AUTO_STOP_2_3                 \
	CBUS_REG_ADDR(SECTION_AUTO_STOP_2_3)
#define SECTION_AUTO_STOP_1 (STB_CBUS_BASE + 0x3b)
#define P_SECTION_AUTO_STOP_1           CBUS_REG_ADDR(SECTION_AUTO_STOP_1)
#define SECTION_AUTO_STOP_1_2 (STB_CBUS_BASE + 0x8b)
#define P_SECTION_AUTO_STOP_1_2                 \
	CBUS_REG_ADDR(SECTION_AUTO_STOP_1_2)
#define SECTION_AUTO_STOP_1_3 (STB_CBUS_BASE + 0xdb)
#define P_SECTION_AUTO_STOP_1_3                 \
	CBUS_REG_ADDR(SECTION_AUTO_STOP_1_3)
#define SECTION_AUTO_STOP_0 (STB_CBUS_BASE + 0x3c)
#define P_SECTION_AUTO_STOP_0           \
	CBUS_REG_ADDR(SECTION_AUTO_STOP_0)
#define SECTION_AUTO_STOP_0_2 (STB_CBUS_BASE + 0x8c)
#define P_SECTION_AUTO_STOP_0_2                 \
	CBUS_REG_ADDR(SECTION_AUTO_STOP_0_2)
#define SECTION_AUTO_STOP_0_3 (STB_CBUS_BASE + 0xdc)
#define P_SECTION_AUTO_STOP_0_3                 \
	CBUS_REG_ADDR(SECTION_AUTO_STOP_0_3)

#define DEMUX_CHANNEL_RESET (STB_CBUS_BASE + 0x3d)
#define P_DEMUX_CHANNEL_RESET           \
	CBUS_REG_ADDR(DEMUX_CHANNEL_RESET)
#define DEMUX_CHANNEL_RESET_2 (STB_CBUS_BASE + 0x8d)
#define P_DEMUX_CHANNEL_RESET_2                 \
	CBUS_REG_ADDR(DEMUX_CHANNEL_RESET_2)
#define DEMUX_CHANNEL_RESET_3 (STB_CBUS_BASE + 0xdd)
#define P_DEMUX_CHANNEL_RESET_3                 \
	CBUS_REG_ADDR(DEMUX_CHANNEL_RESET_3)
/*no use end*/
#define DEMUX_SCRAMBLING_STATE (STB_CBUS_BASE + 0x3e)
#define DEMUX_SCRAMBLING_STATE_2 (STB_CBUS_BASE + 0x8e)
#define P_DEMUX_SCRAMBLING_STATE_2              \
	CBUS_REG_ADDR(DEMUX_SCRAMBLING_STATE_2)
#define DEMUX_SCRAMBLING_STATE_3 (STB_CBUS_BASE + 0xde)
#define P_DEMUX_SCRAMBLING_STATE_3              \
	CBUS_REG_ADDR(DEMUX_SCRAMBLING_STATE_3)
#define DEMUX_CHANNEL_ACTIVITY (STB_CBUS_BASE + 0x3f)
#define P_DEMUX_CHANNEL_ACTIVITY                \
	CBUS_REG_ADDR(DEMUX_CHANNEL_ACTIVITY)
#define DEMUX_CHANNEL_ACTIVITY_2 (STB_CBUS_BASE + 0x8f)
#define P_DEMUX_CHANNEL_ACTIVITY_2              \
	CBUS_REG_ADDR(DEMUX_CHANNEL_ACTIVITY_2)
#define DEMUX_CHANNEL_ACTIVITY_3 (STB_CBUS_BASE + 0xdf)
#define P_DEMUX_CHANNEL_ACTIVITY_3              \
	CBUS_REG_ADDR(DEMUX_CHANNEL_ACTIVITY_3)

/*no use*/

#define DEMUX_STAMP_CTL (STB_CBUS_BASE + 0x40)
#define P_DEMUX_STAMP_CTL               CBUS_REG_ADDR(DEMUX_STAMP_CTL)
#define DEMUX_STAMP_CTL_2 (STB_CBUS_BASE + 0x90)
#define P_DEMUX_STAMP_CTL_2             \
	CBUS_REG_ADDR(DEMUX_STAMP_CTL_2)
#define DEMUX_STAMP_CTL_3 (STB_CBUS_BASE + 0xe0)
#define P_DEMUX_STAMP_CTL_3             \
	CBUS_REG_ADDR(DEMUX_STAMP_CTL_3)
#define DEMUX_VIDEO_STAMP_SYNC_0 (STB_CBUS_BASE + 0x41)
#define P_DEMUX_VIDEO_STAMP_SYNC_0              \
	CBUS_REG_ADDR(DEMUX_VIDEO_STAMP_SYNC_0)
#define DEMUX_VIDEO_STAMP_SYNC_0_2 (STB_CBUS_BASE + 0x91)
#define P_DEMUX_VIDEO_STAMP_SYNC_0_2            \
	CBUS_REG_ADDR(DEMUX_VIDEO_STAMP_SYNC_0_2)
#define DEMUX_VIDEO_STAMP_SYNC_0_3 (STB_CBUS_BASE + 0xe1)
#define P_DEMUX_VIDEO_STAMP_SYNC_0_3            \
	CBUS_REG_ADDR(DEMUX_VIDEO_STAMP_SYNC_0_3)
#define DEMUX_VIDEO_STAMP_SYNC_1 (STB_CBUS_BASE + 0x42)
#define P_DEMUX_VIDEO_STAMP_SYNC_1              \
	CBUS_REG_ADDR(DEMUX_VIDEO_STAMP_SYNC_1)
#define DEMUX_VIDEO_STAMP_SYNC_1_2 (STB_CBUS_BASE + 0x92)
#define P_DEMUX_VIDEO_STAMP_SYNC_1_2            \
	CBUS_REG_ADDR(DEMUX_VIDEO_STAMP_SYNC_1_2)
#define DEMUX_VIDEO_STAMP_SYNC_1_3 (STB_CBUS_BASE + 0xe2)
#define P_DEMUX_VIDEO_STAMP_SYNC_1_3            \
	CBUS_REG_ADDR(DEMUX_VIDEO_STAMP_SYNC_1_3)
#define DEMUX_AUDIO_STAMP_SYNC_0 (STB_CBUS_BASE + 0x43)
#define P_DEMUX_AUDIO_STAMP_SYNC_0              \
	CBUS_REG_ADDR(DEMUX_AUDIO_STAMP_SYNC_0)
#define DEMUX_AUDIO_STAMP_SYNC_0_2 (STB_CBUS_BASE + 0x93)
#define P_DEMUX_AUDIO_STAMP_SYNC_0_2            \
	CBUS_REG_ADDR(DEMUX_AUDIO_STAMP_SYNC_0_2)
#define DEMUX_AUDIO_STAMP_SYNC_0_3 (STB_CBUS_BASE + 0xe3)
#define P_DEMUX_AUDIO_STAMP_SYNC_0_3            \
	CBUS_REG_ADDR(DEMUX_AUDIO_STAMP_SYNC_0_3)
#define DEMUX_AUDIO_STAMP_SYNC_1 (STB_CBUS_BASE + 0x44)
#define P_DEMUX_AUDIO_STAMP_SYNC_1              \
	CBUS_REG_ADDR(DEMUX_AUDIO_STAMP_SYNC_1)
#define DEMUX_AUDIO_STAMP_SYNC_1_2 (STB_CBUS_BASE + 0x94)
#define P_DEMUX_AUDIO_STAMP_SYNC_1_2            \
	CBUS_REG_ADDR(DEMUX_AUDIO_STAMP_SYNC_1_2)
#define DEMUX_AUDIO_STAMP_SYNC_1_3 (STB_CBUS_BASE + 0xe4)
#define P_DEMUX_AUDIO_STAMP_SYNC_1_3            \
	CBUS_REG_ADDR(DEMUX_AUDIO_STAMP_SYNC_1_3)
#define DEMUX_SECTION_RESET (STB_CBUS_BASE + 0x45)
#define P_DEMUX_SECTION_RESET           CBUS_REG_ADDR(DEMUX_SECTION_RESET)
#define DEMUX_SECTION_RESET_2 (STB_CBUS_BASE + 0x95)
#define P_DEMUX_SECTION_RESET_2                 \
	CBUS_REG_ADDR(DEMUX_SECTION_RESET_2)
#define DEMUX_SECTION_RESET_3 (STB_CBUS_BASE + 0xe5)
#define P_DEMUX_SECTION_RESET_3                 \
	CBUS_REG_ADDR(DEMUX_SECTION_RESET_3)
/*no use end*/

/*from c_stb_define.h*/
#define COMM_DESC_2_CTL     (STB_CBUS_BASE + 0xff) /*0x16ff*/

#define STB_OM_CTL \
	(STB_CBUS_BASE + DEMUX_1_OFFSET + 0x22) /* 0x1622*/
#define STB_OM_CTL_2 \
	(STB_CBUS_BASE + DEMUX_2_OFFSET + 0x22) /* 0x1672*/
#define STB_OM_CTL_3 \
	(STB_CBUS_BASE + DEMUX_3_OFFSET + 0x22) /* 0x16c2*/

#define DEMUX_INPUT_TIMEOUT_C   \
	(STB_CBUS_BASE + DEMUX_1_OFFSET + 0x46)         /* 0x1646*/
#define DEMUX_INPUT_TIMEOUT_C_2 \
	(STB_CBUS_BASE + DEMUX_2_OFFSET + 0x46)         /* 0x1696*/
#define DEMUX_INPUT_TIMEOUT_C_3 \
	(STB_CBUS_BASE + DEMUX_3_OFFSET + 0x46)         /* 0x16e6*/
/* bit[31] - no_match_reset_timeout_disable*/
/* bit[30:0] input_time_out_int_cnt (0 -- means disable) Wr-setting, Rd-count*/
#define DEMUX_INPUT_TIMEOUT     \
	(STB_CBUS_BASE + DEMUX_1_OFFSET + 0x47)         /* 0x1647*/
#define DEMUX_INPUT_TIMEOUT_2   \
	(STB_CBUS_BASE + DEMUX_2_OFFSET + 0x47)         /* 0x1697*/
#define DEMUX_INPUT_TIMEOUT_3   \
	(STB_CBUS_BASE + DEMUX_3_OFFSET + 0x47)         /* 0x16e7*/

/* bit[31:0] - channel_packet_count_disable*/
#define DEMUX_PACKET_COUNT_C    \
	(STB_CBUS_BASE + DEMUX_1_OFFSET + 0x48)         /* 0x1648*/
#define DEMUX_PACKET_COUNT_C_2  \
	(STB_CBUS_BASE + DEMUX_2_OFFSET + 0x48)         /* 0x1698*/
#define DEMUX_PACKET_COUNT_C_3  \
	(STB_CBUS_BASE + DEMUX_3_OFFSET + 0x48)         /* 0x16e8*/
/* bit[31] - no_match_packet_count_disable*/
/* bit[30:0] input_packet_count*/
#define DEMUX_PACKET_COUNT      \
	(STB_CBUS_BASE + DEMUX_1_OFFSET + 0x49)         /* 0x1649*/
#define DEMUX_PACKET_COUNT_2    \
	(STB_CBUS_BASE + DEMUX_2_OFFSET + 0x49)         /* 0x1699*/
#define DEMUX_PACKET_COUNT_3    \
	(STB_CBUS_BASE + DEMUX_3_OFFSET + 0x49)         /* 0x16e9*/

/* bit[31:0] channel_record_enable*/
#define DEMUX_CHAN_RECORD_EN    \
	(STB_CBUS_BASE + DEMUX_1_OFFSET + 0x4a)         /* 0x164a*/
#define DEMUX_CHAN_RECORD_EN_2  \
	(STB_CBUS_BASE + DEMUX_2_OFFSET + 0x4a)         /* 0x169a*/
#define DEMUX_CHAN_RECORD_EN_3  \
	(STB_CBUS_BASE + DEMUX_3_OFFSET + 0x4a)         /* 0x16ea*/

/* bit[31:0] channel_process_enable*/
#define DEMUX_CHAN_PROCESS_EN   \
	(STB_CBUS_BASE + DEMUX_1_OFFSET + 0x4b)         /* 0x164b*/
#define DEMUX_CHAN_PROCESS_EN_2 \
	(STB_CBUS_BASE + DEMUX_2_OFFSET + 0x4b)         /* 0x169b*/
#define DEMUX_CHAN_PROCESS_EN_3 \
	(STB_CBUS_BASE + DEMUX_3_OFFSET + 0x4b)         /* 0x16eb*/

/* bit[31:24] small_sec_size ((n+1) * 256 Bytes)*/
/* bit[23:16] small_sec_rd_ptr */
/* bit[15:8]  small_sec_wr_ptr */
/* bit[7:2]   reserved*/
/* bit[1] small_sec_wr_ptr_wr_enable*/
/* bit[0] small_section_enable*/
#define DEMUX_SMALL_SEC_CTL     \
	(STB_CBUS_BASE + DEMUX_1_OFFSET + 0x4c)         /* 0x164c*/
#define DEMUX_SMALL_SEC_CTL_2   \
	(STB_CBUS_BASE + DEMUX_2_OFFSET + 0x4c)         /* 0x169c*/
#define DEMUX_SMALL_SEC_CTL_3   \
	(STB_CBUS_BASE + DEMUX_3_OFFSET + 0x4c)         /* 0x16ec*/
/* bit[31:0] small_sec_start_addr*/
#define DEMUX_SMALL_SEC_ADDR    \
	(STB_CBUS_BASE + DEMUX_1_OFFSET + 0x4d)         /* 0x164d*/
#define DEMUX_SMALL_SEC_ADDR_2  \
	(STB_CBUS_BASE + DEMUX_2_OFFSET + 0x4d)         /* 0x169d*/
#define DEMUX_SMALL_SEC_ADDR_3  \
	(STB_CBUS_BASE + DEMUX_3_OFFSET + 0x4d)         /* 0x16ed*/

#endif
