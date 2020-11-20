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
static const char *ng0 = "/home/ise/Xilinx_shared/cs152b/lab3/MedianFilter.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};
static int ng3[] = {1, 0};
static int ng4[] = {24, 0};
static int ng5[] = {32, 0};
static const char *ng6 = "/home/ise/Xilinx_shared/cs152b/lab3/brightness.v";
static int ng7[] = {255, 0};



static int sp_return_median(char *t1, char *t2)
{
    char t8[8];
    char t14[8];
    char t25[8];
    char t30[8];
    char t40[8];
    char t51[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;

LAB0:    t0 = 1;
    xsi_set_current_line(10, ng0);

LAB2:    xsi_set_current_line(11, ng0);
    t3 = (t1 + 5600);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 6560);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 73);
    xsi_set_current_line(12, ng0);
    xsi_set_current_line(12, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 6080);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 6080);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 880);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t5, 32, t7, 32);
    t6 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(29, ng0);
    t3 = (t1 + 1016);
    t4 = *((char **)t3);
    t3 = (t1 + 6560);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6560);
    t15 = (t7 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    t18 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t8, 32, t6, ((int*)(t16)), 2, t17, 32, 1, t18, 32, 1, 1);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t4, 32, t8, 32);
    t19 = (t1 + 6560);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 6560);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t26 = ((char*)((ng5)));
    t27 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t25, 32, t21, ((int*)(t24)), 2, t26, 32, 1, t27, 32, 1, 1);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t14, 32, t25, 32);
    t28 = (t1 + 1016);
    t29 = *((char **)t28);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_rshift(t40, 32, t30, 32, t29, 32);
    t28 = (t1 + 5440);
    xsi_vlogvar_assign_value(t28, t40, 0, 0, 8);
    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(12, ng0);

LAB6:    xsi_set_current_line(13, ng0);
    t15 = (t1 + 6560);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 6560);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t1 + 6080);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_signed_multiply(t25, 32, t23, 32, t24, 32);
    t26 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t14, 8, t17, ((int*)(t20)), 2, t25, 32, 1, t26, 32, 1, 1);
    t27 = (t1 + 5760);
    xsi_vlogvar_assign_value(t27, t14, 0, 0, 8);
    xsi_set_current_line(14, ng0);
    t3 = (t1 + 6080);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 6400);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(15, ng0);
    xsi_set_current_line(15, ng0);
    t3 = (t1 + 6080);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t6, 32);
    t7 = (t1 + 6240);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);

LAB7:    t3 = (t1 + 6240);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 880);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t5, 32, t7, 32);
    t6 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(22, ng0);
    t3 = (t1 + 6560);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 6560);
    t7 = (t6 + 72U);
    t15 = *((char **)t7);
    t16 = (t1 + 6080);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_multiply(t14, 32, t18, 32, t19, 32);
    t20 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t8, 8, t5, ((int*)(t15)), 2, t14, 32, 1, t20, 32, 1, 1);
    t21 = (t1 + 5920);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 8);
    xsi_set_current_line(23, ng0);
    t3 = (t1 + 5760);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 6560);
    t7 = (t1 + 6560);
    t15 = (t7 + 72U);
    t16 = *((char **)t15);
    t17 = (t1 + 6080);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_signed_multiply(t30, 32, t19, 32, t20, 32);
    t21 = ((char*)((ng2)));
    xsi_vlog_convert_indexed_partindices(t8, t14, t25, ((int*)(t16)), 2, t30, 32, 1, t21, 32, 1, 1);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t22);
    t54 = (!(t9));
    t23 = (t14 + 4);
    t10 = *((unsigned int *)t23);
    t55 = (!(t10));
    t56 = (t54 && t55);
    t24 = (t25 + 4);
    t11 = *((unsigned int *)t24);
    t57 = (!(t11));
    t58 = (t56 && t57);
    if (t58 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(24, ng0);
    t3 = (t1 + 5920);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 6560);
    t7 = (t1 + 6560);
    t15 = (t7 + 72U);
    t16 = *((char **)t15);
    t17 = (t1 + 6400);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_signed_multiply(t30, 32, t19, 32, t20, 32);
    t21 = ((char*)((ng2)));
    xsi_vlog_convert_indexed_partindices(t8, t14, t25, ((int*)(t16)), 2, t30, 32, 1, t21, 32, 1, 1);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t22);
    t54 = (!(t9));
    t23 = (t14 + 4);
    t10 = *((unsigned int *)t23);
    t55 = (!(t10));
    t56 = (t54 && t55);
    t24 = (t25 + 4);
    t11 = *((unsigned int *)t24);
    t57 = (!(t11));
    t58 = (t56 && t57);
    if (t58 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(12, ng0);
    t3 = (t1 + 6080);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t6, 32);
    t7 = (t1 + 6080);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB3;

