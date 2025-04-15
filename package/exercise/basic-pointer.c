#include <stdio.h>

int main() {
	int i = 10;
	int o = 10;

	*(&i) = 20;
	*(&o) = 20;
	
	printf("i: %d\n", i);
	printf("o: %d\n", i);

	return 0;
}


