#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maininn(void) {
	int number;
	printf("Please input a number to find out if its odd or even: ");
	if (scanf("%d", &number) == 1) {
		if (number % 2 == 0) {
			printf("This number is even \n");
		}
		else if (number % 2 == 1) {
			printf("This number is odd \n");
		}
	}
	else {
			printf("invalid input please only input a number \n");
		}
		return 0;
	}