LAB8:    xsi_set_current_line(15, ng0);

LAB10:    xsi_set_current_line(16, ng0);
    t15 = (t1 + 5760);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 6560);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 6560);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t1 + 6240);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_signed_multiply(t25, 32, t27, 32, t28, 32);
    t29 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t14, 8, t20, ((int*)(t23)), 2, t25, 32, 1, t29, 32, 1, 1);
    memset(t30, 0, 8);
    t31 = (t17 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB12;

LAB11:    t32 = (t14 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t17) > *((unsigned int *)t14))
        goto LAB13;

LAB14:    t34 = (t30 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB16;

LAB17:
LAB18:    xsi_set_current_line(15, ng0);
    t3 = (t1 + 6240);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t5, 32, t6, 32);
    t7 = (t1 + 6240);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB7;

LAB12:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t30) = 1;
    goto LAB14;

LAB16:    xsi_set_current_line(16, ng0);

LAB19:    xsi_set_current_line(17, ng0);
    t41 = (t1 + 6560);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t1 + 6560);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t1 + 6240);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng2)));
    memset(t51, 0, 8);
    xsi_vlog_signed_multiply(t51, 32, t49, 32, t50, 32);
    t52 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t40, 8, t43, ((int*)(t46)), 2, t51, 32, 1, t52, 32, 1, 1);
    t53 = (t1 + 5760);
    xsi_vlogvar_assign_value(t53, t40, 0, 0, 8);
    xsi_set_current_line(18, ng0);
    t3 = (t1 + 6240);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 6400);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB18;

LAB20:    t12 = *((unsigned int *)t25);
    t59 = (t12 + 0);
    t13 = *((unsigned int *)t8);
    t35 = *((unsigned int *)t14);
    t60 = (t13 - t35);
    t61 = (t60 + 1);
    xsi_vlogvar_assign_value(t6, t5, t59, *((unsigned int *)t14), t61);
    goto LAB21;

LAB22:    t12 = *((unsigned int *)t25);
    t59 = (t12 + 0);
    t13 = *((unsigned int *)t8);
    t35 = *((unsigned int *)t14);
    t60 = (t13 - t35);
    t61 = (t60 + 1);
    xsi_vlogvar_assign_value(t6, t5, t59, *((unsigned int *)t14), t61);
    goto LAB23;

}

static void Initial_61_0(char *t0)
{
    char t6[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;

LAB0:    xsi_set_current_line(61, ng6);

LAB2:    xsi_set_current_line(65, ng6);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4000);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 9);
    xsi_set_current_line(66, ng6);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4160);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 9);
    xsi_set_current_line(67, ng6);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4320);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 9);
    xsi_set_current_line(68, ng6);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4480);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 9);
    xsi_set_current_line(69, ng6);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4640);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 9);
    xsi_set_current_line(70, ng6);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4800);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 9);
    xsi_set_current_line(73, ng6);
    xsi_set_current_line(73, ng6);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4960);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 4960);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t3, 32, t5, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(80, ng6);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5280);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(81, ng6);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3520);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng6);

LAB6:    xsi_set_current_line(74, ng6);
    xsi_set_current_line(74, ng6);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 5120);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);

LAB7:    t1 = (t0 + 5120);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 608);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t3, 32, t5, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(73, ng6);
    t1 = (t0 + 4960);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 4960);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB8:    xsi_set_current_line(74, ng6);

