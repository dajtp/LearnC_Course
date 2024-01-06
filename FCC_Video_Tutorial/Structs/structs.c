#include <stdio.h>
#include <stdlib.h>

struct Student {

	char name[50];
	char degree[50];
	double gpa;
	int age;
};


int main() {

	struct Student student1;
	strcpy(student1.name, "Jake");
	strcpy(student1.degree, "Computer Science");
	student1.gpa = 3.5;
	student1.age = 22;

	struct Student student2;
	strcpy(student2.name, "Pam");
	strcpy(student2.degree, "Art");
	student2.gpa = 3.0;
	student2.age = 21;
	
	printf("\nStudent 1:\n");
	printf("\nName = %s\n", student1.name);
	printf("Degree = %s\n", student1.degree);
	printf("GPA = %f\n", student1.gpa);
	printf("Student's Age = %d\n", student1.age);

	printf("\nStudent 2:\n");
	printf("\nName = %s\n", student2.name);
	printf("Degree = %s\n", student2.degree);
	printf("GPA = %f\n", student2.gpa);
	printf("Student's Age = %d\n", student2.age);

	return 0;
}	


// A struct is a data structure that allows us to store different types of data together.
// I can think of it as a collection of variables of different types under a single name.

// strcpy() is a function that allows us to copy one string to another string.
// We must use strcpy() because we cannot assign one string to another string using the assignment operator (=).