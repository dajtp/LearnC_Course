#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


// Below is an example of a 2D array. 
// The first set of brackets is the number of rows, the second set is the number of columns.
// The first row is 0, the second row is 1, etc.

int main() {

	int nums[3][2] = {
		{1, 2},
		{3, 4},
		{5, 6}
	
	};

	printf("%d\n", nums[1][1]);		// Accessing the second row & second column (index position 1,1) - This will print 4.
	Sleep(1000);
	printf("%d\n", nums[0][0]); 	// Accessing the first row & first column (index position 0,0) - This will print 1.
	Sleep(1000);
	printf("%d\n", nums[2][0]);		// Accessing the third row & first column (index position 2,0) - This will print 5.
	Sleep(1000);
	printf("%d\n", nums[2][1]);		// Accessing the third row & second column (index position 2,1) - This will print 6.
	Sleep(1000);
	printf("%d\n", nums[1][0]);		// Accessing the second row & first column (index position 1,0) - This will print 3.
	Sleep(1000);
	printf("%d\n", nums[0][1]);		// Accessing the first row & second column (index position 0,1) - This will print 2.
	Sleep(1000);

	// I can also store values within multidimensional arrays by referencing the index position.

	nums[0][0] = 7;		// This will change the value of the first row & first column (index position 0,0) to 7.
	printf("%d\n", nums[0][0]);		// This will print 7.)

	return 0;
}