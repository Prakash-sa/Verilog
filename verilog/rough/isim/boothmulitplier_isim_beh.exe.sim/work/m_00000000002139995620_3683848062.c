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
static const char *ng0 = "C:/Users/Prakash Saini/Documents/study/hardwareprograming/verilog/rough/ass.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};



static void Always_6_0(char *t0)
{
    char t7[8];
    char t10[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(6, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(6, ng0);

LAB5:    xsi_set_current_line(7, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(8, ng0);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_zero_extend(t7, 8, t8, 1);
    t9 = (t0 + 1608);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    goto LAB23;

LAB9:    xsi_set_current_line(9, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogtype_zero_extend(t7, 8, t4, 4);
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 8);
    goto LAB23;

LAB11:    xsi_set_current_line(10, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogtype_zero_extend(t7, 8, t4, 4);
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 8);
    goto LAB23;

LAB13:    xsi_set_current_line(12, ng0);

LAB24:    xsi_set_current_line(13, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogtype_zero_extend(t7, 8, t4, 4);
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 8);
    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    xsi_vlogtype_zero_extend(t7, 8, t3, 4);
    t2 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_arith_lshift(t10, 8, t7, 8, t2, 32);
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t10, 0, 0, 8);
    goto LAB23;

LAB15:    xsi_set_current_line(16, ng0);

LAB25:    xsi_set_current_line(17, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogtype_zero_extend(t7, 8, t4, 4);
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 8);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB27;

LAB26:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 255U);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 255U);
    t19 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 8, t10, 8, t19, 8);
    t21 = (t0 + 1608);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 8);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_arith_lshift(t10, 8, t4, 8, t8, 32);
    t9 = (t0 + 1608);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 8);
    goto LAB23;

LAB17:    xsi_set_current_line(21, ng0);

LAB28:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogtype_zero_extend(t7, 8, t4, 4);
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 8);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB30;

LAB29:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 255U);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 255U);
    t19 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 8, t10, 8, t19, 8);
    t21 = (t0 + 1608);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 8);
    goto LAB23;

LAB19:    xsi_set_current_line(25, ng0);

LAB31:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogtype_zero_extend(t7, 8, t4, 4);
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 8);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB33;

LAB32:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 255U);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 255U);
    t19 = ((char*)((ng2)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 8, t10, 8, t19, 8);
    t21 = (t0 + 1608);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 8);
    goto LAB23;

LAB21:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_zero_extend(t7, 8, t3, 4);
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 8);
    goto LAB23;

LAB27:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t15 | t16);
    goto LAB26;

LAB30:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t15 | t16);
    goto LAB29;

LAB33:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t15 | t16);
    goto LAB32;

}


extern void work_m_00000000002139995620_3683848062_init()
{
	static char *pe[] = {(void *)Always_6_0};
	xsi_register_didat("work_m_00000000002139995620_3683848062", "isim/boothmulitplier_isim_beh.exe.sim/work/m_00000000002139995620_3683848062.didat");
	xsi_register_executes(pe);
}
