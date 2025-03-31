#include <stdio.h>

// int main() {
// 	float f[4];

// 	f[0] = 3.1;
// 	f[1] = 3.2;
// 	f[2] = 3.3;
// 	f[3] = 3.4;

// 	for(int i = 0; i < 4; i++) {
// 		printf("value of index %d = %f\n", i, f[i]);
// 	}

// 	return 0;
// }

// void foo(int x[12]) {
//     printf("%zu\n", sizeof x);     // 8?! What happened to 48?
//     printf("%zu\n", sizeof(int));  // 4 bytes per int

//     printf("%zu\n", sizeof x / sizeof(int));  // 8/4 = 2 ints?? WRONG.
// }

// int main() {
// 	int x[12];

// 	// printf("%zu\n", sizeof x);     // 48 total bytes
// 	// printf("%zu\n", sizeof(int));  // 4 bytes per int
	
// 	// printf("%zu\n", sizeof x / sizeof(int));  // 48/4 = 12 ints!

// 	foo(x);

// 	return 0;
// }

// int main() {
// 	#define COUNT 5

// 	printf("count is %d", COUNT);

// 	return 0;
// }

// int main(void)
// {
//     int i;
//     int a[5] = {22, 37, 3490, 18, 95};

//     for (i = 0; i < 10; i++) {  // BAD NEWS: printing too many elements!
//         printf("%d\n", a[i]);
//     }
// }


// int main() {
// 	int a[2] = {10,2,3}; 
// 	int *p = a;

// 	printf("%d\n", *p);


// 	return 0;
// }


void times2(int *p, int len) {
	for (int i = 0; i < len; i++) {
		printf("times2: %d\n", p[i] * 2);
	}
}

void times3(int p[5], int len) {
	for (int i = 0; i < len; i++) {
		printf("times3: %d\n", p[i] * 4);
	}
}

void times4(int p[], int len) {
	for (int i = 0; i < len; i++) {
		printf("times4: %d\n", p[i] * 3);
	}
}

int main() {
	int x[5] = {1,2,3,4,5};

	times2(x, sizeof(x) / sizeof(x[0]));
	times3(x, sizeof(x) / sizeof(x[0]));
	times4(x, sizeof(x) / sizeof(x[0]));

	return 0;
}

