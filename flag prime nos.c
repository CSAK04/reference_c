/*
 ============================================================================
 Name        : flag.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int flag=0,i,n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("prime number");
	}else{
		printf("not prime");
	}
	return EXIT_SUCCESS;
}
