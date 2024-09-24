#include <stdio.h>

int main() {
	int number;

	printf("Type a number and we went decide if is pair or odd: ");
	scanf("%d", &number);

	if (number % 2 == 0) {
		printf("The number is pair\n");
	} else {
		printf("The number is odd\n");
	}

	return 0;
}
