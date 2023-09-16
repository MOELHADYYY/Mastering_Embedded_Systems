/*
 ============================================================================
 Name        : pointers_assignment.c
 Author      : moelhadyyy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m = 34;
	int * pr;
	pr = &m;
	*pr = 7;
	printf("the address of m is :ox%x\n",pr);
	printf("the address of m is :ox%x\n",&m);
	printf("the value of m is :%d",m);
	return 0;

}
