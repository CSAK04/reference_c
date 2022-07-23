/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,a[100000],limit;
	printf("enter limit");
	scanf("%d",&limit);
	printf("enter %d values",limit);
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("entered values are:");
	for(i=0;i<limit;i++){
		printf("%d\t",a[i]);
	}

	return EXIT_SUCCESS;
}
