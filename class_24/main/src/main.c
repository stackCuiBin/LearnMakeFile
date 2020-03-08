/*************************************************************************
 ******* File Name: main.c
 ******* Author: bb.cui
 ******* Mail: bb.cui@foxmail.com 
 ******* Created Time: Sat 07 Mar 2020 04:57:05 PM CST
 ************************************************************************/

#include <stdio.h>

#include "common.h"
#include "func.h"

//#include "dlib_test.h"
//#include "slib_test.h"

extern void module_test();
extern void slib_test();
extern void dlib_test();

int main()
{
	printf("This is main\n");

	module_test();

	slib_test();
	dlib_test();

    return 0;
}
