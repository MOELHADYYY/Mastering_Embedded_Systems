/*
 ============================================================================
 Name        : seconed_pointer.c
 Author      : moelhadyyy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alpha[]={'a','b','c','d','e','f','h','h','i','j','k','l','n','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char *ptr;
	ptr=alpha;
	printf("the alphabet letters are : ");
	for(int i=0;i<26;i++)
	{
		printf(" %c\t ",*ptr);
		ptr++;
	}


	return 0;
}
