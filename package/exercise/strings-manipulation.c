#include <stdio.h>
#include <string.h>

int main() {
	char text[1000];

	printf("Type any text: ");
	fgets(text, 1000, stdin);

	printf("The string have %d\n", strlen(text));

	return 0;
}