LAB10:    xsi_set_current_line(75, ng6);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 3680);
    t16 = (t0 + 3680);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3680);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 4960);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 5120);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 2, t24, 32, 1, t27, 32, 1);
    t28 = (t14 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(76, ng6);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3840);
    t3 = (t0 + 3840);
    t4 = (t3 + 72U);
    t5 = *((char **)t4);
    t12 = (t0 + 3840);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t17 = (t0 + 4960);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 5120);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t6, t14, t5, t16, 2, 2, t19, 32, 1, t22, 32, 1);
    t23 = (t6 + 4);
    t7 = *((unsigned int *)t23);
    t30 = (!(t7));
    t24 = (t14 + 4);
    t8 = *((unsigned int *)t24);
    t33 = (!(t8));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(74, ng6);
    t1 = (t0 + 5120);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 5120);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB7;

LAB11:    t35 = *((unsigned int *)t14);
    t36 = *((unsigned int *)t15);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t38);
    goto LAB12;

LAB13:    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t14);
    t37 = (t9 - t10);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t14), t38);
    goto LAB14;

}

static void Always_84_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t46[8];
    char t48[8];
    char t73[8];
    char t82[8];
    char t90[8];
    char t98[8];
    char t144[8];
    char t159[8];
    char t160[8];
    char t172[8];
    char t173[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t143;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    char *t174;
    char *t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    unsigned int t187;
    char *t188;
    unsigned int t189;
    int t190;
    int t191;
    unsigned int t192;
    unsigned int t193;
    int t194;
    int t195;

LAB0:    t1 = (t0 + 7720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng6);
    t2 = (t0 + 8040);
    *((int *)t2) = 1;
    t3 = (t0 + 7752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng6);

LAB5:    xsi_set_current_line(87, ng6);
    t4 = (t0 + 2320U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(102, ng6);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t2) == 0)
        goto LAB30;

LAB32:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB33:    memset(t14, 0, 8);
    t5 = (t13 + 4);
    t28 = *((unsigned int *)t5);
    t31 = (~(t28));
    t34 = *((unsigned int *)t13);
    t35 = (t34 & t31);
    t38 = (t35 & 1U);
    if (t38 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t5) != 0)
        goto LAB36;

LAB37:    t12 = (t14 + 4);
    t39 = *((unsigned int *)t14);
    t40 = *((unsigned int *)t12);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB38;

LAB39:    memcpy(t48, t14, 8);

LAB40:    memset(t73, 0, 8);
    t23 = (t48 + 4);
    t74 = *((unsigned int *)t23);
    t75 = (~(t74));
    t76 = *((unsigned int *)t48);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t23) != 0)
        goto LAB50;

LAB51:    t25 = (t73 + 4);
    t79 = *((unsigned int *)t73);
    t80 = *((unsigned int *)t25);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB52;

LAB53:    memcpy(t98, t73, 8);

LAB54:    t128 = (t98 + 4);
    t129 = *((unsigned int *)t128);
    t130 = (~(t129));
    t131 = *((unsigned int *)t98);
    t132 = (t131 & t130);
    t133 = (t132 != 0);
    if (t133 > 0)
        goto LAB66;

LAB67:
LAB68:    xsi_set_current_line(134, ng6);
    t2 = (t0 + 3520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t5) != 0)
        goto LAB123;

LAB124:    t12 = (t13 + 4);
    t28 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t12);
    t34 = (t28 || t31);
    if (t34 > 0)
        goto LAB125;

LAB126:    memcpy(t48, t13, 8);

LAB127:    t27 = (t48 + 4);
    t74 = *((unsigned int *)t27);
    t75 = (~(t74));
    t76 = *((unsigned int *)t48);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB139;

LAB140:
LAB141:    goto LAB2;

LAB6:    xsi_set_current_line(87, ng6);

LAB9:    xsi_set_current_line(88, ng6);
    t11 = (t0 + 2160U);
    t12 = *((char **)t11);
    t11 = (t0 + 3680);
    t15 = (t0 + 3680);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 3680);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 4000);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 4160);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 2, t23, 9, 2, t26, 9, 2);
    t27 = (t13 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t14 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(89, ng6);
    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t13 + 4);
    t15 = (t12 + 4);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t15);
    t28 = (t9 ^ t10);
    t31 = (t8 | t28);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t15);
    t38 = (t34 | t35);
    t39 = (~(t38));
    t40 = (t31 & t39);
    if (t40 != 0)
        goto LAB15;

LAB12:    if (t38 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t14) = 1;

