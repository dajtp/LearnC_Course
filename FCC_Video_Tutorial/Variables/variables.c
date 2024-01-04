#include <stdio.h>
#include <stdlib.h>

int main()
{
	char characterName[] = "John";
	int characterAge = 35;

	printf("There once was a man named %s\n", characterName);
	printf("he was %d years old.\n", characterAge);

	// Change the variable
	characterAge = 30;
	printf("He really liked the name %s\n", characterName);
	printf("but did not like being %d.\n", characterAge);

	return 0;
}

// Placeholders: %s = string, %d = integer, %f = float, %c = character
// I cannot simply redefine the characterName variable, this is because in C you cannot change the value of an array directly.
// Instead, I have to use a function called strcpy() to copy the new value into the array.
// strcpy(characterName, "Tom");