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
static const char *ng0 = "D:/3rd/VLSI/Traffic_light_controller/debounce.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {20, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {3U, 0U};



static void Always_39_0(char *t0)
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

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4552);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:
LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB10;

}

static void Always_45_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4568);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(48, ng0);

LAB15:    xsi_set_current_line(49, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 32, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB14;

LAB8:    xsi_set_current_line(53, ng0);

LAB16:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB14;

LAB10:    xsi_set_current_line(57, ng0);

LAB17:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB14;

LAB12:    xsi_set_current_line(62, ng0);

LAB18:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB14;

}

static void Always_67_2(char *t0)
{
    char t8[8];
    char t24[8];
    char t38[8];
    char t45[8];
    char t85[8];
    char t86[8];
    char t97[8];
    char t104[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    int t128;
    int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4584);
    *((int *)t2) = 1;
    t3 = (t0 + 4016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB8;

LAB5:    if (t20 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;

LAB8:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t25) != 0)
        goto LAB11;

LAB12:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB13;

LAB14:    memcpy(t45, t24, 8);

LAB15:    t77 = (t45 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB29;

LAB26:    if (t20 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t8) = 1;

LAB29:    memset(t24, 0, 8);
    t10 = (t8 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t10) != 0)
        goto LAB32;

LAB33:    t25 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB34;

LAB35:    memcpy(t85, t24, 8);

LAB36:    memset(t86, 0, 8);
    t77 = (t85 + 4);
    t87 = *((unsigned int *)t77);
    t88 = (~(t87));
    t89 = *((unsigned int *)t85);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t77) != 0)
        goto LAB50;

LAB51:    t84 = (t86 + 4);
    t92 = *((unsigned int *)t86);
    t93 = *((unsigned int *)t84);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB52;

LAB53:    memcpy(t104, t86, 8);

LAB54:    t136 = (t104 + 4);
    t137 = *((unsigned int *)t136);
    t138 = (~(t137));
    t139 = *((unsigned int *)t104);
    t140 = (t139 & t138);
    t141 = (t140 != 0);
    if (t141 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB68;

LAB65:    if (t20 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t8) = 1;

LAB68:    memset(t24, 0, 8);
    t10 = (t8 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t10) != 0)
        goto LAB71;

LAB72:    t25 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB73;

LAB74:    memcpy(t45, t24, 8);

LAB75:    memset(t85, 0, 8);
    t59 = (t45 + 4);
    t78 = *((unsigned int *)t59);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t59) != 0)
        goto LAB85;

LAB86:    t77 = (t85 + 4);
    t87 = *((unsigned int *)t85);
    t88 = *((unsigned int *)t77);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB87;

LAB88:    memcpy(t97, t85, 8);

LAB89:    t118 = (t97 + 4);
    t131 = *((unsigned int *)t118);
    t132 = (~(t131));
    t133 = *((unsigned int *)t97);
    t134 = (t133 & t132);
    t135 = (t134 != 0);
    if (t135 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB103;

LAB100:    if (t20 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t8) = 1;

LAB103:    memset(t24, 0, 8);
    t10 = (t8 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t10) != 0)
        goto LAB106;

LAB107:    t25 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB108;

LAB109:    memcpy(t85, t24, 8);

LAB110:    t77 = (t85 + 4);
    t87 = *((unsigned int *)t77);
    t88 = (~(t87));
    t89 = *((unsigned int *)t85);
    t90 = (t89 & t88);
    t91 = (t90 != 0);
    if (t91 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB128;

LAB125:    if (t20 != 0)
        goto LAB127;

LAB126:    *((unsigned int *)t8) = 1;

LAB128:    memset(t24, 0, 8);
    t10 = (t8 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t10) != 0)
        goto LAB131;

LAB132:    t25 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB133;

LAB134:    memcpy(t45, t24, 8);

LAB135:    memset(t85, 0, 8);
    t59 = (t45 + 4);
    t78 = *((unsigned int *)t59);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t59) != 0)
        goto LAB145;

LAB146:    t77 = (t85 + 4);
    t87 = *((unsigned int *)t85);
    t88 = *((unsigned int *)t77);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB147;