LAB15:    t17 = (t14 + 4);
    t41 = *((unsigned int *)t17);
    t42 = (~(t41));
    t43 = *((unsigned int *)t14);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(96, ng6);

LAB29:    xsi_set_current_line(97, ng6);
    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 4000);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 9);

LAB18:    goto LAB8;

LAB10:    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t12, 0, *((unsigned int *)t14), t37);
    goto LAB11;

LAB14:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(89, ng6);

LAB19:    xsi_set_current_line(90, ng6);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 4000);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 9);
    xsi_set_current_line(91, ng6);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 608);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t13 + 4);
    t15 = (t12 + 4);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t15);
    t28 = (t9 ^ t10);
    t31 = (t8 | t28);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t15);
    t38 = (t34 | t35);
    t39 = (~(t38));
    t40 = (t31 & t39);
    if (t40 != 0)
        goto LAB23;

LAB20:    if (t38 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t14) = 1;

LAB23:    t17 = (t14 + 4);
    t41 = *((unsigned int *)t17);
    t42 = (~(t41));
    t43 = *((unsigned int *)t14);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(93, ng6);

LAB28:    xsi_set_current_line(94, ng6);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 4160);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 9);

LAB26:    goto LAB18;

LAB22:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(91, ng6);

LAB27:    xsi_set_current_line(92, ng6);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 4160);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 9);
    goto LAB26;

LAB30:    *((unsigned int *)t13) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t14) = 1;
    goto LAB37;

LAB36:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB37;

LAB38:    t15 = (t0 + 2480U);
    t16 = *((char **)t15);
    memset(t46, 0, 8);
    t15 = (t16 + 4);
    t42 = *((unsigned int *)t15);
    t43 = (~(t42));
    t44 = *((unsigned int *)t16);
    t45 = (t44 & t43);
    t47 = (t45 & 1U);
    if (t47 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t15) != 0)
        goto LAB43;

LAB44:    t49 = *((unsigned int *)t14);
    t50 = *((unsigned int *)t46);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t18 = (t14 + 4);
    t19 = (t46 + 4);
    t20 = (t48 + 4);
    t52 = *((unsigned int *)t18);
    t53 = *((unsigned int *)t19);
    t54 = (t52 | t53);
    *((unsigned int *)t20) = t54;
    t55 = *((unsigned int *)t20);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB40;

LAB41:    *((unsigned int *)t46) = 1;
    goto LAB44;

LAB43:    t17 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB44;

LAB45:    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t20);
    *((unsigned int *)t48) = (t57 | t58);
    t21 = (t14 + 4);
    t22 = (t46 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t21);
    t62 = (~(t61));
    t63 = *((unsigned int *)t46);
    t64 = (~(t63));
    t65 = *((unsigned int *)t22);
    t66 = (~(t65));
    t29 = (t60 & t62);
    t32 = (t64 & t66);
    t67 = (~(t29));
    t68 = (~(t32));
    t69 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t69 & t67);
    t70 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t67);
    t72 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t72 & t68);
    goto LAB47;

LAB48:    *((unsigned int *)t73) = 1;
    goto LAB51;

LAB50:    t24 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB51;

LAB52:    t26 = (t0 + 3520);
    t27 = (t26 + 56U);
    t30 = *((char **)t27);
    memset(t82, 0, 8);
    t83 = (t30 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t30);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB58;

LAB56:    if (*((unsigned int *)t83) == 0)
        goto LAB55;

LAB57:    t89 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t89) = 1;

LAB58:    memset(t90, 0, 8);
    t91 = (t82 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t82);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t91) != 0)
        goto LAB61;

LAB62:    t99 = *((unsigned int *)t73);
    t100 = *((unsigned int *)t90);
    t101 = (t99 & t100);
    *((unsigned int *)t98) = t101;
    t102 = (t73 + 4);
    t103 = (t90 + 4);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t102);
    t106 = *((unsigned int *)t103);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB54;

LAB55:    *((unsigned int *)t82) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t90) = 1;
    goto LAB62;

LAB61:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB62;

