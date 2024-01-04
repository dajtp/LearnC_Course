#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age = 40;									// int is a whole number
	double gpa = 3.6;								// double is a decimal number
	char grade = 'A';								// char is a single character - use single quotes ' '
	char phrase[] = "Giraffe Academy";				// string is a sequence of characters - use double quotes " "

	printf("I am %d years old.\n", age);
	printf("I have a %f gpa.\n", gpa);
	printf("I got an %c in this course.\n", grade);
	printf("The phrase is %s.\n", phrase);

	return 0;

}