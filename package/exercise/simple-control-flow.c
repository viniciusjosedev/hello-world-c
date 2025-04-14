#include <stdio.h>


int main() {
	int i;

	printf("Type a any number: ");
	fscanf(stdin, "%d", &i);

	if ((i % 2) == 0) {
		printf("\nThe number is pair\n");
	} else {
		printf("\nThe number is unpaired\n");
	};


	return 0;
}
