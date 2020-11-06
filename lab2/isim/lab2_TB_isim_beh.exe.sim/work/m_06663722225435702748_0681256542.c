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
static const char *ng0 = "/home/ise/Xilinx_Shared/cody_repo/cs152b/lab2/lab2.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};



static void Always_62_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 5368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 6432);
    *((int *)t2) = 1;
    t3 = (t0 + 5400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 2616U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(64, ng0);

LAB13:    xsi_set_current_line(65, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Always_70_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 5616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 6448);
    *((int *)t2) = 1;
    t3 = (t0 + 5648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 2296U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(74, ng0);

LAB10:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 6464);
    *((int *)t2) = 1;
    t3 = (t0 + 5648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    xsi_set_current_line(71, ng0);

LAB9:    xsi_set_current_line(72, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB11:    xsi_set_current_line(75, ng0);

LAB12:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 3976);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_82_2(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 5864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 6480);
    *((int *)t2) = 1;
    t3 = (t0 + 5896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 3816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(86, ng0);
    t9 = (t0 + 2456U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB27;

LAB24:    if (t23 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t11) = 1;

LAB27:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(88, ng0);

LAB32:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB30:    goto LAB23;

LAB9:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 4296);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB36;

LAB33:    if (t23 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t11) = 1;

LAB36:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(97, ng0);

LAB41:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB39:    goto LAB23;

LAB15:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 2456U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB45;

LAB42:    if (t23 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t11) = 1;

LAB45:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(104, ng0);

LAB50:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB48:    goto LAB23;

LAB19:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB23;

LAB21:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB23;

LAB26:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(86, ng0);

LAB31:    xsi_set_current_line(87, ng0);
    t33 = ((char*)((ng1)));
    t34 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 3, 0LL);
    goto LAB30;

LAB35:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(94, ng0);

LAB40:    xsi_set_current_line(95, ng0);
    t26 = ((char*)((ng5)));
    t27 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 3, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB39;

LAB44:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(102, ng0);

LAB49:    xsi_set_current_line(103, ng0);
    t12 = ((char*)((ng7)));
    t13 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 3, 0LL);
    goto LAB48;

}

static void Always_113_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 6496);
    *((int *)t2) = 1;
    t3 = (t0 + 6144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(114, ng0);

LAB5:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 3976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(116, ng0);

LAB24:    xsi_set_current_line(117, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB23;

LAB9:    xsi_set_current_line(125, ng0);

LAB25:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(133, ng0);

LAB26:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(141, ng0);

LAB27:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(149, ng0);

LAB28:    xsi_set_current_line(150, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(157, ng0);

LAB29:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(165, ng0);

LAB30:    xsi_set_current_line(166, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB23;

LAB21:    xsi_set_current_line(173, ng0);

LAB31:    xsi_set_current_line(174, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB23;

}


extern void work_m_06663722225435702748_0681256542_init()
{
	static char *pe[] = {(void *)Always_62_0,(void *)Always_70_1,(void *)Always_82_2,(void *)Always_113_3};
	xsi_register_didat("work_m_06663722225435702748_0681256542", "isim/lab2_TB_isim_beh.exe.sim/work/m_06663722225435702748_0681256542.didat");
	xsi_register_executes(pe);
}
