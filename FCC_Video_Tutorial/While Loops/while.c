#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {

	int index = 1;

	while(index <= 5) {
		printf("%d\n", index);
		Sleep(1000);
		index++;
		// index = index + 1;
	}

	do {
		printf("%d\n", index);
		Sleep(1000);
		index++;
	} while(index <= 5);

	return 0;
}

// To use the Sleep function, I need to import the Windows.h library.

// The do while loop is used when you want to run the code at least once. 
// In a do while loop, the condition is checked at the end of the loop - therefore the code will always run at least once.