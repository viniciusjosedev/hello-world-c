#include <stdio.h>


int main() {
	int number_1;
	int number_2;

	printf("Digita o primeiro numero inteiro: ");
	scanf("%d", &number_1);
	printf("Digite o segundo numero inteiro: ");
	scanf("%d", &number_2);

	printf("A soma é: %d\n", number_1 + number_2);
	printf("A subtração é: %d\n", number_1 - number_2);
	printf("A multiplicação é: %d\n", number_1 * number_2);
	printf("A divisão é: %d\n", number_1 / number_2);

	return 0;
}