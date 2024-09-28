#include <stdio.h>

int main() {
	int x;
	int *px = &x;
	int y;
	int *py = &y;

	*px = 5;
	*py = 10;

	printf("%d\n", *px + *py);

	return 0;
}