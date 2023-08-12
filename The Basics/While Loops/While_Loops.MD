# While Loops

While loops are similar to for loops, but have less functionality. A while loop continues executing the while block as long as the condition in the while remains true. 
For example, the following code will execute exactly ten times:

int n = 0;
while (n < 10) {
    n++;
}

While Loops can also execute indefinitely, as long as the condition remains true. (Non-Zero):

while (1) {
    /* This will run forever */
}

# Loop Directives

There are two important loop directives that are used in conjunction with all loop types in C - the break and continue directives.

The break directive halts a loop after ten loops, even though the while loop never finishes:

int n = 0;
while (1) {
    n++;
    if (n == 10) {
        break;
    }
}

In the following code, the continue directive causes the printf command to be skipped, so that only even numbers are printed out:

int n = 0;
while (n < 10) {
    n++;

    /* check that n is odd */
    if (n % 2 == 1) {
        /* go back to the start of the while block */
        continue;
    }

    /* we reach this code only if n is even */
    printf("The number %d is even.\n", n);
}
