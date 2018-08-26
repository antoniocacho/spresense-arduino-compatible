/****************************************************************************
 * mem_layout.h
 *
 *   Copyright 2018 Sony Semiconductor Solutions Corporation
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name of Sony Semiconductor Solutions Corporation nor
 *    the names of its contributors may be used to endorse or promote
 *    products derived from this software without specific prior written
 *    permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef MEM_LAYOUT_H_INCLUDED
#define MEM_LAYOUT_H_INCLUDED

/*
 * Memory devices
 */
/* AUD_SRAM: type=RAM, use=0x0003f440, remainder=0x00000bc0 */
#define AUD_SRAM_ADDR  0x000c0000
#define AUD_SRAM_SIZE  0x00040000

/*
 * Fixed areas
 */
#define AUDIO_WORK_AREA_ALIGN   0x00000008
#define AUDIO_WORK_AREA_ADDR    0x000c0000
#define AUDIO_WORK_AREA_DRM     0x000c0000 /* _DRM is obsolete macro. to use _ADDR */
#define AUDIO_WORK_AREA_SIZE    0x0003c000

#define MSG_QUE_AREA_ALIGN   0x00000008
#define MSG_QUE_AREA_ADDR    0x000fc000
#define MSG_QUE_AREA_DRM     0x000fc000 /* _DRM is obsolete macro. to use _ADDR */
#define MSG_QUE_AREA_SIZE    0x00003140

#define MEMMGR_WORK_AREA_ALIGN   0x00000008
#define MEMMGR_WORK_AREA_ADDR    0x000ff140
#define MEMMGR_WORK_AREA_DRM     0x000ff140 /* _DRM is obsolete macro. to use _ADDR */
#define MEMMGR_WORK_AREA_SIZE    0x00000200

#define MEMMGR_DATA_AREA_ALIGN   0x00000008
#define MEMMGR_DATA_AREA_ADDR    0x000ff340
#define MEMMGR_DATA_AREA_DRM     0x000ff340 /* _DRM is obsolete macro. to use _ADDR */
#define MEMMGR_DATA_AREA_SIZE    0x00000100

/*
 * Memory Manager max work area size
 */
#define MEMMGR_MAX_WORK_SIZE  0x0000010c

/*
 * Pool IDs
 */
#define NULL_POOL  0
#define DEC_ES_MAIN_BUF_POOL  1
#define REND_PCM_BUF_POOL  2
#define REND_PCM_SUB_BUF_POOL  3
#define DEC_APU_CMD_POOL  4
#define DEC_ES_SUB_BUF_POOL  5
#define PF0_PCM_BUF_POOL  6
#define PF1_PCM_BUF_POOL  7
#define PF0_APU_CMD_POOL  8
#define PF1_APU_CMD_POOL  9
#define OUTPUT_BUF_POOL  10
#define MIC_IN_BUF_POOL  11
#define ENC_APU_CMD_POOL  12
#define SRC_APU_CMD_POOL  13
#define I2S_IN_BUF_POOL  14
#define HP_OUT_BUF_POOL  15
#define I2S_OUT_BUF_POOL  16
#define MFE_OUT_BUF_POOL  17

#define NUM_MEM_LAYOUTS  3
#define NUM_MEM_POOLS  18


/*
 * Pool areas
 */
/* Layout0: */
#define MEMMGR_L0_WORK_SIZE   0x0000010c

/* Skip 0x0004 bytes for alignment. */
#define L0_DEC_ES_MAIN_BUF_POOL_ALIGN    0x00000008
#define L0_DEC_ES_MAIN_BUF_POOL_L_FENCE  0x000c0004
#define L0_DEC_ES_MAIN_BUF_POOL_ADDR     0x000c0008
#define L0_DEC_ES_MAIN_BUF_POOL_SIZE     0x00006000
#define L0_DEC_ES_MAIN_BUF_POOL_U_FENCE  0x000c6008
#define L0_DEC_ES_MAIN_BUF_POOL_NUM_SEG  0x00000004
#define L0_DEC_ES_MAIN_BUF_POOL_SEG_SIZE 0x00001800

#define L0_REND_PCM_BUF_POOL_ALIGN    0x00000008
#define L0_REND_PCM_BUF_POOL_L_FENCE  0x000c600c
#define L0_REND_PCM_BUF_POOL_ADDR     0x000c6010
#define L0_REND_PCM_BUF_POOL_SIZE     0x00012000
#define L0_REND_PCM_BUF_POOL_U_FENCE  0x000d8010
#define L0_REND_PCM_BUF_POOL_NUM_SEG  0x00000009
#define L0_REND_PCM_BUF_POOL_SEG_SIZE 0x00002000

