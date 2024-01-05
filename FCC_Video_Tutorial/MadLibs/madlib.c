#include <stdio.h>
#include <stdlib.h>

int main() {

	char color[20];
	char pluralNoun[20];
	char celebrityF[20];
	char celebrityL[20];

	printf("Enter a color: ");
	scanf("%s", color);
	printf("Enter a plural noun: ");
	scanf("%s", pluralNoun);
	printf("Enter a celebrity: ");
	scanf("%s%s", celebrityF, celebrityL);

    printf("Roses are %s\n", color);
	printf("%s are blue\n", pluralNoun);
	printf("I love %s %s\n", celebrityF, celebrityL);
	
	// C is very specific about defining what is going to be input by the user. If the user is only going to provide one word, then we must code around that. More than
	// one word will need us to approach it differently, such as by using fgets. 

	return 0;
}