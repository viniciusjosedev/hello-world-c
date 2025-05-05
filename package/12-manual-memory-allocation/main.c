#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
	// int *p = malloc(sizeof(int));

	// *p = 20;

	// printf("%d", *p);

	// free(p);

	// return 0;

	// int *x;

	// x = malloc(sizeof(int) * 10);

	// if (x == NULL) {
  //   printf("Error allocating 10 ints\n");
  //   // do something here to handle it
	// }

	// Allocate space for 10 ints
	// int *p = malloc(sizeof(int) * 10);

	// // Assign them values 0-45:
	// for (int i = 0; i < 10; i++)
	// 		p[i] = i * 5;

	// // Print all values 0, 5, 10, 15, ..., 40, 45
	// for (int i = 0; i < 10; i++)
	// 		printf("%d\n", p[i]);

	// // Free the space
	// free(p);

	// int *p = malloc(10 * sizeof(*p));
	// memset(p, 0, 10 * sizeof(*p));

	// printf("%d", p[3]);

	// char *p = calloc(1024 * 1024 * 1024, sizeof(*p));

  // printf("%d", p[3]);

	// scanf(stdin, "%s", p);

	// free(p);

	int *p = malloc(sizeof(*p) * 10);

	for (int i = 0; i < 10; i++) {
		p[i] = 10;
	}

	int *new_p = realloc(NULL, sizeof(*p) * 20);

	p = new_p;

	for (int i = 10; i < 20; i++) {
		p[i] = 20;
	}

	for (int i = 0; i < 20; i++) {
		printf("%d", p[i]);
	}

}
