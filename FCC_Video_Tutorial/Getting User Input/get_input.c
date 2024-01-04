#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// Getting User Input - As an Integer
	int age;
	printf("Enter your age: ");
	scanf("%d", &age); // &age is a pointer to the address of the variable age
	//printf("You are %d years old\n", age);

	// Getting User Input - As a Double

	double gpa;
	printf("Enter your gpa: ");
	scanf("%lf", &gpa); // %lf is used for doubles
	//printf("Your gpa is %lf\n", gpa);

	// Getting User Input - As a Floating Point Number
	float grade_num;
	printf("Enter your grade number: ");
	scanf("%f", &grade_num); // %f is used for floats
	//printf("Your grade is %f\n", grade);

	// Getting User Input - As a single character
	char grade;
	printf("Enter your grade: ");
	scanf(" %c", &grade); // %c is used for characters - Note the space before %c. This is to ignore the newline character that is automatically added when the user presses enter.
	//printf("Your grade is %c\n", grade);

	printf("Enter your name: ");
	char name[20]; // Remember, when storing strings as variables we store them as an array of single characters with there length defined. In this case, the name can be up to 20 characters long.
	scanf("%s", name); // %s is used for strings

	printf("\n\nYour Details:\n\nName: %s\nAge: %d\nGPA: %lf\nGrade Number: %f\nGrade: %c", name, age, gpa, grade_num, grade);


	// Scanf will only read the first word of a string. If you want to read a string with spaces, you need to use fgets.

	char full_name[50];
	printf("\n\nEnter your full name: ");
	fgets(full_name, 50, stdin); // fgets will read the entire line of text, including spaces. The 50 is the maximum number of characters that can be read. stdin is the standard input.
	printf("Your full name is %s", full_name);

	// Using fgets also protects against buffer overflow attacks. If the user enters more than 50 characters, the program will crash.
	// fgets will also read the newline character. To remove this, we can use the strtok function from the string.h library.
	

	return 0;
}