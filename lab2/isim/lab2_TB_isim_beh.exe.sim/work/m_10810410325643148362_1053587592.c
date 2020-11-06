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
static const char *ng0 = "/home/ise/Xilinx_Shared/cody_repo/cs152b/lab2/TimerFunctions.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {11, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {5, 0};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {2, 0};
static unsigned int ng9[] = {3U, 0U};



static void Cont_48_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4848);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 4752);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_50_1(char *t0)
{
    char t14[8];
    char t17[8];
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
    int t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 4432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4768);
    *((int *)t2) = 1;
    t3 = (t0 + 4464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(59, ng0);

LAB10:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);

LAB11:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(51, ng0);

LAB9:    xsi_set_current_line(52, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(62, ng0);

LAB21:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2792);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 4, t11, 32);
    t12 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 4, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2792);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    memset(t14, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t11))
        goto LAB24;

LAB22:    t12 = (t5 + 4);
    t15 = (t11 + 4);
    if (*((unsigned int *)t12) != *((unsigned int *)t15))
        goto LAB24;

LAB23:    *((unsigned int *)t14) = 1;

LAB24:    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB25;

LAB26:
LAB27:    goto LAB20;

LAB14:    xsi_set_current_line(75, ng0);

LAB35:    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 3, t11, 32);
    t12 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 3, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng6)));
    memset(t14, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t11))
        goto LAB38;

LAB36:    t12 = (t5 + 4);
    t15 = (t11 + 4);
    if (*((unsigned int *)t12) != *((unsigned int *)t15))
        goto LAB38;

LAB37:    *((unsigned int *)t14) = 1;

LAB38:    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB20;

LAB16:    xsi_set_current_line(88, ng0);

LAB49:    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3112);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 2, t11, 32);
    t12 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 2, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3112);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng8)));
    memset(t14, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t11))
        goto LAB52;

LAB50:    t12 = (t5 + 4);
    t15 = (t11 + 4);
    if (*((unsigned int *)t12) != *((unsigned int *)t15))
        goto LAB52;

LAB51:    *((unsigned int *)t14) = 1;

LAB52:    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB53;

LAB54:
LAB55:    goto LAB20;

LAB18:    xsi_set_current_line(101, ng0);

LAB63:    xsi_set_current_line(103, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3272);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 1, t11, 32);
    t12 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3272);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng3)));
    memset(t14, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t11))
        goto LAB66;

LAB64:    t12 = (t5 + 4);
    t15 = (t11 + 4);
    if (*((unsigned int *)t12) != *((unsigned int *)t15))
        goto LAB66;

LAB65:    *((unsigned int *)t14) = 1;

LAB66:    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB67;

LAB68:
LAB69:    goto LAB20;

LAB25:    xsi_set_current_line(69, ng0);

LAB28:    xsi_set_current_line(70, ng0);
    t18 = (t0 + 2632);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t21) == 0)
        goto LAB29;

LAB31:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;

LAB32:    t28 = (t17 + 4);
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t20);
    t31 = (~(t30));
    *((unsigned int *)t17) = t31;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB34;

LAB33:    t36 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t36 & 1U);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t37 & 1U);
    t38 = (t0 + 2632);
    xsi_vlogvar_assign_value(t38, t17, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB27;

LAB29:    *((unsigned int *)t17) = 1;
    goto LAB32;

LAB34:    t32 = *((unsigned int *)t17);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t17) = (t32 | t33);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t34 | t35);
    goto LAB33;

LAB39:    xsi_set_current_line(82, ng0);

LAB42:    xsi_set_current_line(83, ng0);
    t18 = (t0 + 2632);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t21) == 0)
        goto LAB43;

LAB45:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;

LAB46:    t28 = (t17 + 4);
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t20);
    t31 = (~(t30));
    *((unsigned int *)t17) = t31;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB48;

LAB47:    t36 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t36 & 1U);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t37 & 1U);
    t38 = (t0 + 2632);
    xsi_vlogvar_assign_value(t38, t17, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB41;

LAB43:    *((unsigned int *)t17) = 1;
    goto LAB46;

LAB48:    t32 = *((unsigned int *)t17);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t17) = (t32 | t33);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t34 | t35);
    goto LAB47;

LAB53:    xsi_set_current_line(95, ng0);

LAB56:    xsi_set_current_line(96, ng0);
    t18 = (t0 + 2632);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB60;

LAB58:    if (*((unsigned int *)t21) == 0)
        goto LAB57;

LAB59:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;

LAB60:    t28 = (t17 + 4);
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t20);
    t31 = (~(t30));
    *((unsigned int *)t17) = t31;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB62;

LAB61:    t36 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t36 & 1U);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t37 & 1U);
    t38 = (t0 + 2632);
    xsi_vlogvar_assign_value(t38, t17, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 2, 0LL);
    goto LAB55;

LAB57:    *((unsigned int *)t17) = 1;
    goto LAB60;

LAB62:    t32 = *((unsigned int *)t17);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t17) = (t32 | t33);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t34 | t35);
    goto LAB61;

LAB67:    xsi_set_current_line(108, ng0);

LAB70:    xsi_set_current_line(109, ng0);
    t18 = (t0 + 2632);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB74;

LAB72:    if (*((unsigned int *)t21) == 0)
        goto LAB71;

LAB73:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;

LAB74:    t28 = (t17 + 4);
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t20);
    t31 = (~(t30));
    *((unsigned int *)t17) = t31;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB76;

LAB75:    t36 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t36 & 1U);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t37 & 1U);
    t38 = (t0 + 2632);
    xsi_vlogvar_assign_value(t38, t17, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB69;

LAB71:    *((unsigned int *)t17) = 1;
    goto LAB74;

LAB76:    t32 = *((unsigned int *)t17);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t17) = (t32 | t33);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t34 | t35);
    goto LAB75;

}


extern void work_m_10810410325643148362_1053587592_init()
{
	static char *pe[] = {(void *)Cont_48_0,(void *)Always_50_1};
	xsi_register_didat("work_m_10810410325643148362_1053587592", "isim/lab2_TB_isim_beh.exe.sim/work/m_10810410325643148362_1053587592.didat");
	xsi_register_executes(pe);
}
