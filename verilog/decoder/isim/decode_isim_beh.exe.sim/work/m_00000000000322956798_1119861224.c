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
static const char *ng0 = "C:/Users/Prakash Saini/Documents/study/hardareprograming/decoder/decode.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {8U, 0U};
static unsigned int ng7[] = {16U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {32U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {64U, 0U};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {128U, 0U};
static unsigned int ng14[] = {256U, 0U};
static unsigned int ng15[] = {9U, 0U};
static unsigned int ng16[] = {512U, 0U};
static unsigned int ng17[] = {10U, 0U};
static unsigned int ng18[] = {1024U, 0U};
static unsigned int ng19[] = {11U, 0U};
static unsigned int ng20[] = {2048U, 0U};
static unsigned int ng21[] = {12U, 0U};
static unsigned int ng22[] = {4096U, 0U};
static unsigned int ng23[] = {13U, 0U};
static unsigned int ng24[] = {8192U, 0U};
static unsigned int ng25[] = {14U, 0U};
static unsigned int ng26[] = {16384U, 0U};
static unsigned int ng27[] = {15U, 0U};
static unsigned int ng28[] = {32768U, 0U};



static void Always_28_0(char *t0)
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

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1208U);
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
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(30, ng0);

LAB9:    xsi_set_current_line(31, ng0);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);

LAB10:    t11 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t11, 4);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng21)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng23)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng25)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng27)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB8;

LAB11:    xsi_set_current_line(32, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 1608);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 16);
    goto LAB43;

LAB13:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

LAB15:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

LAB17:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

LAB19:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

LAB21:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

LAB23:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

LAB25:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

LAB27:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

LAB29:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

LAB31:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

LAB33:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

LAB35:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

LAB37:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

LAB39:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

LAB41:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB43;

}


extern void work_m_00000000000322956798_1119861224_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000000322956798_1119861224", "isim/decode_isim_beh.exe.sim/work/m_00000000000322956798_1119861224.didat");
	xsi_register_executes(pe);
}
