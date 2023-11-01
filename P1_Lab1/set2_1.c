#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double power(double x, int y) {   // btw you could just  use the pow(x,y) function this is just for practice
	double result = 1;
	if (y == 0) {
		return  1;
	}
	else if (y > 0) {
		while (y > 0) {
			result *= x;
			y--;
		}
	}
	else {
		while (y < 0) {
			result /= x;
			y++;
		}
	}

	return result;
}

int main232323(void) {
	double a;
	int b;
	printf("Input the number and the an integer power: ");
	if (scanf("%lf%d", &a, &b) == 2) {
		double result = power(a, b);
		printf("The %d th power of %lf is %lf\n", b, a, result);
	}

	else {
		puts("Invalid Input!");
	}
	return 0;
}


