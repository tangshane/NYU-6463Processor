/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/FPGA/GUOYUANFPGA/InstructionMem.vhd";
extern char *IEEE_P_3620187407;

int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_2405820947_3212880686_p_0(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(373, ng0);

LAB3:    t1 = (t0 + 13124);
    t3 = (t0 + 1912);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2405820947_3212880686_p_1(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(375, ng0);

LAB3:    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 592U);
    t3 = *((char **)t1);
    t4 = (31 - 31);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t3 + t6);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 31;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (2 - 31);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t1, t7);
    t13 = (t12 - 0);
    t11 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 299, 1, t12);
    t14 = (32U * t11);
    t15 = (0 + t14);
    t9 = (t2 + t15);
    t16 = (t0 + 1948);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 32U);
    xsi_driver_first_trans_fast_port(t16);

LAB2:    t21 = (t0 + 1868);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2405820947_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2405820947_3212880686_p_0,(void *)work_a_2405820947_3212880686_p_1};
	xsi_register_didat("work_a_2405820947_3212880686", "isim/main_isim_beh.exe.sim/work/a_2405820947_3212880686.didat");
	xsi_register_executes(pe);
}