LAB63:    t110 = *((unsigned int *)t98);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t98) = (t110 | t111);
    t112 = (t73 + 4);
    t113 = (t90 + 4);
    t114 = *((unsigned int *)t73);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (~(t116));
    t118 = *((unsigned int *)t90);
    t119 = (~(t118));
    t120 = *((unsigned int *)t113);
    t121 = (~(t120));
    t33 = (t115 & t117);
    t36 = (t119 & t121);
    t122 = (~(t33));
    t123 = (~(t36));
    t124 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t124 & t122);
    t125 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t125 & t123);
    t126 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t126 & t122);
    t127 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t127 & t123);
    goto LAB65;

LAB66:    xsi_set_current_line(102, ng6);

LAB69:    xsi_set_current_line(105, ng6);
    t134 = (t0 + 2800U);
    t135 = *((char **)t134);
    t134 = (t135 + 4);
    t136 = *((unsigned int *)t134);
    t137 = (~(t136));
    t138 = *((unsigned int *)t135);
    t139 = (t138 & t137);
    t140 = (t139 != 0);
    if (t140 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(111, ng6);

LAB88:    xsi_set_current_line(112, ng6);
    t2 = (t0 + 3680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3680);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 3680);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 4320);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 4480);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t17, 2, 2, t20, 9, 2, t23, 9, 2);
    t24 = (t0 + 2960U);
    t25 = *((char **)t24);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t13, 32, t25, 8);
    t24 = ((char*)((ng1)));
    memset(t46, 0, 8);
    t26 = (t14 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB90;

LAB89:    t27 = (t24 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB90;

LAB93:    if (*((unsigned int *)t14) < *((unsigned int *)t24))
        goto LAB91;

LAB92:    t83 = (t46 + 4);
    t6 = *((unsigned int *)t83);
    t7 = (~(t6));
    t8 = *((unsigned int *)t46);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(114, ng6);

LAB100:    xsi_set_current_line(115, ng6);
    t2 = (t0 + 3680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3680);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 3680);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 4320);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 4480);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_array_select_value(t13, 8, t4, t12, t17, 2, 2, t20, 9, 2, t23, 9, 2);
    t24 = (t0 + 2960U);
    t25 = *((char **)t24);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 8, t13, 8, t25, 8);
    t24 = (t0 + 3840);
    t26 = (t0 + 3840);
    t27 = (t26 + 72U);
    t30 = *((char **)t27);
    t83 = (t0 + 3840);
    t89 = (t83 + 64U);
    t91 = *((char **)t89);
    t97 = (t0 + 4320);
    t102 = (t97 + 56U);
    t103 = *((char **)t102);
    t104 = (t0 + 4480);
    t112 = (t104 + 56U);
    t113 = *((char **)t112);
    xsi_vlog_generic_convert_array_indices(t46, t48, t30, t91, 2, 2, t103, 9, 2, t113, 9, 2);
    t128 = (t46 + 4);
    t6 = *((unsigned int *)t128);
    t29 = (!(t6));
    t134 = (t48 + 4);
    t7 = *((unsigned int *)t134);
    t32 = (!(t7));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB101;

LAB102:
LAB96:
LAB72:    xsi_set_current_line(120, ng6);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t13 + 4);
    t15 = (t12 + 4);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t15);
    t28 = (t9 ^ t10);
    t31 = (t8 | t28);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t15);
    t38 = (t34 | t35);
    t39 = (~(t38));
    t40 = (t31 & t39);
    if (t40 != 0)
        goto LAB106;

LAB103:    if (t38 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t14) = 1;

LAB106:    t17 = (t14 + 4);
    t41 = *((unsigned int *)t17);
    t42 = (~(t41));
    t43 = *((unsigned int *)t14);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(128, ng6);

LAB120:    xsi_set_current_line(129, ng6);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 4320);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 9);

LAB109:    goto LAB68;

LAB70:    xsi_set_current_line(105, ng6);

LAB73:    xsi_set_current_line(106, ng6);
    t141 = (t0 + 3680);
    t142 = (t141 + 56U);
    t143 = *((char **)t142);
    t145 = (t0 + 3680);
    t146 = (t145 + 72U);
    t147 = *((char **)t146);
    t148 = (t0 + 3680);
    t149 = (t148 + 64U);
    t150 = *((char **)t149);
    t151 = (t0 + 4320);
    t152 = (t151 + 56U);
    t153 = *((char **)t152);
    t154 = (t0 + 4480);
    t155 = (t154 + 56U);
    t156 = *((char **)t155);
    xsi_vlog_generic_get_array_select_value(t144, 32, t143, t147, t150, 2, 2, t153, 9, 2, t156, 9, 2);
    t157 = (t0 + 2960U);
    t158 = *((char **)t157);
    memset(t159, 0, 8);
    xsi_vlog_unsigned_add(t159, 32, t144, 32, t158, 8);
    t157 = ((char*)((ng7)));
    memset(t160, 0, 8);
    t161 = (t159 + 4);
    if (*((unsigned int *)t161) != 0)
        goto LAB75;

