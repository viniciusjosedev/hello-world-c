#include <stdio.h>

float compare_number(float number_1, float number_2) {
	return number_1 > number_2 ? number_1 : number_2;
}

int main() {
	float number_1;
	float number_2;

	printf("Type a first number: ");
	scanf("%f", &number_1);
	
	printf("Type a second number: ");
	scanf("%f", &number_2);

	printf("The number %f is the biggest\n", compare_number(number_1, number_2));

	return 0;
}