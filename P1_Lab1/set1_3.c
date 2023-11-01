#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mainiiiii(void) {
	int quotient, remainder, a, b;
	printf("Please provide me with two numbers for division:");
	if (scanf("%d%d", &a, &b)== 2) {
		quotient = a / b;
		remainder = a % b;
		printf("The result is %d and the remainder is %d", quotient, remainder);
	}
	else {
		printf("Invalid Input at least two numbers");
	}
	return 0;
}