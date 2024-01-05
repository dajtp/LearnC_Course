#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cunt(int first, int second, int third)
{
	int result;
	if (first >= second && first >= third) {
		result = first;
	} else if (second >= first && second >= third) {
		result = second;
	} else {
		result = third;
	}
	return result;
}

int main()
{
	printf("The biggest number is: %d\n", cunt(6, 5, 1));

	// I can use the || operator to act as an 'OR' operator
	if (2 > 2 || 2 > 5) {
		printf("True");
	} else {
		printf("False");
	}

	return 0;
}

// So, apparently the CL compiler doesn't like the word 'max' when used to name a function. Not sure why exactly...

// Negation Operations: Within an if statement I can surround the check condition with perenthisis and prefix it with an ! mark to negate it. 
// This means that if the check condition evaluates to true, it will be negated and doesn't print. If it evaluates to false, it will return as true. 

// if(!(3 > 2)) - Negated
// if(!(3 < 2)) - Returns True (Even though it's false