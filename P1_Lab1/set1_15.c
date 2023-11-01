#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maiewewenee(void) {
	int number, digits = 1;
	printf("ENter the number you want to check: ");
	if (scanf("%d", &number) != 1) {
		printf("Error");
		return 0;
	}
	if (number <= 0) {
		number = -number;
	}
	while (number / 10 >= 1) {
		number = number / 10;
		digits++;
	}
	printf("%d", digits);
	return 0;
}