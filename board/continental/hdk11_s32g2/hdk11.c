#include <common.h>
#include <asm/io.h>
#include <dm/uclass.h>
#include <generic-phy.h>
#include <dm/device.h>
#include <dm/device-internal.h>

#define PER_GROUP0_BASE			(0x40000000UL)
#define SIUL2_0_BASE_ADDR		(PER_GROUP0_BASE + 0x009C000)
#define SIUL2_0_MSCR_BASE		(SIUL2_0_BASE_ADDR + 0x00000240)
#define SIUL2_0_MSCRn(i)		(SIUL2_0_MSCR_BASE + 4 * (i))

#define SIUL2_MSCR_MUX_MODE_ALT0	(0x0)
#define SIUL2_MSCR_S32_G1_OBE_EN	(1 << 21)

// HACK: let dm do the gpio setup
int board_early_init_f(void)
{
    	/* /\* TI LM5141 5V Buck pwron - pmx & enable *\/ */
	/* writel((SIUL2_MSCR_MUX_MODE_ALT0 | */
	/* 	SIUL2_MSCR_S32_G1_OBE_EN), */
	/*        SIUL2_0_MSCRn(8)); */
	/* writeb(0x1, SIUL2_0_BASE_ADDR + 0x130B); */
	/* mdelay(100); */

	/* /\* NXP PF8200 PMIC pwron - pmx & enable *\/ */
	/* writel((SIUL2_MSCR_MUX_MODE_ALT0 | */
	/* 	SIUL2_MSCR_S32_G1_OBE_EN), */
	/*        SIUL2_0_MSCRn(18)); */
	/* writeb(0x1, SIUL2_0_BASE_ADDR + 0x1311); */
	/* mdelay(100); */

	/* /\* Realtek RTL9075A reset - pmx & enable *\/ */
	/* writel((SIUL2_MSCR_MUX_MODE_ALT0 | */
	/* 	SIUL2_MSCR_S32_G1_OBE_EN), */
	/*        SIUL2_0_MSCRn(14)); */
	/* writeb(0x1, SIUL2_0_BASE_ADDR + 0x130D); */
	/* mdelay(200); */
	return 0;
}

int misc_init_r(void)
{
    return 0;
}

