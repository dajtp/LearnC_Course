#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Return Statements = These will allow a function to return information back after being called. 
// The void return type returns nothing after execution
// Entering any other data type in its place will allow the function to return data of that type

double cube(double num)
{
	double result = num * num * num;
	return result; // the return keyword will break us out of the function and also return the value of, in this case 'result', back to the caller.
	
	// This can also be written as: 
	// return num * num * num;
}

int main()
{
	printf("Answer: %f", cube(3.0)); // This will call the function cube and pass in the number 3 as a parameter. The function will then return the value of result back to the caller.)
	return 0;
}

// A way of creating a function below the main function is to use a function prototype.
// This is a way of telling the compiler that there is a function below the main function that will be called later.
// This is done by writing the function name, return type and parameters above the main function - like so:

// double cube(double num);

// You could then write the function below the main function like so:

// double cube(double num)
// {
// 	double result = num * num * num;
// 	return result;
// }