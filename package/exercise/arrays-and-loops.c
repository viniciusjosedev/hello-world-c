#include <stdio.h>

struct math_basic {
	float average;
	float sum;
};

struct math_basic average_and_sum(float *float_array, int length) {
	float sum = 0;

	for (int i=0; i < length; i++) {
		sum += float_array[i];
	}

	struct math_basic object = { .average = sum / length, .sum=sum };

	return object;
}

int main() {
	float array_of_number[10];

	printf("Type numbers separate by spaces: ");
	scanf("%f %f %f %f %f %f %f %f %f %f", array_of_number, &array_of_number[1], &array_of_number[2],
		&array_of_number[3], &array_of_number[4], &array_of_number[5], &array_of_number[6], &array_of_number[7], 
		&array_of_number[8], &array_of_number[9]);


	int length = sizeof(array_of_number) / sizeof(float);

	struct math_basic result = average_and_sum(array_of_number, length);

	printf("The average is %f and sum is %f\n", result.average, result.sum);

	return 0;
}
