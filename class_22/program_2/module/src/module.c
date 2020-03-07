/*************************************************************************
 ******* File Name: demo.c
 ******* Author: bb.cui
 ******* Mail: bb.cui@foxmail.com 
 ******* Created Time: Sat 07 Mar 2020 04:44:47 PM CST
 ************************************************************************/

#include <stdio.h>

#include "common.h"
#include "func.h"
#include "module.h"

const char* g_string_module = "module test";

void module_test(void)
{
	printf("module_test : %s\n", g_string_module);

	common_test();
	func_test();
}

