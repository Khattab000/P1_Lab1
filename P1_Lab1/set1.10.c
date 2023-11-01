#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main2993923(void) {
	double weight, height, BMI;
	printf("please input your weight in kg: ");
	scanf("%lf", &weight);
	printf("please input your height in meters: ");
	scanf("%lf", &height);
	if (weight > 0 && height > 0) {
		BMI = weight / pow(height, 2);
		if (BMI <= 18.5) {
			printf("You are underweight!\n");
		}
		else if (18.5 < BMI && BMI<= 25) {
			printf("Congrats your weight is normal and your BMI is %lf!\n",BMI);
		}
		else if (25 < BMI && BMI<= 30) {
			printf("You are overweight!\n");
		}
		else {
			printf("Obesity!!!\n");
		}
	}

	else {
		printf("Invalid input!!!\n");
	}

	return 0;      //pow() for power off first write the number and then the power 
}
