#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Hello\nWorld");
	printf("\nHello\"World");
	printf("\nMy favourite number is %d", 500);
	printf("\nMy favourite %s is %d", "number", 500);
	printf("\nMy favourite %s is %f", "number", 500.5478);

	double favNum = 1231547.1;
	char myChar = 'i';
	printf("\nMy favourite %s is %f and my favourite character is %c", "number", favNum, myChar);

	return 0;
}

// Placeholders: %s = string, %d = integer (whole number), %f = float (or double), %c = character (single character)