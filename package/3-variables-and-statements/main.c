#include <stdio.h>
#include <stdbool.h>

// int main() {
	// int i;
	// float f;
// 
	// i = 10;
	// f = 10.2;
	// const *s = "Hello, world!";
// 
	// printf("%s, i = %d, f = %f\n", s, i, f);
// 
	// int x = 1;
// 
	// if (x) {
			// printf("x is true!\n");
	// }
// 
	// return 0;
// }

// int main(void) {
//     bool x = true;

//     if (x) {
//         printf("x is true!\n");
//     }
// }


// int main(void) {
// 	// int x = 10;
// 	// int y = 5 + x++;

// 	// printf("x = %d, y = %d\n", x ,y); // output: x = 11, y = 15

// 	int x = 10;
// 	int y = 5 + ++x;

// 	printf("x = %d, y = %d\n", x ,y); // output: x = 11, y = 16

// 	return 0;
// }

int main(void) {
	int a = 999;

	printf("%zu\n", sizeof a);
	printf("%zu\n", sizeof(2 + 7));
	printf("%zu\n", sizeof 3.14);

	return 0;
}
