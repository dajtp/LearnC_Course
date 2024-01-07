#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


// All information in a computer is stored in memory. 
// In C, we can access the memory address of a variable by using the ampersand (&) operator BEFORE the variable name.
// We also need to use %p in the printf() function to print the address - This is short for pointer. 



int main() {

	int age = 30;
	double gpa = 3.4;
	char grade = 'A';

	printf("\nAge: %p\n", &age);
	printf("GPA: %p\n", &gpa);
	printf("Grade: %p\n", &grade);

	};