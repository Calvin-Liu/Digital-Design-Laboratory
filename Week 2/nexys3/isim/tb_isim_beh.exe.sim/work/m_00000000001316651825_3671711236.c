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
static const char *ng0 = "C:/Users/152/Desktop/lab1/tb/tb.v";
static const char *ng1 = "%d ... Running instruction %08b";
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {2, 0};
static const char *ng9 = "%d ... instruction %08b executed";
static const char *ng10 = "%d ... led output changed to %08b";



static int sp_tskRunInst(char *t1, char *t2)
{
    char t5[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(97, ng0);

LAB5:    xsi_set_current_line(98, ng0);
    *((int *)t5) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t6 = (t5 + 4);
    *((int *)t6) = 0;
    t7 = (t1 + 4728);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 3, t10, (char)118, t5, 32, (char)118, t9, 8);
    xsi_set_current_line(99, ng0);
    t4 = (t1 + 4728);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 3928);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(100, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1500000000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(100, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t1 + 4248);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 3000000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(101, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t1 + 4248);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB4;

}

static int sp_tskRunPUSH(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(109, ng0);

LAB5:    xsi_set_current_line(110, ng0);
    t7 = (t1 + 5048);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 15U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 15U);
    t19 = (t1 + 4888);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 3U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 3U);
    t30 = ((char*)((ng4)));
    xsi_vlogtype_concat(t5, 8, 8, 3U, t30, 2, t18, 2, t6, 4);
    t31 = (t1 + 5208);
    xsi_vlogvar_assign_value(t31, t5, 0, 0, 8);
    xsi_set_current_line(111, ng0);
    t4 = (t1 + 5208);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t19 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t19, &&LAB6);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 848);
    t23 = xsi_create_subprogram_invocation(t21, 0, t1, t22, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t30 = (t1 + 4728);
    xsi_vlogvar_assign_value(t30, t8, 0, 0, 8);

LAB8:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t39 = ((int  (*)(char *, char *))t38)(t1, t32);
    if (t39 == -1)
        goto LAB9;

LAB10:    if (t39 != 0)
        goto LAB11;

LAB6:    t32 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t32);

LAB7:    t40 = (t2 + 64U);
    t41 = *((char **)t40);
    t40 = (t1 + 848);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    xsi_delete_subprogram_invocation(t40, t41, t1, t43, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t31 = (t2 + 48U);
    *((char **)t31) = &&LAB8;
    goto LAB1;

}

static int sp_tskRunSEND(char *t1, char *t2)
{
    char t5[8];
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(118, ng0);

LAB5:    xsi_set_current_line(119, ng0);
    t6 = ((char*)((ng4)));
    t8 = (t1 + 5368);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 3U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 3U);
    t19 = ((char*)((ng5)));
    xsi_vlogtype_concat(t5, 8, 8, 3U, t19, 2, t7, 2, t6, 4);
    t20 = (t1 + 5528);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 8);
    xsi_set_current_line(120, ng0);
    t4 = (t1 + 5528);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t12, &&LAB6);
    t19 = (t2 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 848);
    t22 = xsi_create_subprogram_invocation(t20, 0, t1, t21, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t21, t22);
    t23 = (t1 + 4728);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 8);

LAB8:    t24 = (t2 + 64U);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t1, t25);
    if (t32 == -1)
        goto LAB9;

LAB10:    if (t32 != 0)
        goto LAB11;

LAB6:    t25 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t25);

LAB7:    t33 = (t2 + 64U);
    t34 = *((char **)t33);
    t33 = (t1 + 848);
    t35 = (t2 + 56U);
    t36 = *((char **)t35);
    xsi_delete_subprogram_invocation(t33, t34, t1, t36, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t24 = (t2 + 48U);
    *((char **)t24) = &&LAB8;
    goto LAB1;

}

