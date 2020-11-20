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
static const char *ng0 = "/home/ise/Xilinx_shared/cs152b/lab3/lab3_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {410, 0};
static int ng3[] = {361, 0};
static const char *ng4 = "noisy_cat.text";
static const char *ng5 = "r";
static const char *ng6 = "Input file not opened successfully: %0d";
static const char *ng7 = "median_filter.text";
static const char *ng8 = "w";
static const char *ng9 = "Output file not opened successfully: %0d";
static int ng10[] = {1, 0};
static const char *ng11 = "%d,";
static const char *ng12 = "%d";



static void Initial_54_0(char *t0)
{
    char t4[8];
    char t22[8];
    char t27[8];
    char t31[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);

LAB4:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3768);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(70, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng4, ng5);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t6) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(75, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng7, ng8);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t6) == 0)
        goto LAB14;

LAB16:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB17:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3768);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(71, ng0);

LAB13:    xsi_set_current_line(72, ng0);
    t19 = (t0 + 2248);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)119, t21, 32);
    xsi_set_current_line(73, ng0);
    xsi_vlog_finish(1);
    goto LAB12;

LAB14:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(76, ng0);

LAB21:    xsi_set_current_line(77, ng0);
    t19 = (t0 + 2408);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)119, t21, 32);
    xsi_set_current_line(78, ng0);
    xsi_vlog_finish(1);
    goto LAB20;

LAB22:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB23:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2888);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t19 = (t0 + 3048);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t4, 0, 8);
    xsi_vlog_signed_multiply(t4, 32, t13, 32, t21, 32);
    memset(t22, 0, 8);
    xsi_vlog_signed_less(t22, 32, t5, 32, t4, 32);
    t23 = (t22 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t22);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3768);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB24:    xsi_set_current_line(85, ng0);

LAB26:    xsi_set_current_line(86, ng0);
    t24 = (t0 + 2248);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t28 = (t0 + 1608);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_bit_copy(t27, 0, t30, 0, 8);
    *((int *)t31) = xsi_vlogfile_fscanf(*((unsigned int *)t26), ng11, 2, t0, (char)118, t27, 8);
    t32 = (t31 + 4);
    *((int *)t32) = 0;
    t33 = (t0 + 1608);
    xsi_vlogvar_assign_value(t33, t27, 0, 0, 8);
    t34 = (t0 + 2568);
    xsi_vlogvar_assign_value(t34, t31, 0, 0, 32);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3768);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB23;

LAB28:    xsi_set_current_line(91, ng0);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB29:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2888);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t19 = (t0 + 3048);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t4, 0, 8);
    xsi_vlog_signed_multiply(t4, 32, t13, 32, t21, 32);
    memset(t22, 0, 8);
    xsi_vlog_signed_less(t22, 32, t5, 32, t4, 32);
    t23 = (t22 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t22);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    goto LAB1;

LAB30:    xsi_set_current_line(91, ng0);

LAB32:    xsi_set_current_line(92, ng0);
    t24 = (t0 + 2728);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t28 = (t0 + 2888);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t32 = (t0 + 3048);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t27, 0, 8);
    xsi_vlog_signed_multiply(t27, 32, t30, 32, t34, 32);
    t35 = ((char*)((ng10)));
    memset(t31, 0, 8);
    xsi_vlog_signed_minus(t31, 32, t27, 32, t35, 32);
    memset(t36, 0, 8);
    xsi_vlog_signed_equal(t36, 32, t26, 32, t31, 32);
    t37 = (t36 + 4);
    t14 = *((unsigned int *)t37);
    t15 = (~(t14));
    t16 = *((unsigned int *)t36);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(94, ng0);

LAB37:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1048U);
    t12 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng11, 2, t0, (char)118, t12, 8);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3768);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB33:    xsi_set_current_line(92, ng0);

LAB36:    xsi_set_current_line(93, ng0);
    t38 = (t0 + 2408);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t0 + 1048U);
    t42 = *((char **)t41);
    xsi_vlogfile_fwrite(*((unsigned int *)t40), 0, 0, 1, ng12, 2, t0, (char)118, t42, 8);

LAB35:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB29;

LAB38:    goto LAB35;

}

static void Always_112_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4016);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(113, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}


extern void work_m_15813784829264299832_3296354953_init()
{
	static char *pe[] = {(void *)Initial_54_0,(void *)Always_112_1};
	xsi_register_didat("work_m_15813784829264299832_3296354953", "isim/lab3_tb_isim_beh.exe.sim/work/m_15813784829264299832_3296354953.didat");
	xsi_register_executes(pe);
}
