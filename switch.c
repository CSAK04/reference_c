/*
 ============================================================================
 Name        : switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	printf("1 for porotta\n 2 for biryani\n 3 for fried rice\n 4 for fried rice\n enter your choice");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("you have selected porotta");
		break;
	case 2:
		printf("you have entered biryani");
		break;
	case 3:
		printf("you have selected fried rice");
		break;
	case 4:
		printf("you have entered mandhi");
		break;
	default:
		printf("invalid");

	}
	return EXIT_SUCCESS;
}
