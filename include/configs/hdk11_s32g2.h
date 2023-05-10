/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright 2023 Continental Automotive Technologies GmbH
 */
#pragma once

#define PRINTK_TTY "ttyLF1"
#define S32CC_BOARD_SPECIFIC_IP         "192.168.0.144"

#include <configs/s32g2.h>

#define EXTRA_BOOTCOMMAND		PFE_INIT_CMD
#define EXTRA_BOOT_ARGS			PFE_EXTRA_BOOT_ARGS
#define FDT_FILE			"hdk11_base.dtb"

#ifdef CONFIG_FSL_PFENG
#  define PFENG_MODE			"enable,none,none,rgmii"
#  define PFENG_EMAC			"2"
#endif