LAB148:    memcpy(t97, t85, 8);

LAB149:    t118 = (t97 + 4);
    t131 = *((unsigned int *)t118);
    t132 = (~(t131));
    t133 = *((unsigned int *)t97);
    t134 = (t133 & t132);
    t135 = (t134 != 0);
    if (t135 > 0)
        goto LAB157;

LAB158:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB163;

LAB160:    if (t20 != 0)
        goto LAB162;

LAB161:    *((unsigned int *)t8) = 1;

LAB163:    memset(t24, 0, 8);
    t10 = (t8 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB164;

LAB165:    if (*((unsigned int *)t10) != 0)
        goto LAB166;

LAB167:    t25 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB168;

LAB169:    memcpy(t85, t24, 8);

LAB170:    memset(t86, 0, 8);
    t77 = (t85 + 4);
    t87 = *((unsigned int *)t77);
    t88 = (~(t87));
    t89 = *((unsigned int *)t85);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB182;

LAB183:    if (*((unsigned int *)t77) != 0)
        goto LAB184;

LAB185:    t84 = (t86 + 4);
    t92 = *((unsigned int *)t86);
    t93 = *((unsigned int *)t84);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB186;

LAB187:    memcpy(t104, t86, 8);

LAB188:    t136 = (t104 + 4);
    t137 = *((unsigned int *)t136);
    t138 = (~(t137));
    t139 = *((unsigned int *)t104);
    t140 = (t139 & t138);
    t141 = (t140 != 0);
    if (t141 > 0)
        goto LAB196;

LAB197:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB198:
LAB159:
LAB124:
LAB99:
LAB64:
LAB25:    goto LAB2;

LAB7:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB8;

LAB9:    *((unsigned int *)t24) = 1;
    goto LAB12;

LAB11:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB12;

LAB13:    t36 = (t0 + 1048U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    t36 = (t37 + 4);
    t39 = *((unsigned int *)t36);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t36) != 0)
        goto LAB18;

LAB19:    t46 = *((unsigned int *)t24);
    t47 = *((unsigned int *)t38);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t24 + 4);
    t50 = (t38 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB15;

LAB16:    *((unsigned int *)t38) = 1;
    goto LAB19;

LAB18:    t44 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB19;

LAB20:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t24 + 4);
    t60 = (t38 + 4);
    t61 = *((unsigned int *)t24);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t38);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB22;

LAB23:    xsi_set_current_line(69, ng0);
    t83 = ((char*)((ng3)));
    t84 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t84, t83, 0, 0, 2, 0LL);
    goto LAB25;

LAB28:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t24) = 1;
    goto LAB33;

LAB32:    t23 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB33;

LAB34:    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    memset(t38, 0, 8);
    t31 = (t32 + 4);
    t39 = *((unsigned int *)t31);
    t40 = (~(t39));
    t41 = *((unsigned int *)t32);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t31) == 0)
        goto LAB37;

LAB39:    t36 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t36) = 1;

LAB40:    memset(t45, 0, 8);
    t37 = (t38 + 4);
    t46 = *((unsigned int *)t37);
    t47 = (~(t46));
    t48 = *((unsigned int *)t38);
    t52 = (t48 & t47);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t37) != 0)
        goto LAB43;

LAB44:    t54 = *((unsigned int *)t24);
    t55 = *((unsigned int *)t45);
    t56 = (t54 & t55);
    *((unsigned int *)t85) = t56;
    t49 = (t24 + 4);
    t50 = (t45 + 4);
    t51 = (t85 + 4);
    t57 = *((unsigned int *)t49);
    t58 = *((unsigned int *)t50);
    t61 = (t57 | t58);
    *((unsigned int *)t51) = t61;
    t62 = *((unsigned int *)t51);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB36;

LAB37:    *((unsigned int *)t38) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t45) = 1;
    goto LAB44;

LAB43:    t44 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB44;

