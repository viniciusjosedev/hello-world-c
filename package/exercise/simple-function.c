#include <stdio.h>

int compare(int number_one, int number_two) {
	return number_one > number_two ? number_one : number_two;
}

int main() {
	int number_one;
	int number_two;

	printf("Type a number 1: ");
	fscanf(stdin, "%d", &number_one);

	printf("Type a number 2: ");
	fscanf(stdin, "%d", &number_two);

	printf("\nThe highest number is: %d\n", compare(number_one, number_two));

	return 0;
}
