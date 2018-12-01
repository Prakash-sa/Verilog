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
static const char *ng0 = "C:/Users/Prakash Saini/Documents/study/hardareprograming/srff/srff.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {1U, 1U};



static void Always_31_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t7, 1, t6, 1);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB6:    t6 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);

LAB16:    xsi_set_current_line(35, ng0);
    t7 = (t0 + 1768);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB15;

LAB9:    xsi_set_current_line(36, ng0);

LAB17:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

LAB11:    xsi_set_current_line(37, ng0);

LAB18:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng2)));
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

LAB13:    xsi_set_current_line(38, ng0);

LAB19:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng5)));
    t6 = (t0 + 1768);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

}


extern void work_m_00000000002739360135_0921381975_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000002739360135_0921381975", "isim/srff_isim_beh.exe.sim/work/m_00000000002739360135_0921381975.didat");
	xsi_register_executes(pe);
}
