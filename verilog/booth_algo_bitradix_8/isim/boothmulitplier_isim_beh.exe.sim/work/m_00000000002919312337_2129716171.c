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
static const char *ng0 = "C:/Users/Prakash Saini/Documents/study/hardwareprograming/verilog/bitradix_8/partial.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {4, 0};
static int ng5[] = {3, 0};
static int ng6[] = {6, 0};
static unsigned int ng7[] = {0U, 0U};



static void Cont_48_0(char *t0)
{
    char t5[8];
    char t15[8];
    char t23[8];
    char t24[8];
    char t28[8];
    char t36[8];
    char t37[8];
    char t41[8];
    char t49[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t2 = (t0 + 1488U);
    t6 = (t2 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 1488U);
    t9 = (t8 + 48U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t7, t10, 2, 1, t11, 32, 1);
    t13 = (t0 + 1528U);
    t14 = *((char **)t13);
    t13 = (t0 + 1488U);
    t16 = (t13 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 1488U);
    t19 = (t18 + 48U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t15, 16, t14, t17, t20, 2, 1, t21, 32, 1);
    t22 = ((char*)((ng3)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_arith_lshift(t23, 16, t15, 16, t22, 32);
    memset(t24, 0, 8);
    xsi_vlog_signed_add(t24, 16, t5, 16, t23, 16);
    t26 = (t0 + 1528U);
    t27 = *((char **)t26);
    t26 = (t0 + 1488U);
    t29 = (t26 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 1488U);
    t32 = (t31 + 48U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t28, 16, t27, t30, t33, 2, 1, t34, 32, 1);
    t35 = ((char*)((ng4)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_arith_lshift(t36, 16, t28, 16, t35, 32);
    memset(t37, 0, 8);
    xsi_vlog_signed_add(t37, 16, t24, 16, t36, 16);
    t39 = (t0 + 1528U);
    t40 = *((char **)t39);
    t39 = (t0 + 1488U);
    t42 = (t39 + 72U);
    t43 = *((char **)t42);
    t44 = (t0 + 1488U);
    t45 = (t44 + 48U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t41, 16, t40, t43, t46, 2, 1, t47, 32, 1);
    t48 = ((char*)((ng6)));
    memset(t49, 0, 8);
    xsi_vlog_unsigned_arith_lshift(t49, 16, t41, 16, t48, 32);
    memset(t50, 0, 8);
    xsi_vlog_signed_add(t50, 16, t37, 16, t49, 16);
    t51 = (t0 + 3512);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memset(t55, 0, 8);
    t56 = 65535U;
    t57 = t56;
    t58 = (t50 + 4);
    t59 = *((unsigned int *)t50);
    t56 = (t56 & t59);
    t60 = *((unsigned int *)t58);
    t57 = (t57 & t60);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 | t56);
    t63 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t63 | t57);
    xsi_driver_vfirst_trans(t51, 0, 15);
    t64 = (t0 + 3416);
    *((int *)t64) = 1;

LAB1:    return;
}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng7)));
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);
    xsi_vlogtype_concat(t3, 3, 3, 2U, t4, 2, t2, 1);
    t14 = (t0 + 3576);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 7U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 2);
    t27 = (t0 + 3432);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000002919312337_2129716171_init()
{
	static char *pe[] = {(void *)Cont_48_0,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000002919312337_2129716171", "isim/boothmulitplier_isim_beh.exe.sim/work/m_00000000002919312337_2129716171.didat");
	xsi_register_executes(pe);
}
