#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


int main() {

	int nums[3][2] = {
		{1, 2},
		{3, 4},
		{5, 6}
	};
	

	// Conceptually, we are looping through each row of the array. 
	// Each time we iterate through one row, we iterate through each of the columns it contains before moving onto the next row.

	int i, j;

	for (i = 0; i < 3; i++) {		// This will loop through the rows - Iterator starts at 0, there are 3 rows, so the loop will run 3 times - once for each row.
		for (j = 0; j < 2; j++) {   // This will loop through the columns - Iterator starts at 0, there are 2 columns, so the loop will run 2 times - once for each column.
			printf("%d,", nums[i][j]);	// This will print each value of the array.
			Sleep(1000);
		}
		Sleep(1000);
		printf("\n");		// This will print a new line after each row.
	}


	return 0;
}