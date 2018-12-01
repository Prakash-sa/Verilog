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
static const char *ng0 = "C:/Users/Prakash Saini/Documents/study/hardwareprograming/verilog/final_4_bit_radix/multiply.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {0U, 0U};



static void Cont_48_0(char *t0)
{
    char t5[8];
    char t15[8];
    char t23[8];
    char t24[8];
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

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
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t7, t10, 2, 1, t11, 32, 1);
    t13 = (t0 + 1528U);
    t14 = *((char **)t13);
    t13 = (t0 + 1488U);
    t16 = (t13 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 1488U);
    t19 = (t18 + 48U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t15, 8, t14, t17, t20, 2, 1, t21, 32, 1);
    t22 = ((char*)((ng3)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_lshift(t23, 8, t15, 8, t22, 32);
    memset(t24, 0, 8);
    xsi_vlog_signed_add(t24, 8, t5, 8, t23, 8);
    t25 = (t0 + 3512);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t29, 0, 8);
    t30 = 255U;
    t31 = t30;
    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t30 = (t30 & t33);
    t34 = *((unsigned int *)t32);
    t31 = (t31 & t34);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 | t30);
    t37 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t37 | t31);
    xsi_driver_vfirst_trans(t25, 0, 7);
    t38 = (t0 + 3416);
    *((int *)t38) = 1;

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

LAB2:    t2 = ((char*)((ng4)));
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


extern void work_m_00000000002074985500_2809259415_init()
{
	static char *pe[] = {(void *)Cont_48_0,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000002074985500_2809259415", "isim/multiply_isim_beh.exe.sim/work/m_00000000002074985500_2809259415.didat");
	xsi_register_executes(pe);
}
