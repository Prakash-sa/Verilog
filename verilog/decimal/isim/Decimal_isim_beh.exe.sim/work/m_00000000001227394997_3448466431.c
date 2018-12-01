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
static const char *ng0 = "C:/Users/Prakash Saini/Documents/study/hardwareprograming/verilog/decimal/Decimal.v";
static int ng1[] = {9, 0};
static int ng2[] = {6, 0};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};



static void Always_30_0(char *t0)
{
    char t7[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 5, t5, 4, t6, 4);
    t4 = (t0 + 1368U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 5, t7, 5, t8, 1);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 5);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB7;

LAB6:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB8;

LAB9:    t11 = (t7 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t7);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(43, ng0);

LAB15:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 0);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 15U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 15U);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB13:    goto LAB2;

LAB7:    t10 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(35, ng0);

LAB14:    xsi_set_current_line(36, ng0);
    t17 = (t0 + 2088);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t19, 5, t20, 32);
    t21 = (t0 + 2088);
    xsi_vlogvar_assign_value(t21, t9, 0, 0, 5);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 0);
    *((unsigned int *)t5) = t15;
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 15U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 15U);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB13;

}


extern void work_m_00000000001227394997_3448466431_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000001227394997_3448466431", "isim/Decimal_isim_beh.exe.sim/work/m_00000000001227394997_3448466431.didat");
	xsi_register_executes(pe);
}
