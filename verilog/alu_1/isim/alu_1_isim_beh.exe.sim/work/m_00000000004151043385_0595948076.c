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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Prakash Saini/Documents/study/hardareprograming/alu_1/alu_1.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {3, 0};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};



static void Always_29_0(char *t0)
{
    char t9[8];
    char t17[8];
    char t25[8];
    char t31[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
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
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    int t72;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 4, t3, 4, t4, 4);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t9, 0, 0, 4);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(36, ng0);

LAB16:    xsi_set_current_line(37, ng0);
    xsi_set_current_line(37, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);

LAB17:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greatereq(t9, 32, t4, 32, t7, 32);
    t8 = (t9 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB18;

LAB19:    goto LAB15;

LAB9:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t15 = (t9 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t32 = (t13 | t14);
    *((unsigned int *)t15) = t32;
    t33 = *((unsigned int *)t15);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB26;

LAB27:
LAB28:    t19 = (t0 + 1768);
    xsi_vlogvar_assign_value(t19, t9, 0, 0, 4);
    goto LAB15;

LAB11:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 4, t4, 4, t7, 4);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 4);
    goto LAB15;

LAB18:    xsi_set_current_line(37, ng0);

LAB20:    xsi_set_current_line(38, ng0);
    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    t15 = (t0 + 1168U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 1928);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_index_select_value(t17, 1, t16, t19, 2, t22, 32, 1);
    t23 = (t0 + 1368U);
    t24 = *((char **)t23);
    t23 = (t0 + 1328U);
    t26 = (t23 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 1928);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_index_select_value(t25, 1, t24, t27, 2, t30, 32, 1);
    t32 = *((unsigned int *)t17);
    t33 = *((unsigned int *)t25);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t35 = (t17 + 4);
    t36 = (t25 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB21;

LAB22:
LAB23:    t62 = (t0 + 1768);
    t64 = (t0 + 1768);
    t65 = (t64 + 72U);
    t66 = *((char **)t65);
    t67 = (t0 + 1928);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    xsi_vlog_generic_convert_bit_index(t63, t66, 2, t69, 32, 1);
    t70 = (t63 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (!(t71));
    if (t72 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_minus(t9, 32, t4, 32, t7, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB17;

LAB21:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t17 + 4);
    t46 = (t25 + 4);
    t47 = *((unsigned int *)t17);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (~(t49));
    t51 = *((unsigned int *)t25);
    t52 = (~(t51));
    t53 = *((unsigned int *)t46);
    t54 = (~(t53));
    t6 = (t48 & t50);
    t55 = (t52 & t54);
    t56 = (~(t6));
    t57 = (~(t55));
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & t56);
    t59 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t59 & t57);
    t60 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t60 & t56);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    goto LAB23;

LAB24:    xsi_vlogvar_assign_value(t62, t31, 0, *((unsigned int *)t63), 1);
    goto LAB25;

LAB26:    t38 = *((unsigned int *)t9);
    t39 = *((unsigned int *)t15);
    *((unsigned int *)t9) = (t38 | t39);
    t16 = (t4 + 4);
    t18 = (t7 + 4);
    t40 = *((unsigned int *)t16);
    t41 = (~(t40));
    t42 = *((unsigned int *)t4);
    t55 = (t42 & t41);
    t43 = *((unsigned int *)t18);
    t44 = (~(t43));
    t47 = *((unsigned int *)t7);
    t72 = (t47 & t44);
    t48 = (~(t55));
    t49 = (~(t72));
    t50 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t50 & t48);
    t51 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t51 & t49);
    goto LAB28;

}


extern void work_m_00000000004151043385_0595948076_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000004151043385_0595948076", "isim/alu_1_isim_beh.exe.sim/work/m_00000000004151043385_0595948076.didat");
	xsi_register_executes(pe);
}
