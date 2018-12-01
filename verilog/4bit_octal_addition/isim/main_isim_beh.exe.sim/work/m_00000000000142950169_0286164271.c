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
static const char *ng0 = "C:/Users/Prakash Saini/Documents/study/hardwareprograming/verilog/sanchit/main.v";
static int ng1[] = {7, 0};
static int ng2[] = {8, 0};
static unsigned int ng3[] = {1U, 0U};



static void Always_29_0(char *t0)
{
    char t4[8];
    char t14[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t5 = (t0 + 1048U);
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
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 7U);
    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 7U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 7U);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 5, t4, 5, t14, 5);
    t25 = (t0 + 1608);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 5);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 3);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 3);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 3);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 3);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 7U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 7U);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 5, t4, 5, t14, 5);
    t16 = (t0 + 1768);
    xsi_vlogvar_assign_value(t16, t24, 0, 0, 5);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 6);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 6);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t15 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 6);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 6);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 7U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 7U);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 5, t4, 5, t14, 5);
    t16 = (t0 + 1928);
    xsi_vlogvar_assign_value(t16, t24, 0, 0, 5);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB8;

LAB9:    t17 = (t4 + 4);
    t8 = *((unsigned int *)t17);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB43;

LAB42:    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB44;

LAB45:    t17 = (t4 + 4);
    t8 = *((unsigned int *)t17);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB61;

LAB60:    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB62;

LAB63:    t17 = (t4 + 4);
    t8 = *((unsigned int *)t17);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB65;

LAB66:
LAB67:
LAB49:
LAB13:    goto LAB2;

LAB7:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(34, ng0);

LAB14:    xsi_set_current_line(35, ng0);
    t25 = (t0 + 1608);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t27, 5, t28, 32);
    t29 = (t0 + 1608);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 5);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t5, 5, t6, 5);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 5);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB16;

LAB15:    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB17;

LAB18:    t17 = (t4 + 4);
    t8 = *((unsigned int *)t17);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB34;

LAB33:    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB35;

LAB36:    t17 = (t4 + 4);
    t8 = *((unsigned int *)t17);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB38;

LAB39:
LAB40:
LAB22:    goto LAB13;

LAB16:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(38, ng0);

LAB23:    xsi_set_current_line(39, ng0);
    t25 = (t0 + 1768);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t27, 5, t28, 32);
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 5);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t5, 5, t6, 5);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 5);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB25;

LAB24:    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB26;

LAB27:    t17 = (t4 + 4);
    t8 = *((unsigned int *)t17);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB22;

LAB25:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB27;

LAB26:    *((unsigned int *)t4) = 1;
    goto LAB27;

LAB29:    xsi_set_current_line(41, ng0);

LAB32:    xsi_set_current_line(42, ng0);
    t25 = (t0 + 1928);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t27, 5, t28, 32);
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 5);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB34:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB36;

LAB35:    *((unsigned int *)t4) = 1;
    goto LAB36;

LAB38:    xsi_set_current_line(48, ng0);

LAB41:    xsi_set_current_line(49, ng0);
    t25 = (t0 + 1928);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t27, 5, t28, 32);
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 5);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB40;

LAB43:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t4) = 1;
    goto LAB45;

LAB47:    xsi_set_current_line(57, ng0);

LAB50:    xsi_set_current_line(58, ng0);
    t25 = (t0 + 1768);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t27, 5, t28, 32);
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 5);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t5, 5, t6, 5);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 5);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB52;

LAB51:    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB52;

LAB55:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB53;

LAB54:    t17 = (t4 + 4);
    t8 = *((unsigned int *)t17);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB56;

LAB57:
LAB58:    goto LAB49;

LAB52:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB54;

LAB53:    *((unsigned int *)t4) = 1;
    goto LAB54;

LAB56:    xsi_set_current_line(60, ng0);

LAB59:    xsi_set_current_line(61, ng0);
    t25 = (t0 + 1928);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t27, 5, t28, 32);
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 5);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB58;

LAB61:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t4) = 1;
    goto LAB63;

LAB65:    xsi_set_current_line(67, ng0);

LAB68:    xsi_set_current_line(68, ng0);
    t25 = (t0 + 1928);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t27, 5, t28, 32);
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 5);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB67;

}


extern void work_m_00000000000142950169_0286164271_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000000142950169_0286164271", "isim/main_isim_beh.exe.sim/work/m_00000000000142950169_0286164271.didat");
	xsi_register_executes(pe);
}