#define L0_REND_PCM_SUB_BUF_POOL_ALIGN    0x00000008
#define L0_REND_PCM_SUB_BUF_POOL_L_FENCE  0x000d8014
#define L0_REND_PCM_SUB_BUF_POOL_ADDR     0x000d8018
#define L0_REND_PCM_SUB_BUF_POOL_SIZE     0x00012000
#define L0_REND_PCM_SUB_BUF_POOL_U_FENCE  0x000ea018
#define L0_REND_PCM_SUB_BUF_POOL_NUM_SEG  0x00000009
#define L0_REND_PCM_SUB_BUF_POOL_SEG_SIZE 0x00002000

#define L0_DEC_APU_CMD_POOL_ALIGN    0x00000008
#define L0_DEC_APU_CMD_POOL_L_FENCE  0x000ea01c
#define L0_DEC_APU_CMD_POOL_ADDR     0x000ea020
#define L0_DEC_APU_CMD_POOL_SIZE     0x00000398
#define L0_DEC_APU_CMD_POOL_U_FENCE  0x000ea3b8
#define L0_DEC_APU_CMD_POOL_NUM_SEG  0x0000000a
#define L0_DEC_APU_CMD_POOL_SEG_SIZE 0x0000005c

#define L0_DEC_ES_SUB_BUF_POOL_ALIGN    0x00000008
#define L0_DEC_ES_SUB_BUF_POOL_L_FENCE  0x000ea3bc
#define L0_DEC_ES_SUB_BUF_POOL_ADDR     0x000ea3c0
#define L0_DEC_ES_SUB_BUF_POOL_SIZE     0x00003000
#define L0_DEC_ES_SUB_BUF_POOL_U_FENCE  0x000ed3c0
#define L0_DEC_ES_SUB_BUF_POOL_NUM_SEG  0x00000004
#define L0_DEC_ES_SUB_BUF_POOL_SEG_SIZE 0x00000c00

#define L0_PF0_PCM_BUF_POOL_ALIGN    0x00000008
#define L0_PF0_PCM_BUF_POOL_L_FENCE  0x000ed3c4
#define L0_PF0_PCM_BUF_POOL_ADDR     0x000ed3c8
#define L0_PF0_PCM_BUF_POOL_SIZE     0x00002008
#define L0_PF0_PCM_BUF_POOL_U_FENCE  0x000ef3d0
#define L0_PF0_PCM_BUF_POOL_NUM_SEG  0x00000001
#define L0_PF0_PCM_BUF_POOL_SEG_SIZE 0x00002008

#define L0_PF1_PCM_BUF_POOL_ALIGN    0x00000008
#define L0_PF1_PCM_BUF_POOL_L_FENCE  0x000ef3d4
#define L0_PF1_PCM_BUF_POOL_ADDR     0x000ef3d8
#define L0_PF1_PCM_BUF_POOL_SIZE     0x00002008
#define L0_PF1_PCM_BUF_POOL_U_FENCE  0x000f13e0
#define L0_PF1_PCM_BUF_POOL_NUM_SEG  0x00000001
#define L0_PF1_PCM_BUF_POOL_SEG_SIZE 0x00002008

#define L0_PF0_APU_CMD_POOL_ALIGN    0x00000008
#define L0_PF0_APU_CMD_POOL_L_FENCE  0x000f13e4
#define L0_PF0_APU_CMD_POOL_ADDR     0x000f13e8
#define L0_PF0_APU_CMD_POOL_SIZE     0x00000398
#define L0_PF0_APU_CMD_POOL_U_FENCE  0x000f1780
#define L0_PF0_APU_CMD_POOL_NUM_SEG  0x0000000a
#define L0_PF0_APU_CMD_POOL_SEG_SIZE 0x0000005c

#define L0_PF1_APU_CMD_POOL_ALIGN    0x00000008
#define L0_PF1_APU_CMD_POOL_L_FENCE  0x000f1784
#define L0_PF1_APU_CMD_POOL_ADDR     0x000f1788
#define L0_PF1_APU_CMD_POOL_SIZE     0x00000398
#define L0_PF1_APU_CMD_POOL_U_FENCE  0x000f1b20
#define L0_PF1_APU_CMD_POOL_NUM_SEG  0x0000000a
#define L0_PF1_APU_CMD_POOL_SEG_SIZE 0x0000005c

/* Remainder AUDIO_WORK_AREA=0x0000a4dc */

/* Layout1: */
#define MEMMGR_L1_WORK_SIZE   0x00000060

/* Skip 0x0004 bytes for alignment. */
#define L1_OUTPUT_BUF_POOL_ALIGN    0x00000008
#define L1_OUTPUT_BUF_POOL_L_FENCE  0x000c0004
#define L1_OUTPUT_BUF_POOL_ADDR     0x000c0008
#define L1_OUTPUT_BUF_POOL_SIZE     0x00003000
#define L1_OUTPUT_BUF_POOL_U_FENCE  0x000c3008
#define L1_OUTPUT_BUF_POOL_NUM_SEG  0x00000002
#define L1_OUTPUT_BUF_POOL_SEG_SIZE 0x00001800

