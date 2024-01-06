#include <stdio.h>
#include <stdlib.h>

int main() {

	// Special type of if statement that allows us to compare one value to multiple other values, check conditions, and execute code based on those conditions.
	// This is specifically used when I am wanting to check ONE value against multiple other values.

	char grade = 'A';

	switch(grade) {
	case 'A':
		printf("You did great!\n");
		break;
	case 'B':
		printf("You did alright!\n");
		break;
	case 'C':
		printf("You did poorly!\n");
		break;
	case 'D':
		printf("You did very bad!\n");
		break;
	case 'F':
		printf("You failed!\n");
		break;
	default :
		printf("Invalid grade!\n");
		break;
	}

	return 0;
}