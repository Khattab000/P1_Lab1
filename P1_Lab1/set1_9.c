#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main22222(void) {
	int a, b, c;

	printf("Please input the three numbers to check if those can form a triangle either input one by one or with space:");
	if (scanf("%d%d%d", &a, &b, &c) == 3 && a + b > c, b + c > a, a + c > b) {
		printf("These lines can form a triangle");
	}
	else {
		printf("Invalid Input or these lines cant form a triangle");
	}
	return 0;
}