LAB74:    t162 = (t157 + 4);
    if (*((unsigned int *)t162) != 0)
        goto LAB75;

LAB78:    if (*((unsigned int *)t159) > *((unsigned int *)t157))
        goto LAB76;

LAB77:    t164 = (t160 + 4);
    t165 = *((unsigned int *)t164);
    t166 = (~(t165));
    t167 = *((unsigned int *)t160);
    t168 = (t167 & t166);
    t169 = (t168 != 0);
    if (t169 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(108, ng6);

LAB85:    xsi_set_current_line(109, ng6);
    t2 = (t0 + 3680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3680);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t15 = (t0 + 3680);
    t16 = (t15 + 64U);
    t17 = *((char **)t16);
    t18 = (t0 + 4320);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 4480);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_array_select_value(t13, 8, t4, t12, t17, 2, 2, t20, 9, 2, t23, 9, 2);
    t24 = (t0 + 2960U);
    t25 = *((char **)t24);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 8, t13, 8, t25, 8);
    t24 = (t0 + 3840);
    t26 = (t0 + 3840);
    t27 = (t26 + 72U);
    t30 = *((char **)t27);
    t83 = (t0 + 3840);
    t89 = (t83 + 64U);
    t91 = *((char **)t89);
    t97 = (t0 + 4320);
    t102 = (t97 + 56U);
    t103 = *((char **)t102);
    t104 = (t0 + 4480);
    t112 = (t104 + 56U);
    t113 = *((char **)t112);
    xsi_vlog_generic_convert_array_indices(t46, t48, t30, t91, 2, 2, t103, 9, 2, t113, 9, 2);
    t128 = (t46 + 4);
    t6 = *((unsigned int *)t128);
    t29 = (!(t6));
    t134 = (t48 + 4);
    t7 = *((unsigned int *)t134);
    t32 = (!(t7));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB86;

LAB87:
LAB81:    goto LAB72;

LAB75:    t163 = (t160 + 4);
    *((unsigned int *)t160) = 1;
    *((unsigned int *)t163) = 1;
    goto LAB77;

LAB76:    *((unsigned int *)t160) = 1;
    goto LAB77;

LAB79:    xsi_set_current_line(106, ng6);

LAB82:    xsi_set_current_line(107, ng6);
    t170 = ((char*)((ng7)));
    t171 = (t0 + 3840);
    t174 = (t0 + 3840);
    t175 = (t174 + 72U);
    t176 = *((char **)t175);
    t177 = (t0 + 3840);
    t178 = (t177 + 64U);
    t179 = *((char **)t178);
    t180 = (t0 + 4320);
    t181 = (t180 + 56U);
    t182 = *((char **)t181);
    t183 = (t0 + 4480);
    t184 = (t183 + 56U);
    t185 = *((char **)t184);
    xsi_vlog_generic_convert_array_indices(t172, t173, t176, t179, 2, 2, t182, 9, 2, t185, 9, 2);
    t186 = (t172 + 4);
    t187 = *((unsigned int *)t186);
    t37 = (!(t187));
    t188 = (t173 + 4);
    t189 = *((unsigned int *)t188);
    t190 = (!(t189));
    t191 = (t37 && t190);
    if (t191 == 1)
        goto LAB83;

LAB84:    goto LAB81;

LAB83:    t192 = *((unsigned int *)t172);
    t193 = *((unsigned int *)t173);
    t194 = (t192 - t193);
    t195 = (t194 + 1);
    xsi_vlogvar_assign_value(t171, t170, 0, *((unsigned int *)t173), t195);
    goto LAB84;

LAB86:    t8 = *((unsigned int *)t46);
    t9 = *((unsigned int *)t48);
    t36 = (t8 - t9);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t24, t14, 0, *((unsigned int *)t48), t37);
    goto LAB87;

