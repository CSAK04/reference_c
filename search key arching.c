/*
 ============================================================================
 Name        : search.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,a[1000],limit,search_key,flag=0;
	printf("enter limit");
	scanf("%d",&limit);
	printf("enter values");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("enter search key");
	scanf("%d",&search_key);
	for(i=0;i<limit;i++){
		if(search_key==a[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("the value is founded at position %d",i+1);
	}else{
		printf("value not found");
	}
	return EXIT_SUCCESS;
}
