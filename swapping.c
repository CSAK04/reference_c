/*
 ============================================================================
 Name        : swapping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=30,b=50,c;

	c=a;
	a=b;
	b=c;
	printf("a %d b %d",a,b);
	return EXIT_SUCCESS;
}