static int sp_tskRunADD(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t18[8];
    char t30[8];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(129, ng0);

LAB5:    xsi_set_current_line(130, ng0);
    t7 = (t1 + 6008);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    t19 = (t1 + 5848);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 3U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 3U);
    t31 = (t1 + 5688);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 3U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 3U);
    t42 = ((char*)((ng6)));
    xsi_vlogtype_concat(t5, 8, 8, 4U, t42, 2, t30, 2, t18, 2, t6, 2);
    t43 = (t1 + 6168);
    xsi_vlogvar_assign_value(t43, t5, 0, 0, 8);
    xsi_set_current_line(131, ng0);
    t4 = (t1 + 6168);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t19 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t19, &&LAB6);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 848);
    t23 = xsi_create_subprogram_invocation(t21, 0, t1, t22, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t31 = (t1 + 4728);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 8);

LAB8:    t32 = (t2 + 64U);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t42 = (t35 + 272U);
    t43 = *((char **)t42);
    t44 = (t43 + 0U);
    t45 = *((char **)t44);
    t46 = ((int  (*)(char *, char *))t45)(t1, t33);
    if (t46 == -1)
        goto LAB9;

LAB10:    if (t46 != 0)
        goto LAB11;

LAB6:    t33 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t33);

LAB7:    t47 = (t2 + 64U);
    t48 = *((char **)t47);
    t47 = (t1 + 848);
    t49 = (t2 + 56U);
    t50 = *((char **)t49);
    xsi_delete_subprogram_invocation(t47, t48, t1, t50, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t32 = (t2 + 48U);
    *((char **)t32) = &&LAB8;
    goto LAB1;

}

static int sp_tskRunMULT(char *t1, char *t2)
{
    char t5[8];
    char t6[8];
    char t18[8];
    char t30[8];
    int t0;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(140, ng0);

LAB5:    xsi_set_current_line(141, ng0);
    t7 = (t1 + 6648);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    t19 = (t1 + 6488);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 3U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 3U);
    t31 = (t1 + 6328);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 3U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 3U);
    t42 = ((char*)((ng7)));
    xsi_vlogtype_concat(t5, 8, 8, 4U, t42, 2, t30, 2, t18, 2, t6, 2);
    t43 = (t1 + 6808);
    xsi_vlogvar_assign_value(t43, t5, 0, 0, 8);
    xsi_set_current_line(142, ng0);
    t4 = (t1 + 6808);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t19 = *((char **)t11);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t19, &&LAB6);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 848);
    t23 = xsi_create_subprogram_invocation(t21, 0, t1, t22, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t31 = (t1 + 4728);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 8);

LAB8:    t32 = (t2 + 64U);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t42 = (t35 + 272U);
    t43 = *((char **)t42);
    t44 = (t43 + 0U);
    t45 = *((char **)t44);
    t46 = ((int  (*)(char *, char *))t45)(t1, t33);
    if (t46 == -1)
        goto LAB9;

LAB10:    if (t46 != 0)
        goto LAB11;

LAB6:    t33 = (t1 + 848);
    xsi_vlog_subprogram_popinvocation(t33);

LAB7:    t47 = (t2 + 64U);
    t48 = *((char **)t47);
    t47 = (t1 + 848);
    t49 = (t2 + 56U);
    t50 = *((char **)t49);
    xsi_delete_subprogram_invocation(t47, t48, t1, t50, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t32 = (t2 + 48U);
    *((char **)t32) = &&LAB8;
    goto LAB1;

}

static void Initial_19_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 7728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);

LAB4:    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 7536);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 4408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 7536);
    xsi_process_wait(t2, 1500000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 7536);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4888);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 2);
    t8 = (t0 + 5048);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB9:    t9 = (t0 + 7632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB11:    if (t17 != 0)
        goto LAB12;

LAB7:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB8:    t18 = (t0 + 7632);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 7536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7536);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5368);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB15:    t7 = (t0 + 7632);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB17:    if (t17 != 0)
        goto LAB18;

LAB13:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB14:    t15 = (t0 + 7632);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t18 = (t0 + 7536);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 7536);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4888);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 2);
    t8 = (t0 + 5048);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB21:    t9 = (t0 + 7632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB23:    if (t17 != 0)
        goto LAB24;

LAB19:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB20:    t18 = (t0 + 7632);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 7536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7536);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5368);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB27:    t7 = (t0 + 7632);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB29:    if (t17 != 0)
        goto LAB30;

