#include <stdio.h>
#include <stdlib.h>

int main() {

	printf("Ensure you read the comments in the code to understand what is happening\n\n");
	printf("%f", 8.9);
	printf("\n");


	// I can do math sums apparently, using this function

	printf("%f\n", 5.1 + 4.5); // 9.600000
	printf("%d\n", 4 / 2); // 2
	printf("%d\n", 5 - 2); // 3
	printf("%f\n", 5.5 * 2.5); // 13.750000

	// Working with integers and floats
	// To do this the type must be defined as a float/double - The whole operation gets converted into a float/double
	// Math (Float and Float) = Float, Math (Int and Int) = Int, Math (Int and Float) = Float

	printf("%f\n", 5 + 4.5); // 9.500000
	printf("%f\n", 5.5 - 2); // 3.500000

	// Be mindful that if I do math with integers, it will return an integer (even if the correct answer is not a whole number - it will provide a whole number answer)

	printf("%d\n", 5 / 2); // Will return 2 (Correct answer is 2.5)
	printf("%f\n", 5.0 / 2); // Will return 2.500000 (Correct)
	printf("%f\n", 5.0 / 2.0); // Will return 2.500000 (Correct)

	// All the above operations can be done using variables in the place of the numbers

	int num1 = 6;
	int num2 = 4;
	double num3 = 5.5;
	double num4 = 2.5;

	printf("%f\n", num3 + num4); // 8.000000
	printf("%f\n", num3 - num4); // 3.000000
	printf("%f\n", num1 / num4); // 2.400000
	printf("%d\n", num1 * num2); // 24

	return 0;
}