LAB45:    t64 = *((unsigned int *)t85);
    t65 = *((unsigned int *)t51);
    *((unsigned int *)t85) = (t64 | t65);
    t59 = (t24 + 4);
    t60 = (t45 + 4);
    t66 = *((unsigned int *)t24);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t71 = (~(t68));
    t72 = *((unsigned int *)t45);
    t73 = (~(t72));
    t74 = *((unsigned int *)t60);
    t75 = (~(t74));
    t69 = (t67 & t71);
    t70 = (t73 & t75);
    t76 = (~(t69));
    t78 = (~(t70));
    t79 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t79 & t76);
    t80 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t80 & t78);
    t81 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t81 & t76);
    t82 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t82 & t78);
    goto LAB47;

LAB48:    *((unsigned int *)t86) = 1;
    goto LAB51;

LAB50:    t83 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB51;

LAB52:    t95 = (t0 + 1688U);
    t96 = *((char **)t95);
    memset(t97, 0, 8);
    t95 = (t96 + 4);
    t98 = *((unsigned int *)t95);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t95) != 0)
        goto LAB57;

LAB58:    t105 = *((unsigned int *)t86);
    t106 = *((unsigned int *)t97);
    t107 = (t105 & t106);
    *((unsigned int *)t104) = t107;
    t108 = (t86 + 4);
    t109 = (t97 + 4);
    t110 = (t104 + 4);
    t111 = *((unsigned int *)t108);
    t112 = *((unsigned int *)t109);
    t113 = (t111 | t112);
    *((unsigned int *)t110) = t113;
    t114 = *((unsigned int *)t110);
    t115 = (t114 != 0);
    if (t115 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB54;

LAB55:    *((unsigned int *)t97) = 1;
    goto LAB58;

LAB57:    t103 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB58;

LAB59:    t116 = *((unsigned int *)t104);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t104) = (t116 | t117);
    t118 = (t86 + 4);
    t119 = (t97 + 4);
    t120 = *((unsigned int *)t86);
    t121 = (~(t120));
    t122 = *((unsigned int *)t118);
    t123 = (~(t122));
    t124 = *((unsigned int *)t97);
    t125 = (~(t124));
    t126 = *((unsigned int *)t119);
    t127 = (~(t126));
    t128 = (t121 & t123);
    t129 = (t125 & t127);
    t130 = (~(t128));
    t131 = (~(t129));
    t132 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t132 & t130);
    t133 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t133 & t131);
    t134 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t134 & t130);
    t135 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t135 & t131);
    goto LAB61;

LAB62:    xsi_set_current_line(71, ng0);
    t142 = ((char*)((ng1)));
    t143 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t143, t142, 0, 0, 2, 0LL);
    goto LAB64;

LAB67:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB68;

LAB69:    *((unsigned int *)t24) = 1;
    goto LAB72;

LAB71:    t23 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB72;

LAB73:    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    memset(t38, 0, 8);
    t31 = (t32 + 4);
    t39 = *((unsigned int *)t31);
    t40 = (~(t39));
    t41 = *((unsigned int *)t32);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t31) != 0)
        goto LAB78;

LAB79:    t46 = *((unsigned int *)t24);
    t47 = *((unsigned int *)t38);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t37 = (t24 + 4);
    t44 = (t38 + 4);
    t49 = (t45 + 4);
    t52 = *((unsigned int *)t37);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t49);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB80;

LAB81:
LAB82:    goto LAB75;

LAB76:    *((unsigned int *)t38) = 1;
    goto LAB79;

LAB78:    t36 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB79;

LAB80:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t49);
    *((unsigned int *)t45) = (t57 | t58);
    t50 = (t24 + 4);
    t51 = (t38 + 4);
    t61 = *((unsigned int *)t24);
    t62 = (~(t61));
    t63 = *((unsigned int *)t50);
    t64 = (~(t63));
    t65 = *((unsigned int *)t38);
    t66 = (~(t65));
    t67 = *((unsigned int *)t51);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t73 & t71);
    t74 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB82;

LAB83:    *((unsigned int *)t85) = 1;
    goto LAB86;

LAB85:    t60 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB86;

LAB87:    t83 = (t0 + 1688U);
    t84 = *((char **)t83);
    memset(t86, 0, 8);
    t83 = (t84 + 4);
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t92 = *((unsigned int *)t84);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t83) != 0)
        goto LAB92;

