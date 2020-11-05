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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Xilinx_Shared/cody_repo/cs152b/lab2/TimerFunctionsTest.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {3U, 0U};
static int ng3[] = {1, 0};
static const char *ng4 = "changing now";



static void Initial_43_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    goto LAB1;

}

static void Always_60_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3496);
    *((int *)t2) = 1;
    t3 = (t0 + 2960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 2736);
    xsi_process_wait(t4, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(61, ng0);
    t6 = (t0 + 1448);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t9) == 0)
        goto LAB7;

LAB9:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;

LAB10:    t16 = (t5 + 4);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (~(t18));
    *((unsigned int *)t5) = t19;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB12;

LAB11:    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 1U);
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 1U);
    t26 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t26, t5, 0, 0, 1, 0LL);
    goto LAB2;

LAB7:    *((unsigned int *)t5) = 1;
    goto LAB10;

LAB12:    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t5) = (t20 | t21);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t22 | t23);
    goto LAB11;

}

static void Always_64_2(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;

LAB0:    t1 = (t0 + 3176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3512);
    *((int *)t2) = 1;
    t3 = (t0 + 3208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 3528);
    *((int *)t4) = 1;
    t5 = (t0 + 3208);
    *((char **)t5) = t4;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(65, ng0);

LAB7:    xsi_set_current_line(65, ng0);
    t6 = (t0 + 1768);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 2, t9, 32);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 2, 0LL);
    xsi_set_current_line(65, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    goto LAB2;

}


extern void work_m_07496693972781992464_3211921897_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Always_60_1,(void *)Always_64_2};
	xsi_register_didat("work_m_07496693972781992464_3211921897", "isim/TimerFunctionsTest_isim_beh.exe.sim/work/m_07496693972781992464_3211921897.didat");
	xsi_register_executes(pe);
}
