#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main3(void) {
	double t, temp, F, C;
	printf("Please input 1 for Celcius if you want to use that metric or 2 for Fahrenheit:");
	scanf("%lf", &t);
	if (t == 1) {
		printf("Please provide me with the temperature so i can exchange it to Fahrenheit: ");
		scanf("%lf", &temp);
		F = temp * 9 / 5 + 32;
		printf("The temperature is %lf Fahrenheit", F);
		}
	else if (t == 2) {
		printf("Please provide me with the temperature so i can exchange it to Celcius: ");
		scanf("%lf", &temp);
		C = (temp - 32) / 1.8;
		printf("The temperature is %lf Celcius", C);
	}
	else {
		printf("Invalid Input");
	}
	return 0;
}