LAB25:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB26:    t15 = (t0 + 7632);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t18 = (t0 + 7536);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng2)));
    t4 = ((char*)((ng8)));
    t5 = (t0 + 7536);
    t6 = (t0 + 2144);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 5688);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);
    t9 = (t0 + 5848);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 2);
    t10 = (t0 + 6008);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 2);

LAB33:    t11 = (t0 + 7632);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB35:    if (t17 != 0)
        goto LAB36;

LAB31:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB32:    t20 = (t0 + 7632);
    t21 = *((char **)t20);
    t20 = (t0 + 2144);
    t22 = (t0 + 7536);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7536);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5368);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB39:    t7 = (t0 + 7632);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB41:    if (t17 != 0)
        goto LAB42;

LAB37:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB38:    t15 = (t0 + 7632);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t18 = (t0 + 7536);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng2)));
    t4 = ((char*)((ng3)));
    t5 = (t0 + 7536);
    t6 = (t0 + 2144);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 5688);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);
    t9 = (t0 + 5848);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 2);
    t10 = (t0 + 6008);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 2);

LAB45:    t11 = (t0 + 7632);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB47:    if (t17 != 0)
        goto LAB48;

LAB43:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB44:    t20 = (t0 + 7632);
    t21 = *((char **)t20);
    t20 = (t0 + 2144);
    t22 = (t0 + 7536);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7536);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5368);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB51:    t7 = (t0 + 7632);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB53:    if (t17 != 0)
        goto LAB54;

LAB49:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB50:    t15 = (t0 + 7632);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t18 = (t0 + 7536);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng8)));
    t4 = ((char*)((ng2)));
    t5 = (t0 + 7536);
    t6 = (t0 + 2144);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 5688);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);
    t9 = (t0 + 5848);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 2);
    t10 = (t0 + 6008);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 2);

LAB57:    t11 = (t0 + 7632);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB59:    if (t17 != 0)
        goto LAB60;

LAB55:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB56:    t20 = (t0 + 7632);
    t21 = *((char **)t20);
    t20 = (t0 + 2144);
    t22 = (t0 + 7536);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7536);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5368);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB63:    t7 = (t0 + 7632);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB65:    if (t17 != 0)
        goto LAB66;

LAB61:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB62:    t15 = (t0 + 7632);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t18 = (t0 + 7536);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng2)));
    t4 = ((char*)((ng8)));
    t5 = (t0 + 7536);
    t6 = (t0 + 2144);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 5688);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);
    t9 = (t0 + 5848);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 2);
    t10 = (t0 + 6008);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 2);

LAB69:    t11 = (t0 + 7632);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB71:    if (t17 != 0)
        goto LAB72;

LAB67:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB68:    t20 = (t0 + 7632);
    t21 = *((char **)t20);
    t20 = (t0 + 2144);
    t22 = (t0 + 7536);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7536);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5368);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB75:    t7 = (t0 + 7632);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB77:    if (t17 != 0)
        goto LAB78;

LAB73:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB74:    t15 = (t0 + 7632);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t18 = (t0 + 7536);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng8)));
    t4 = ((char*)((ng3)));
    t5 = (t0 + 7536);
    t6 = (t0 + 2144);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 5688);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);
    t9 = (t0 + 5848);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 2);
    t10 = (t0 + 6008);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 2);

LAB81:    t11 = (t0 + 7632);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB83:    if (t17 != 0)
        goto LAB84;

LAB79:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB80:    t20 = (t0 + 7632);
    t21 = *((char **)t20);
    t20 = (t0 + 2144);
    t22 = (t0 + 7536);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7536);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5368);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB87:    t7 = (t0 + 7632);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB89:    if (t17 != 0)
        goto LAB90;

LAB85:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB86:    t15 = (t0 + 7632);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t18 = (t0 + 7536);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng2)));
    t5 = (t0 + 7536);
    t6 = (t0 + 2144);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 5688);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);
    t9 = (t0 + 5848);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 2);
    t10 = (t0 + 6008);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 2);

LAB93:    t11 = (t0 + 7632);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB95:    if (t17 != 0)
        goto LAB96;

