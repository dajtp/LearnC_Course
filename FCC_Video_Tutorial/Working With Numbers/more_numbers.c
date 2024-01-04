#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    // There are also some inbuilt math functions that can be used to do more complex math operations
    // One example is the pow function, which is used to raise a number to a power

    // Okay so FreeCodeCamp just straight up lied. 
    // pow() is not an inbuilt function, it is part of the math.h library. I had to include it above to use it.

    printf("%f\n", pow(2, 3)); // 2 Cubed - 8
    printf("%f\n", pow(3, 2)); // 3 Squared - 9
    printf("%f\n", pow(4, 0.5)); // 4 Square Root - 2

    // Proper Square Root function is sqrt()

    printf("The Square Root of 4 is %f\n", sqrt(4)); // 2

    // There are also some other functions that can be used to round numbers
    // ceil() rounds up
    // floor() rounds down

    printf("The Ceiling of 4.2 is %f\n", ceil(4.2)); // 5
    printf("The Floor of 4.8 is %f\n", floor(4.8)); // 4

    // For more use cases and functions, check out the math.h library documentation or search 'C Math Functions' on Google.

    return 0;
}
