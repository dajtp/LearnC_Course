#include <stdio.h>
#include <stdlib.h>

int main() {

	// An Array is a variable that can store multiple values. Each value in an array is called an element. Each element has a unique index, which is used to access it. The index starts at 0.
	 
	int lucky_numbers[] = {4, 8, 15, 16, 23, 42}; // This is an array of integers. The size of the array is 6. The size of the array is defined by the number of elements in the array.
	printf("%d\n", lucky_numbers[0]); // This will print the first element in the array, which is 4.
	printf("%d\n", lucky_numbers[2]); // This will print the third element in the array, which is 15.

	// In C, we start the index at 0. This means that the last element in the array is the size of the array minus 1.

	lucky_numbers[0] = 90; // This will change the first element in the array to 90.

	printf("%d\n", lucky_numbers[0]); // This will print the first element in the array, which is now 90.


	// Define an array without storing any data inside it yet.

	int lucky_numbers2[10]; // This will create an array of 10 integers. The size of the array is 10. The size of the array is defined by the number of elements in the array.

	lucky_numbers2[3] = 21; // This will change the fourth element in the array to 21.

	return 0;
}