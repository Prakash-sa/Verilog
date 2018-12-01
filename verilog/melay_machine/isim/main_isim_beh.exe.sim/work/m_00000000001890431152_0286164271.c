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
static const char *ng0 = "C:/Users/Prakash Saini/Documents/study/hardwareprograming/verilog/melay_machine/main.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_11_0(char *t0)
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
    int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 3392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 3712);
    *((int *)t2) = 1;
    t3 = (t0 + 3424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
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

LAB7:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = (t0 + 472);
    t11 = *((char **)t5);
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t11, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:
LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(14, ng0);

LAB9:    xsi_set_current_line(15, ng0);
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    t11 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 3, 0LL);
    xsi_set_current_line(16, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(20, ng0);
    t5 = (t0 + 1912U);
    t12 = *((char **)t5);
    t5 = (t12 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(26, ng0);

LAB24:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB22:    goto LAB19;

LAB13:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1912U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(36, ng0);

LAB29:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB27:    goto LAB19;

LAB15:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1912U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(46, ng0);

LAB34:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB32:    goto LAB19;

LAB17:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1912U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB19;

LAB20:    xsi_set_current_line(21, ng0);

LAB23:    xsi_set_current_line(22, ng0);
    t14 = (t0 + 608);
    t15 = *((char **)t14);
    t14 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 3, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB25:    xsi_set_current_line(31, ng0);

LAB28:    xsi_set_current_line(32, ng0);
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    t11 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 3, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB27;

LAB30:    xsi_set_current_line(41, ng0);

LAB33:    xsi_set_current_line(42, ng0);
    t11 = (t0 + 744);
    t12 = *((char **)t11);
    t11 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 3, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB32;

LAB35:    xsi_set_current_line(51, ng0);

LAB38:    xsi_set_current_line(52, ng0);
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    t11 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 3, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB37;

}


extern void work_m_00000000001890431152_0286164271_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("work_m_00000000001890431152_0286164271", "isim/main_isim_beh.exe.sim/work/m_00000000001890431152_0286164271.didat");
	xsi_register_executes(pe);
}
