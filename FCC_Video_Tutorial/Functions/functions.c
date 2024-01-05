#include <stdio.h>
#include <stdlib.h>

// Return Type = The type of data that the function will return. If the function does not return anything, the return type is void.

void sayHi(char name[], int age) // This is a function called sayHi that takes in a string as a parameter. The function does not return anything, so the return type is void.
{
	printf("Hello %s! You are %d years old\n", name, age);
}

void YouTool()
{
	char name2[20];
	printf("Enter Your Name: ");
	scanf("%s", name2);

	printf("%s, you are a fucking twat!", name2);
}

int main()
{
	sayHi("Jake", 28); // This will call the function sayHi and pass in the string "Jake" as a parameter.
	sayHi("Sophie", 22);
	sayHi("Twat", 1540);
	YouTool();
	return 0;
}


// Perameters = The values that the function takes in. These are defined in the brackets after the function name.


// Ensure that the main function is always at the bottom of the file. 
// This is because the compiler reads the file from top to bottom. If the main function is at the top of the file, the compiler will not know what the other functions are when it reaches them.