#define L1_MIC_IN_BUF_POOL_ALIGN    0x00000008
#define L1_MIC_IN_BUF_POOL_L_FENCE  0x000c300c
#define L1_MIC_IN_BUF_POOL_ADDR     0x000c3010
#define L1_MIC_IN_BUF_POOL_SIZE     0x00014000
#define L1_MIC_IN_BUF_POOL_U_FENCE  0x000d7010
#define L1_MIC_IN_BUF_POOL_NUM_SEG  0x00000005
#define L1_MIC_IN_BUF_POOL_SEG_SIZE 0x00004000

#define L1_ENC_APU_CMD_POOL_ALIGN    0x00000008
#define L1_ENC_APU_CMD_POOL_L_FENCE  0x000d7014
#define L1_ENC_APU_CMD_POOL_ADDR     0x000d7018
#define L1_ENC_APU_CMD_POOL_SIZE     0x00000114
#define L1_ENC_APU_CMD_POOL_U_FENCE  0x000d712c
#define L1_ENC_APU_CMD_POOL_NUM_SEG  0x00000003
#define L1_ENC_APU_CMD_POOL_SEG_SIZE 0x0000005c

/* Skip 0x0004 bytes for alignment. */
#define L1_SRC_APU_CMD_POOL_ALIGN    0x00000008
#define L1_SRC_APU_CMD_POOL_L_FENCE  0x000d7134
#define L1_SRC_APU_CMD_POOL_ADDR     0x000d7138
#define L1_SRC_APU_CMD_POOL_SIZE     0x00000114
#define L1_SRC_APU_CMD_POOL_U_FENCE  0x000d724c
#define L1_SRC_APU_CMD_POOL_NUM_SEG  0x00000003
#define L1_SRC_APU_CMD_POOL_SEG_SIZE 0x0000005c

/* Remainder AUDIO_WORK_AREA=0x00024db0 */

/* Layout2: */
#define MEMMGR_L2_WORK_SIZE   0x00000090

/* Skip 0x0004 bytes for alignment. */
#define L2_MIC_IN_BUF_POOL_ALIGN    0x00000008
#define L2_MIC_IN_BUF_POOL_L_FENCE  0x000c0004
#define L2_MIC_IN_BUF_POOL_ADDR     0x000c0008
#define L2_MIC_IN_BUF_POOL_SIZE     0x00000960
#define L2_MIC_IN_BUF_POOL_U_FENCE  0x000c0968
#define L2_MIC_IN_BUF_POOL_NUM_SEG  0x00000005
#define L2_MIC_IN_BUF_POOL_SEG_SIZE 0x000001e0

#define L2_I2S_IN_BUF_POOL_ALIGN    0x00000008
#define L2_I2S_IN_BUF_POOL_L_FENCE  0x000c096c
#define L2_I2S_IN_BUF_POOL_ADDR     0x000c0970
#define L2_I2S_IN_BUF_POOL_SIZE     0x000012c0
#define L2_I2S_IN_BUF_POOL_U_FENCE  0x000c1c30
#define L2_I2S_IN_BUF_POOL_NUM_SEG  0x00000005
#define L2_I2S_IN_BUF_POOL_SEG_SIZE 0x000003c0

#define L2_HP_OUT_BUF_POOL_ALIGN    0x00000008
#define L2_HP_OUT_BUF_POOL_L_FENCE  0x000c1c34
#define L2_HP_OUT_BUF_POOL_ADDR     0x000c1c38
#define L2_HP_OUT_BUF_POOL_SIZE     0x000012c0
#define L2_HP_OUT_BUF_POOL_U_FENCE  0x000c2ef8
#define L2_HP_OUT_BUF_POOL_NUM_SEG  0x00000005
#define L2_HP_OUT_BUF_POOL_SEG_SIZE 0x000003c0

#define L2_I2S_OUT_BUF_POOL_ALIGN    0x00000008
#define L2_I2S_OUT_BUF_POOL_L_FENCE  0x000c2efc
#define L2_I2S_OUT_BUF_POOL_ADDR     0x000c2f00
#define L2_I2S_OUT_BUF_POOL_SIZE     0x000012c0
#define L2_I2S_OUT_BUF_POOL_U_FENCE  0x000c41c0
#define L2_I2S_OUT_BUF_POOL_NUM_SEG  0x00000005
#define L2_I2S_OUT_BUF_POOL_SEG_SIZE 0x000003c0

#define L2_MFE_OUT_BUF_POOL_ALIGN    0x00000008
#define L2_MFE_OUT_BUF_POOL_L_FENCE  0x000c41c4
#define L2_MFE_OUT_BUF_POOL_ADDR     0x000c41c8
#define L2_MFE_OUT_BUF_POOL_SIZE     0x00000500
#define L2_MFE_OUT_BUF_POOL_U_FENCE  0x000c46c8
#define L2_MFE_OUT_BUF_POOL_NUM_SEG  0x00000008
#define L2_MFE_OUT_BUF_POOL_SEG_SIZE 0x000000a0

/* Remainder AUDIO_WORK_AREA=0x00037934 */

#endif /* MEM_LAYOUT_H_INCLUDED */