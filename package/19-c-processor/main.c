#include <stdio.h>

#define MULTI(x) (x) * (x)

int main(void) {
	// printf("This function: %s\n", __func__);
	// printf("This file: %s\n", __FILE__);
	// printf("This line: %d\n", __LINE__);
	// printf("Compiled on: %s %s\n", __DATE__, __TIME__);
	// printf("C Version: %ld\n", __STDC_VERSION__);


	printf("%d\n", MULTI(12 + 12));
}