LAB93:    t98 = *((unsigned int *)t85);
    t99 = *((unsigned int *)t86);
    t100 = (t98 & t99);
    *((unsigned int *)t97) = t100;
    t96 = (t85 + 4);
    t103 = (t86 + 4);
    t108 = (t97 + 4);
    t101 = *((unsigned int *)t96);
    t102 = *((unsigned int *)t103);
    t105 = (t101 | t102);
    *((unsigned int *)t108) = t105;
    t106 = *((unsigned int *)t108);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB94;

LAB95:
LAB96:    goto LAB89;

LAB90:    *((unsigned int *)t86) = 1;
    goto LAB93;

LAB92:    t95 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB93;

LAB94:    t111 = *((unsigned int *)t97);
    t112 = *((unsigned int *)t108);
    *((unsigned int *)t97) = (t111 | t112);
    t109 = (t85 + 4);
    t110 = (t86 + 4);
    t113 = *((unsigned int *)t85);
    t114 = (~(t113));
    t115 = *((unsigned int *)t109);
    t116 = (~(t115));
    t117 = *((unsigned int *)t86);
    t120 = (~(t117));
    t121 = *((unsigned int *)t110);
    t122 = (~(t121));
    t128 = (t114 & t116);
    t129 = (t120 & t122);
    t123 = (~(t128));
    t124 = (~(t129));
    t125 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t125 & t123);
    t126 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t126 & t124);
    t127 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t127 & t123);
    t130 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t130 & t124);
    goto LAB96;

LAB97:    xsi_set_current_line(73, ng0);
    t119 = ((char*)((ng5)));
    t136 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t136, t119, 0, 0, 2, 0LL);
    goto LAB99;

LAB102:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB103;

LAB104:    *((unsigned int *)t24) = 1;
    goto LAB107;

LAB106:    t23 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB107;

LAB108:    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    memset(t38, 0, 8);
    t31 = (t32 + 4);
    t39 = *((unsigned int *)t31);
    t40 = (~(t39));
    t41 = *((unsigned int *)t32);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB114;

LAB112:    if (*((unsigned int *)t31) == 0)
        goto LAB111;

LAB113:    t36 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t36) = 1;

LAB114:    memset(t45, 0, 8);
    t37 = (t38 + 4);
    t46 = *((unsigned int *)t37);
    t47 = (~(t46));
    t48 = *((unsigned int *)t38);
    t52 = (t48 & t47);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t37) != 0)
        goto LAB117;

LAB118:    t54 = *((unsigned int *)t24);
    t55 = *((unsigned int *)t45);
    t56 = (t54 & t55);
    *((unsigned int *)t85) = t56;
    t49 = (t24 + 4);
    t50 = (t45 + 4);
    t51 = (t85 + 4);
    t57 = *((unsigned int *)t49);
    t58 = *((unsigned int *)t50);
    t61 = (t57 | t58);
    *((unsigned int *)t51) = t61;
    t62 = *((unsigned int *)t51);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB119;

LAB120:
LAB121:    goto LAB110;

LAB111:    *((unsigned int *)t38) = 1;
    goto LAB114;

LAB115:    *((unsigned int *)t45) = 1;
    goto LAB118;

LAB117:    t44 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB118;

LAB119:    t64 = *((unsigned int *)t85);
    t65 = *((unsigned int *)t51);
    *((unsigned int *)t85) = (t64 | t65);
    t59 = (t24 + 4);
    t60 = (t45 + 4);
    t66 = *((unsigned int *)t24);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t71 = (~(t68));
    t72 = *((unsigned int *)t45);
    t73 = (~(t72));
    t74 = *((unsigned int *)t60);
    t75 = (~(t74));
    t69 = (t67 & t71);
    t70 = (t73 & t75);
    t76 = (~(t69));
    t78 = (~(t70));
    t79 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t79 & t76);
    t80 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t80 & t78);
    t81 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t81 & t76);
    t82 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t82 & t78);
    goto LAB121;

LAB122:    xsi_set_current_line(75, ng0);
    t83 = ((char*)((ng7)));
    t84 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t84, t83, 0, 0, 2, 0LL);
    goto LAB124;

LAB127:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB128;

