#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mainieireir(void) {
	char inputCHR[100];                       // [100] to specify max string char
	printf("Input a letter or a word to convert to ASCII: ");
	scanf("%s",inputCHR);                    // no need for & to read stings
	for (int i = 0; inputCHR[i] != '\0'; i++) {  // ++ adds +1 to i every time it loops and '\0' is the end of the string after the last letter and important to only use single gänsefüßschen and backslash"\"
		int ASCII = (int)inputCHR[i];           //  to turn characters  to ASCII value you have to turn the string to int and for the second int you need to use ()
		printf("The ASCII value is %d for the letter %c\n",ASCII, inputCHR[i]); // use %c bc its one char not the whole string
	}
	return 0;
}

	                               
	                    
