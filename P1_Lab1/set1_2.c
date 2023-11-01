#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maini333(void) {
	const double pi = 3.141;
	double r, p, a;
	printf("Please provide me with the radius of the Circle in cm : ");
	scanf("%lf", &r);
	if (r > 0) {
		a = r * pi;
		p = 2 * (r * pi);
		printf("The area of the circle is %lf cm and the parameter is %lf cm ", a, p);
	}
	else {
		printf("Invalid input\n");

	}
	return 0;
}