LAB129:    *((unsigned int *)t24) = 1;
    goto LAB132;

LAB131:    t23 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB132;

LAB133:    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    memset(t38, 0, 8);
    t31 = (t32 + 4);
    t39 = *((unsigned int *)t31);
    t40 = (~(t39));
    t41 = *((unsigned int *)t32);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t31) != 0)
        goto LAB138;

LAB139:    t46 = *((unsigned int *)t24);
    t47 = *((unsigned int *)t38);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t37 = (t24 + 4);
    t44 = (t38 + 4);
    t49 = (t45 + 4);
    t52 = *((unsigned int *)t37);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    *((unsigned int *)t49) = t54;
    t55 = *((unsigned int *)t49);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB140;

LAB141:
LAB142:    goto LAB135;

LAB136:    *((unsigned int *)t38) = 1;
    goto LAB139;

LAB138:    t36 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB139;

LAB140:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t49);
    *((unsigned int *)t45) = (t57 | t58);
    t50 = (t24 + 4);
    t51 = (t38 + 4);
    t61 = *((unsigned int *)t24);
    t62 = (~(t61));
    t63 = *((unsigned int *)t50);
    t64 = (~(t63));
    t65 = *((unsigned int *)t38);
    t66 = (~(t65));
    t67 = *((unsigned int *)t51);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t73 & t71);
    t74 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB142;

LAB143:    *((unsigned int *)t85) = 1;
    goto LAB146;

LAB145:    t60 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB146;

LAB147:    t83 = (t0 + 1688U);
    t84 = *((char **)t83);
    memset(t86, 0, 8);
    t83 = (t84 + 4);
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t92 = *((unsigned int *)t84);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t83) != 0)
        goto LAB152;

LAB153:    t98 = *((unsigned int *)t85);
    t99 = *((unsigned int *)t86);
    t100 = (t98 & t99);
    *((unsigned int *)t97) = t100;
    t96 = (t85 + 4);
    t103 = (t86 + 4);
    t108 = (t97 + 4);
    t101 = *((unsigned int *)t96);
    t102 = *((unsigned int *)t103);
    t105 = (t101 | t102);
    *((unsigned int *)t108) = t105;
    t106 = *((unsigned int *)t108);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB154;

LAB155:
LAB156:    goto LAB149;

LAB150:    *((unsigned int *)t86) = 1;
    goto LAB153;

LAB152:    t95 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t95) = 1;
    goto LAB153;

LAB154:    t111 = *((unsigned int *)t97);
    t112 = *((unsigned int *)t108);
    *((unsigned int *)t97) = (t111 | t112);
    t109 = (t85 + 4);
    t110 = (t86 + 4);
    t113 = *((unsigned int *)t85);
    t114 = (~(t113));
    t115 = *((unsigned int *)t109);
    t116 = (~(t115));
    t117 = *((unsigned int *)t86);
    t120 = (~(t117));
    t121 = *((unsigned int *)t110);
    t122 = (~(t121));
    t128 = (t114 & t116);
    t129 = (t120 & t122);
    t123 = (~(t128));
    t124 = (~(t129));
    t125 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t125 & t123);
    t126 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t126 & t124);
    t127 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t127 & t123);
    t130 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t130 & t124);
    goto LAB156;

LAB157:    xsi_set_current_line(77, ng0);
    t119 = ((char*)((ng5)));
    t136 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t136, t119, 0, 0, 2, 0LL);
    goto LAB159;

LAB162:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB163;

LAB164:    *((unsigned int *)t24) = 1;
    goto LAB167;

LAB166:    t23 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB167;

LAB168:    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    memset(t38, 0, 8);
    t31 = (t32 + 4);
    t39 = *((unsigned int *)t31);
    t40 = (~(t39));
    t41 = *((unsigned int *)t32);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB174;

LAB172:    if (*((unsigned int *)t31) == 0)
        goto LAB171;

LAB173:    t36 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t36) = 1;

LAB174:    memset(t45, 0, 8);
    t37 = (t38 + 4);
    t46 = *((unsigned int *)t37);
    t47 = (~(t46));
    t48 = *((unsigned int *)t38);
    t52 = (t48 & t47);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB175;

