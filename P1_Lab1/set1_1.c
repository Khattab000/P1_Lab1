#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maini2 (void)
{
	double s, p, a;
	printf("Please provide me with the length of the square in cm :");
	scanf("%lf", &s);                  //%lf is for reading double (double is basically longer float)
	if (s > 0) {
		p = s * 4;
		a = s * s;
		printf("The area is %lf cm^2 and the parameter is %lf cm", a, p);
	}
	else {
		printf("invalid input please only provide a number above 0");
	}
	
	return 0;
}