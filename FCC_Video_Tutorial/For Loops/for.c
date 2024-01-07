#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// Indexing Variable = A variable that keeps track of how many times a loop has run.

int main() {

	int i = 1; // Indexing Variable
	while(i <= 5) {
		printf("While %d\n", i);
		Sleep(1000);
		i++;
	}

	// Written as a condensed for loop:
	// First thing in the For Loop is the Indexing Variable, then the loop condition, then the increment.
	// The loop begins with the indexing variable set to 1, then checks if it is less than or equal to 5, then increments by 1.
	// The loop will run until the indexing variable is no longer less than or equal to 5.

	int j;
	for (j = 1; j <= 5; j++) {	// I can also decrement by using i/j--
		printf("For %d\n", j);
		Sleep(1000);
	}


	// Another good use of a for loop is to iterate through an array.

	int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

	int k;
	for (k = 0; k < 6; k++) {	// Arrays start at 0, so I need to start at 0 (Start iterator at 0). There are 6 elements in the array, so I need to stop at 6 (Stop iterator at 6). I need to increment by 1 (Increment by 1).
		printf("luckyNumbers %d\n", luckyNumbers[k]);	// The iterator is keeping track of the current index of the array,  so printing it at each loop iteration will print each element of the array one at a time. 
		Sleep(1000);
	}

	return 0;
}