#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main344(void) {
	double k, m;
	printf("Please input distance in km to convert to miles: ");
	scanf("%lf", &k);
	if (k > 0) {
		m = k * 0.62;
		printf("The distance is %lf miles\n", m);
	}
	else {
		printf("Invalid input number has to be above 0\n");
	}
	return 0;
}