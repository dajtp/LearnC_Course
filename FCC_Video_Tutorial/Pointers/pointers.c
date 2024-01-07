#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// A pointer is a variable that stores the memory address as its value.

int main() {

	int age = 30;
	double gpa = 3.4;
	char grade = 'A';

	int * pAge = &age; // This is a pointer variable. It stores the memory address of the variable age.
	double * pGpa = &gpa; // This is a pointer variable. It stores the memory address of the variable gpa.
	char * pGrade = &grade; // This is a pointer variable. It stores the memory address of the variable grade.

	printf("Age's Memory Address is: %p\n", &age);
	printf("%p\n", pAge); // This will print the memory address of the variable age.")

	return 0;
}