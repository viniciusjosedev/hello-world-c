#include <stdio.h>

int main() {
	int number_one;
	int number_two;


	printf("Type 2 numbers to see your sum, subtraction, multiplication and division\n");

	printf("Number 1: ");
	fscanf(stdin, "%d", &number_one);


	printf("Number 2: ");
	fscanf(stdin, "%d", &number_two);

	printf("\nsum: %d\n", number_one + number_two);
	printf("subtraction: %d\n", number_one - number_two);
	printf("multiplication: %d\n", number_one * number_two);
	printf("division: %d\n", number_one / number_two);


	return 0;
}