LAB176:    if (*((unsigned int *)t37) != 0)
        goto LAB177;

LAB178:    t54 = *((unsigned int *)t24);
    t55 = *((unsigned int *)t45);
    t56 = (t54 & t55);
    *((unsigned int *)t85) = t56;
    t49 = (t24 + 4);
    t50 = (t45 + 4);
    t51 = (t85 + 4);
    t57 = *((unsigned int *)t49);
    t58 = *((unsigned int *)t50);
    t61 = (t57 | t58);
    *((unsigned int *)t51) = t61;
    t62 = *((unsigned int *)t51);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB179;

LAB180:
LAB181:    goto LAB170;

LAB171:    *((unsigned int *)t38) = 1;
    goto LAB174;

LAB175:    *((unsigned int *)t45) = 1;
    goto LAB178;

LAB177:    t44 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB178;

LAB179:    t64 = *((unsigned int *)t85);
    t65 = *((unsigned int *)t51);
    *((unsigned int *)t85) = (t64 | t65);
    t59 = (t24 + 4);
    t60 = (t45 + 4);
    t66 = *((unsigned int *)t24);
    t67 = (~(t66));
    t68 = *((unsigned int *)t59);
    t71 = (~(t68));
    t72 = *((unsigned int *)t45);
    t73 = (~(t72));
    t74 = *((unsigned int *)t60);
    t75 = (~(t74));
    t69 = (t67 & t71);
    t70 = (t73 & t75);
    t76 = (~(t69));
    t78 = (~(t70));
    t79 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t79 & t76);
    t80 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t80 & t78);
    t81 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t81 & t76);
    t82 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t82 & t78);
    goto LAB181;

LAB182:    *((unsigned int *)t86) = 1;
    goto LAB185;

LAB184:    t83 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB185;

LAB186:    t95 = (t0 + 1688U);
    t96 = *((char **)t95);
    memset(t97, 0, 8);
    t95 = (t96 + 4);
    t98 = *((unsigned int *)t95);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB189;

LAB190:    if (*((unsigned int *)t95) != 0)
        goto LAB191;

LAB192:    t105 = *((unsigned int *)t86);
    t106 = *((unsigned int *)t97);
    t107 = (t105 & t106);
    *((unsigned int *)t104) = t107;
    t108 = (t86 + 4);
    t109 = (t97 + 4);
    t110 = (t104 + 4);
    t111 = *((unsigned int *)t108);
    t112 = *((unsigned int *)t109);
    t113 = (t111 | t112);
    *((unsigned int *)t110) = t113;
    t114 = *((unsigned int *)t110);
    t115 = (t114 != 0);
    if (t115 == 1)
        goto LAB193;

LAB194:
LAB195:    goto LAB188;

LAB189:    *((unsigned int *)t97) = 1;
    goto LAB192;

LAB191:    t103 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB192;

LAB193:    t116 = *((unsigned int *)t104);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t104) = (t116 | t117);
    t118 = (t86 + 4);
    t119 = (t97 + 4);
    t120 = *((unsigned int *)t86);
    t121 = (~(t120));
    t122 = *((unsigned int *)t118);
    t123 = (~(t122));
    t124 = *((unsigned int *)t97);
    t125 = (~(t124));
    t126 = *((unsigned int *)t119);
    t127 = (~(t126));
    t128 = (t121 & t123);
    t129 = (t125 & t127);
    t130 = (~(t128));
    t131 = (~(t129));
    t132 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t132 & t130);
    t133 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t133 & t131);
    t134 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t134 & t130);
    t135 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t135 & t131);
    goto LAB195;

LAB196:    xsi_set_current_line(79, ng0);
    t142 = ((char*)((ng1)));
    t143 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t143, t142, 0, 0, 2, 0LL);
    goto LAB198;

}

static void Cont_85_3(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 4600);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000020833305_1832158028_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)Always_45_1,(void *)Always_67_2,(void *)Cont_85_3};
	xsi_register_didat("work_m_00000000000020833305_1832158028", "isim/Traffic_light_TF_isim_beh.exe.sim/work/m_00000000000020833305_1832158028.didat");
	xsi_register_executes(pe);
}