LAB90:    t30 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB92;

LAB91:    *((unsigned int *)t46) = 1;
    goto LAB92;

LAB94:    xsi_set_current_line(112, ng6);

LAB97:    xsi_set_current_line(113, ng6);
    t89 = ((char*)((ng1)));
    t91 = (t0 + 3840);
    t97 = (t0 + 3840);
    t102 = (t97 + 72U);
    t103 = *((char **)t102);
    t104 = (t0 + 3840);
    t112 = (t104 + 64U);
    t113 = *((char **)t112);
    t128 = (t0 + 4320);
    t134 = (t128 + 56U);
    t135 = *((char **)t134);
    t141 = (t0 + 4480);
    t142 = (t141 + 56U);
    t143 = *((char **)t142);
    xsi_vlog_generic_convert_array_indices(t48, t73, t103, t113, 2, 2, t135, 9, 2, t143, 9, 2);
    t145 = (t48 + 4);
    t28 = *((unsigned int *)t145);
    t29 = (!(t28));
    t146 = (t73 + 4);
    t31 = *((unsigned int *)t146);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB98;

LAB99:    goto LAB96;

LAB98:    t34 = *((unsigned int *)t48);
    t35 = *((unsigned int *)t73);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t91, t89, 0, *((unsigned int *)t73), t37);
    goto LAB99;

LAB101:    t8 = *((unsigned int *)t46);
    t9 = *((unsigned int *)t48);
    t36 = (t8 - t9);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t24, t14, 0, *((unsigned int *)t48), t37);
    goto LAB102;

LAB105:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB106;

LAB107:    xsi_set_current_line(120, ng6);

LAB110:    xsi_set_current_line(121, ng6);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 4320);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 9);
    xsi_set_current_line(122, ng6);
    t2 = (t0 + 4480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 608);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t13 + 4);
    t15 = (t12 + 4);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t15);
    t28 = (t9 ^ t10);
    t31 = (t8 | t28);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t15);
    t38 = (t34 | t35);
    t39 = (~(t38));
    t40 = (t31 & t39);
    if (t40 != 0)
        goto LAB114;

LAB111:    if (t38 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t14) = 1;

LAB114:    t17 = (t14 + 4);
    t41 = *((unsigned int *)t17);
    t42 = (~(t41));
    t43 = *((unsigned int *)t14);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(125, ng6);

LAB119:    xsi_set_current_line(126, ng6);
    t2 = (t0 + 4480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 4480);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 9);

LAB117:    goto LAB109;

LAB113:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB114;

LAB115:    xsi_set_current_line(122, ng6);

LAB118:    xsi_set_current_line(123, ng6);
    t18 = ((char*)((ng3)));
    t19 = (t0 + 3520);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    xsi_set_current_line(124, ng6);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);
    goto LAB117;

LAB121:    *((unsigned int *)t13) = 1;
    goto LAB124;

LAB123:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB124;

LAB125:    t15 = (t0 + 5280);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t14, 0, 8);
    t18 = (t17 + 4);
    t35 = *((unsigned int *)t18);
    t38 = (~(t35));
    t39 = *((unsigned int *)t17);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB131;

LAB129:    if (*((unsigned int *)t18) == 0)
        goto LAB128;

LAB130:    t19 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t19) = 1;

LAB131:    memset(t46, 0, 8);
    t20 = (t14 + 4);
    t42 = *((unsigned int *)t20);
    t43 = (~(t42));
    t44 = *((unsigned int *)t14);
    t45 = (t44 & t43);
    t47 = (t45 & 1U);
    if (t47 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t20) != 0)
        goto LAB134;

LAB135:    t49 = *((unsigned int *)t13);
    t50 = *((unsigned int *)t46);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t22 = (t13 + 4);
    t23 = (t46 + 4);
    t24 = (t48 + 4);
    t52 = *((unsigned int *)t22);
    t53 = *((unsigned int *)t23);
    t54 = (t52 | t53);
    *((unsigned int *)t24) = t54;
    t55 = *((unsigned int *)t24);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB136;

LAB137:
LAB138:    goto LAB127;

LAB128:    *((unsigned int *)t14) = 1;
    goto LAB131;

