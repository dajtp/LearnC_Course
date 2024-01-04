#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Constants - a value that cannot be changed

	int num = 5;
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);
	
	const int NUM = 5; // constant variable - Good practice to name constants in all caps (i.e. NUM)
	printf("%d\n", NUM);
	// NUM = 8; // error: assignment of read-only variable ‘NUM’

	// A string of text is also considered a constant
	printf("Hello World\n");

	// Equally, a number that isn't defined as a variable is also a constant. I would need to manually change this number if I wanted to change it.
	printf("%d\n", 5);

	return 0;

}