#include <stdio.h>
#include <stdlib.h>

int main() {

	int dick = 6;
	int * pDick = &dick;

	printf("%p\n", pDick);

	return 0;
}