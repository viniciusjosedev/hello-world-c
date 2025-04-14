#include <stdio.h>


int main() {
	int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
	int sum;

	for (int i; i < 10; i++) {
		sum += numbers[i];
	}

	printf("The sum is: %d\n", sum);


	return 0;
}
