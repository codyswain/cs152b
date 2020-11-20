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
static const char *ng0 = "/home/ise/Xilinx_shared/cs152b/lab3/lab3.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};

static void NetReassign_64_2(char *);
static void NetReassign_67_3(char *);


static void Initial_62_0(char *t0)
{
    char t4[8];
    char t9[8];
    char t21[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    int t45;

LAB0:    xsi_set_current_line(62, ng0);

LAB2:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3456);
    xsi_set_assignedflag(t1);
    t2 = (t0 + 7704);
    *((int *)t2) = 1;
    NetReassign_64_2(t0);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 3616);
    xsi_set_assignedflag(t1);
    t2 = (t0 + 7708);
    *((int *)t2) = 1;
    NetReassign_67_3(t0);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t5 = (t0 + 2816);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 9);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t5 = (t0 + 2976);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 9);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t5 = (t0 + 3136);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 9);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 3616);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t5 = (t0 + 3296);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 9);
    xsi_set_current_line(76, ng0);
    xsi_set_current_line(76, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3776);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3776);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = (t0 + 3456);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 32, t8, 4);
    memset(t9, 0, 8);
    t10 = (t3 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB4:    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB6;

LAB7:    t13 = (t9 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:
LAB1:    return;
LAB5:    t12 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB9:    xsi_set_current_line(76, ng0);

LAB11:    xsi_set_current_line(77, ng0);
    xsi_set_current_line(77, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3936);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);

LAB12:    t1 = (t0 + 3936);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t0 + 608);
    t6 = *((char **)t5);
    t5 = (t0 + 3456);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 32, t8, 4);
    memset(t9, 0, 8);
    t10 = (t3 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB14;

LAB13:    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB14;

LAB17:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB15;

LAB16:    t13 = (t9 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 3776);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t3, 32, t5, 32);
    t6 = (t0 + 3776);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);
    goto LAB3;

LAB14:    t12 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB16;

LAB15:    *((unsigned int *)t9) = 1;
    goto LAB16;

LAB18:    xsi_set_current_line(77, ng0);

LAB20:    xsi_set_current_line(78, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2656);
    t23 = (t0 + 2656);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 2656);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = (t0 + 3776);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 3936);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_convert_array_indices(t21, t22, t25, t28, 2, 2, t31, 32, 1, t34, 32, 1);
    t35 = (t21 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t22 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 3936);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t3, 32, t5, 32);
    t6 = (t0 + 3936);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);
    goto LAB12;

LAB21:    t42 = *((unsigned int *)t21);
    t43 = *((unsigned int *)t22);
    t44 = (t42 - t43);
    t45 = (t44 + 1);
    xsi_vlogvar_assign_value(t20, t19, 0, *((unsigned int *)t22), t45);
    goto LAB22;

}

static void Always_83_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t46[8];
    char t48[8];
    char t78[8];
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
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;

LAB0:    t1 = (t0 + 5096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5912);
    *((int *)t2) = 1;
    t3 = (t0 + 5128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 1616U);
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
LAB8:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1616U);
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

LAB40:    t23 = (t48 + 4);
    t73 = *((unsigned int *)t23);
    t74 = (~(t73));
    t75 = *((unsigned int *)t48);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB48;

LAB49:
LAB50:    goto LAB2;

LAB6:    xsi_set_current_line(85, ng0);

LAB9:    xsi_set_current_line(86, ng0);
    t11 = (t0 + 1456U);
    t12 = *((char **)t11);
    t11 = (t0 + 2656);
    t15 = (t0 + 2656);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2656);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 2816);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 2976);
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

LAB11:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB17:    xsi_set_current_line(94, ng0);

LAB29:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 2816);
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

LAB16:    xsi_set_current_line(87, ng0);

LAB19:    xsi_set_current_line(88, ng0);
    t18 = (t0 + 3616);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t46, t20, 8);
    t21 = (t0 + 2816);
    xsi_vlogvar_assign_value(t21, t46, 0, 0, 9);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB25:    xsi_set_current_line(91, ng0);

LAB28:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 2976);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 9);

LAB26:    goto LAB18;

LAB22:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(89, ng0);

LAB27:    xsi_set_current_line(90, ng0);
    t18 = (t0 + 3616);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t46, t20, 8);
    t21 = (t0 + 2976);
    xsi_vlogvar_assign_value(t21, t46, 0, 0, 9);
    goto LAB26;

LAB30:    *((unsigned int *)t13) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t14) = 1;
    goto LAB37;

LAB36:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB37;

LAB38:    t15 = (t0 + 1776U);
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

LAB48:    xsi_set_current_line(99, ng0);

LAB51:    xsi_set_current_line(101, ng0);
    t24 = (t0 + 2656);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 2656);
    t30 = (t27 + 72U);
    t79 = *((char **)t30);
    t80 = (t0 + 2656);
    t81 = (t80 + 64U);
    t82 = *((char **)t81);
    t83 = (t0 + 3136);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t0 + 3296);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    xsi_vlog_generic_get_array_select_value(t78, 8, t26, t79, t82, 2, 2, t85, 9, 2, t88, 9, 2);
    t89 = (t0 + 2336);
    xsi_vlogvar_assign_value(t89, t78, 0, 0, 8);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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
        goto LAB55;

LAB52:    if (t38 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t14) = 1;

LAB55:    t17 = (t14 + 4);
    t41 = *((unsigned int *)t17);
    t42 = (~(t41));
    t43 = *((unsigned int *)t14);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(110, ng0);

LAB69:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 3136);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 9);

LAB58:    goto LAB50;

LAB54:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(102, ng0);

LAB59:    xsi_set_current_line(103, ng0);
    t18 = (t0 + 3616);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t46, t20, 8);
    t21 = (t0 + 3136);
    xsi_vlogvar_assign_value(t21, t46, 0, 0, 9);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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
        goto LAB63;

LAB60:    if (t38 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t14) = 1;

LAB63:    t17 = (t14 + 4);
    t41 = *((unsigned int *)t17);
    t42 = (~(t41));
    t43 = *((unsigned int *)t14);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(107, ng0);

LAB68:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 3296);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 9);

LAB66:    goto LAB58;

LAB62:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(104, ng0);

LAB67:    xsi_set_current_line(105, ng0);
    t18 = (t0 + 3616);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t46, t20, 8);
    t21 = (t0 + 3296);
    xsi_vlogvar_assign_value(t21, t46, 0, 0, 9);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB66;

}

static void NetReassign_64_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t3 = 0;
    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_rshift(t5, 32, t4, 32, t2, 32);
    t6 = (t0 + 7704);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t7 = (t0 + 3456);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 4, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_67_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t3 = 0;
    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_rshift(t5, 32, t4, 32, t2, 32);
    t6 = (t0 + 7708);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t7 = (t0 + 3616);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 4, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

}


extern void work_m_05398354001450843862_1604064968_init()
{
	static char *pe[] = {(void *)Initial_62_0,(void *)Always_83_1,(void *)NetReassign_64_2,(void *)NetReassign_67_3};
	xsi_register_didat("work_m_05398354001450843862_1604064968", "isim/lab3_tb_isim_beh.exe.sim/work/m_05398354001450843862_1604064968.didat");
	xsi_register_executes(pe);
}
