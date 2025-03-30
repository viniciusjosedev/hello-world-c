#include <stdio.h>

// int main() {
// 	int i = 10;

// 	printf("The value of i is %d\n", i);
// 	printf("And its address is %p\n", (void *)&i);

// 	return 0;
// }

// int main() {
// 	int i = 10;
// 	int *p = &i;

// 	printf("pointer p: %p\n", p);
// 	printf("pointer i-p: %p\n", &i);

// 	printf("value pointer p = %d\n", *p);
// 	printf("value i = %d\n", i);

// 	*p = 20;

// 	printf("value pointer p = %d\n", *p);
// 	printf("value i = %d\n", i);

// }

// void increment(int *p) {
// 	*p += 1;
// }


// int main(){

// 	int i = 10;
// 	int *p = &i;


// 	printf("i = %d\n", i);


// 	increment(p); // increment(&i)

// 	printf("i = %d\n", i);

// 	return 0;
// }


// int main() {

// 	const int i = 10;

// 	printf("i = %d", i);

// 	return 0;
// }

int main() {
	int *p;

	// Prints size of an 'int'
	printf("%zu\n", sizeof(int));

	// p is type 'int *', so prints size of 'int*'
	printf("%zu\n", sizeof p);

	// *p is type 'int', so prints size of 'int'
	printf("%zu\n", sizeof *p);

	return 0;
}
