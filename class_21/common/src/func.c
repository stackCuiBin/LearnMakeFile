/*************************************************************************
 ******* File Name: func.c
 ******* Author: bb.cui
 ******* Mail: bb.cui@foxmail.com 
 ******* Created Time: Sat 07 Mar 2020 04:33:14 PM CST
 ************************************************************************/

#include <stdio.h>

#include "common.h"
#include "func.h"

const char* g_string_func = "hello son, JingChi";

void func_test(void)
{
	printf("func_test : %s\n", g_string_func);
}

