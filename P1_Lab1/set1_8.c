#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maindsdsdsd(void) {
	char letter[1];
	printf("Please input a character to check if its a letter:");
	scanf("%c", &letter);

	if ((letter[0] >= 'A' && letter[0] <= 'Z') || (letter[0] >= 'a' && letter[0] <= 'z')) {   // "" is for strings and '' for letters
		printf("Its a letter");
	}
	else {
		printf("Its not a letter");
	}
	return 0;        // return 0 or return 1 can be used to indicate if the code was succesful or not
}