LAB91:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB92:    t20 = (t0 + 7632);
    t21 = *((char **)t20);
    t20 = (t0 + 2144);
    t22 = (t0 + 7536);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7536);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5368);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB99:    t7 = (t0 + 7632);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB101:    if (t17 != 0)
        goto LAB102;

LAB97:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB98:    t15 = (t0 + 7632);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t18 = (t0 + 7536);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng2)));
    t4 = ((char*)((ng8)));
    t5 = (t0 + 7536);
    t6 = (t0 + 2144);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 5688);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);
    t9 = (t0 + 5848);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 2);
    t10 = (t0 + 6008);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 2);

LAB105:    t11 = (t0 + 7632);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB107:    if (t17 != 0)
        goto LAB108;

LAB103:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB104:    t20 = (t0 + 7632);
    t21 = *((char **)t20);
    t20 = (t0 + 2144);
    t22 = (t0 + 7536);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7536);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5368);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB111:    t7 = (t0 + 7632);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB113:    if (t17 != 0)
        goto LAB114;

LAB109:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB110:    t15 = (t0 + 7632);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t18 = (t0 + 7536);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng8)));
    t4 = ((char*)((ng3)));
    t5 = (t0 + 7536);
    t6 = (t0 + 2144);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 5688);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);
    t9 = (t0 + 5848);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 2);
    t10 = (t0 + 6008);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 2);

LAB117:    t11 = (t0 + 7632);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB119:    if (t17 != 0)
        goto LAB120;

LAB115:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB116:    t20 = (t0 + 7632);
    t21 = *((char **)t20);
    t20 = (t0 + 2144);
    t22 = (t0 + 7536);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7536);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5368);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB123:    t7 = (t0 + 7632);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB125:    if (t17 != 0)
        goto LAB126;

LAB121:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB122:    t15 = (t0 + 7632);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t18 = (t0 + 7536);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng2)));
    t5 = (t0 + 7536);
    t6 = (t0 + 2144);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 5688);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);
    t9 = (t0 + 5848);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 2);
    t10 = (t0 + 6008);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 2);

LAB129:    t11 = (t0 + 7632);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB131:    if (t17 != 0)
        goto LAB132;

LAB127:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB128:    t20 = (t0 + 7632);
    t21 = *((char **)t20);
    t20 = (t0 + 2144);
    t22 = (t0 + 7536);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7536);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5368);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB135:    t7 = (t0 + 7632);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB137:    if (t17 != 0)
        goto LAB138;

LAB133:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB134:    t15 = (t0 + 7632);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t18 = (t0 + 7536);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng2)));
    t4 = ((char*)((ng8)));
    t5 = (t0 + 7536);
    t6 = (t0 + 2144);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 5688);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 2);
    t9 = (t0 + 5848);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 2);
    t10 = (t0 + 6008);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 2);

LAB141:    t11 = (t0 + 7632);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB143:    if (t17 != 0)
        goto LAB144;

LAB139:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB140:    t20 = (t0 + 7632);
    t21 = *((char **)t20);
    t20 = (t0 + 2144);
    t22 = (t0 + 7536);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7536);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 5368);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 2);

LAB147:    t7 = (t0 + 7632);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t17 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB149:    if (t17 != 0)
        goto LAB150;

LAB145:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB146:    t15 = (t0 + 7632);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t18 = (t0 + 7536);
    t19 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t18, t19);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 7536);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB151;
    goto LAB1;

LAB10:;
LAB12:    t9 = (t0 + 7728U);
    *((char **)t9) = &&LAB9;
    goto LAB1;

LAB16:;
LAB18:    t7 = (t0 + 7728U);
    *((char **)t7) = &&LAB15;
    goto LAB1;

LAB22:;
LAB24:    t9 = (t0 + 7728U);
    *((char **)t9) = &&LAB21;
    goto LAB1;

LAB28:;
LAB30:    t7 = (t0 + 7728U);
    *((char **)t7) = &&LAB27;
    goto LAB1;

LAB34:;
LAB36:    t11 = (t0 + 7728U);
    *((char **)t11) = &&LAB33;
    goto LAB1;

LAB40:;
LAB42:    t7 = (t0 + 7728U);
    *((char **)t7) = &&LAB39;
    goto LAB1;

