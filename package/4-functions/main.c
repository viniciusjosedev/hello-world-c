#include <stdio.h>

int plus_one();

int main() {
	int i = 10, j;

	plus_one();

	j = i;

	printf("j = %d", j);
}


int plus_one(void) {
	printf("print in plus_one");
}
