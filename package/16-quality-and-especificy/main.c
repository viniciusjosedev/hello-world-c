#include <stdio.h>

void swap(int *restrict a, int *restrict b) {
    int t;

    t = *a;
    *a = *b;
    *b = t;
}

void count() {
	static int i = 0;

	printf("%i\n", i++);
	printf("%i\n", i++);
	printf("%i\n", i++);
	printf("%i\n", i++);
}

int main() {
	// const int i = 10;

	// i = 20;

	// printf("%i", i);

	// int i = 10;

	// swap(&i, &i);

	// count();
	// count();

	// extern int i;

	// printf("%i\n", i);

	register int i = 10;

	int *p = &i;

	printf("%i\n", i);

	return 0;
}