LAB46:;
LAB48:    t11 = (t0 + 7728U);
    *((char **)t11) = &&LAB45;
    goto LAB1;

LAB52:;
LAB54:    t7 = (t0 + 7728U);
    *((char **)t7) = &&LAB51;
    goto LAB1;

LAB58:;
LAB60:    t11 = (t0 + 7728U);
    *((char **)t11) = &&LAB57;
    goto LAB1;

LAB64:;
LAB66:    t7 = (t0 + 7728U);
    *((char **)t7) = &&LAB63;
    goto LAB1;

LAB70:;
LAB72:    t11 = (t0 + 7728U);
    *((char **)t11) = &&LAB69;
    goto LAB1;

LAB76:;
LAB78:    t7 = (t0 + 7728U);
    *((char **)t7) = &&LAB75;
    goto LAB1;

LAB82:;
LAB84:    t11 = (t0 + 7728U);
    *((char **)t11) = &&LAB81;
    goto LAB1;

LAB88:;
LAB90:    t7 = (t0 + 7728U);
    *((char **)t7) = &&LAB87;
    goto LAB1;

LAB94:;
LAB96:    t11 = (t0 + 7728U);
    *((char **)t11) = &&LAB93;
    goto LAB1;

LAB100:;
LAB102:    t7 = (t0 + 7728U);
    *((char **)t7) = &&LAB99;
    goto LAB1;

LAB106:;
LAB108:    t11 = (t0 + 7728U);
    *((char **)t11) = &&LAB105;
    goto LAB1;

LAB112:;
LAB114:    t7 = (t0 + 7728U);
    *((char **)t7) = &&LAB111;
    goto LAB1;

LAB118:;
LAB120:    t11 = (t0 + 7728U);
    *((char **)t11) = &&LAB117;
    goto LAB1;

LAB124:;
LAB126:    t7 = (t0 + 7728U);
    *((char **)t7) = &&LAB123;
    goto LAB1;

LAB130:;
LAB132:    t11 = (t0 + 7728U);
    *((char **)t11) = &&LAB129;
    goto LAB1;

LAB136:;
LAB138:    t7 = (t0 + 7728U);
    *((char **)t7) = &&LAB135;
    goto LAB1;

LAB142:;
LAB144:    t11 = (t0 + 7728U);
    *((char **)t11) = &&LAB141;
    goto LAB1;

LAB148:;
LAB150:    t7 = (t0 + 7728U);
    *((char **)t7) = &&LAB147;
    goto LAB1;

LAB151:    xsi_set_current_line(69, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_72_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 7976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 7784);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 4088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 4088);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_146_2(char *t0)
{
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 8224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 8792);
    *((int *)t2) = 1;
    t3 = (t0 + 8256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(147, ng0);
    t4 = (t0 + 11052);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(148, ng0);
    *((int *)t14) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t15 = (t14 + 4);
    *((int *)t15) = 0;
    t16 = (t0 + 11076);
    t17 = *((char **)t16);
    t18 = ((((char*)(t17))) + 56U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng9, 3, t0, (char)118, t14, 32, (char)118, t19, 8);
    goto LAB7;

}

static void Always_150_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 8472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 8808);
    *((int *)t2) = 1;
    t3 = (t0 + 8504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(151, ng0);
    *((int *)t4) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t5 = (t4 + 4);
    *((int *)t5) = 0;
    t6 = (t0 + 3528U);
    t7 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t0, (char)118, t4, 32, (char)118, t7, 8);
    goto LAB2;

}


extern void work_m_00000000001316651825_3671711236_init()
{
	static char *pe[] = {(void *)Initial_19_0,(void *)Always_72_1,(void *)Always_146_2,(void *)Always_150_3};
	static char *se[] = {(void *)sp_tskRunInst,(void *)sp_tskRunPUSH,(void *)sp_tskRunSEND,(void *)sp_tskRunADD,(void *)sp_tskRunMULT};
	xsi_register_didat("work_m_00000000001316651825_3671711236", "isim/tb_isim_beh.exe.sim/work/m_00000000001316651825_3671711236.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