LAB132:    *((unsigned int *)t46) = 1;
    goto LAB135;

LAB134:    t21 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB135;

LAB136:    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t24);
    *((unsigned int *)t48) = (t57 | t58);
    t25 = (t13 + 4);
    t26 = (t46 + 4);
    t59 = *((unsigned int *)t13);
    t60 = (~(t59));
    t61 = *((unsigned int *)t25);
    t62 = (~(t61));
    t63 = *((unsigned int *)t46);
    t64 = (~(t63));
    t65 = *((unsigned int *)t26);
    t66 = (~(t65));
    t29 = (t60 & t62);
    t32 = (t64 & t66);
    t67 = (~(t29));
    t68 = (~(t32));
    t69 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t69 & t67);
    t70 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t67);
    t72 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t72 & t68);
    goto LAB138;

LAB139:    xsi_set_current_line(134, ng6);

LAB142:    xsi_set_current_line(135, ng6);
    t30 = (t0 + 3840);
    t83 = (t30 + 56U);
    t89 = *((char **)t83);
    t91 = (t0 + 3840);
    t97 = (t91 + 72U);
    t102 = *((char **)t97);
    t103 = (t0 + 3840);
    t104 = (t103 + 64U);
    t112 = *((char **)t104);
    t113 = (t0 + 4320);
    t128 = (t113 + 56U);
    t134 = *((char **)t128);
    t135 = (t0 + 4480);
    t141 = (t135 + 56U);
    t142 = *((char **)t141);
    xsi_vlog_generic_get_array_select_value(t73, 8, t89, t102, t112, 2, 2, t134, 9, 2, t142, 9, 2);
    t143 = (t0 + 3360);
    xsi_vlogvar_assign_value(t143, t73, 0, 0, 8);
    xsi_set_current_line(136, ng6);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t13 + 4);
    t15 = (t12 + 4);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t15);
    t28 = (t9 ^ t10);
    t31 = (t8 | t28);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t15);
    t38 = (t34 | t35);
    t39 = (~(t38));
    t40 = (t31 & t39);
    if (t40 != 0)
        goto LAB146;

LAB143:    if (t38 != 0)
        goto LAB145;

LAB144:    *((unsigned int *)t14) = 1;

LAB146:    t17 = (t14 + 4);
    t41 = *((unsigned int *)t17);
    t42 = (~(t41));
    t43 = *((unsigned int *)t14);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB147;

LAB148:    xsi_set_current_line(143, ng6);

LAB160:    xsi_set_current_line(144, ng6);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 4320);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 9);

LAB149:    goto LAB141;

LAB145:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB146;

LAB147:    xsi_set_current_line(136, ng6);

LAB150:    xsi_set_current_line(137, ng6);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 4320);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 9);
    xsi_set_current_line(138, ng6);
    t2 = (t0 + 4480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 608);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t13 + 4);
    t15 = (t12 + 4);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t15);
    t28 = (t9 ^ t10);
    t31 = (t8 | t28);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t15);
    t38 = (t34 | t35);
    t39 = (~(t38));
    t40 = (t31 & t39);
    if (t40 != 0)
        goto LAB154;

LAB151:    if (t38 != 0)
        goto LAB153;

LAB152:    *((unsigned int *)t14) = 1;

LAB154:    t17 = (t14 + 4);
    t41 = *((unsigned int *)t17);
    t42 = (~(t41));
    t43 = *((unsigned int *)t14);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB155;

LAB156:    xsi_set_current_line(140, ng6);

LAB159:    xsi_set_current_line(141, ng6);
    t2 = (t0 + 4480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 4480);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 9);

LAB157:    goto LAB149;

LAB153:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB154;

LAB155:    xsi_set_current_line(138, ng6);

LAB158:    xsi_set_current_line(139, ng6);
    t18 = ((char*)((ng3)));
    t19 = (t0 + 5280);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    goto LAB157;

}


extern void work_m_12143310775463654367_1202257533_init()
{
	static char *pe[] = {(void *)Initial_61_0,(void *)Always_84_1};
	static char *se[] = {(void *)sp_return_median};
	xsi_register_didat("work_m_12143310775463654367_1202257533", "isim/brightness_tb_isim_beh.exe.sim/work/m_12143310775463654367_1202257533.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
