#include <stdio.h>

void foo(int x[12])
{
    printf("%zu\n", sizeof x);     // 8?! What happened to 48?
    printf("%zu\n", sizeof(int));  // 4 bytes per int

    printf("%zu\n", sizeof x / sizeof(int));  // 8/4 = 2 ints?? WRONG.
}

// Passing as a pointer to the first element
void times2(int *a, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d\n", a[i] * 2);
}

// Same thing, but using array notation
void times3(int a[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d\n", a[i] * 3);
}

// Same thing, but using array notation with size
void times4(int a[5], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d\n", a[i] * 4);
}


void view(int *a) {
		*a = 88;
		printf("%d\n", *a);
}


int main(void)
{
    // int i;
    // float f[4];  // Declare an array of 4 floats

    // f[0] = 3.14159;  // Indexing starts at 0, of course.
    // f[1] = 1.41421;
    // f[2] = 1.61803;
    // f[3] = 2.71828;
		// f[3] = 2.222;

    // // Print them all out:

    // for (i = 0; i < 4; i++) {
    //     printf("%f\n", f[i]);
    // }
		
		// int x[12];  // 12 ints

		// printf("%zu\n", sizeof x);     // 48 total bytes
		// printf("%zu\n", sizeof(int));  // 4 bytes per int

		// printf("%zu\n", sizeof x / sizeof(int));  // 48/4 = 12 ints!

		// foo(x);
		
		// printf("%zu\n", sizeof(double [48]));

		// int a[] = {1, 2, 3, 4, 5};



		// int i;
    // int a[5] = {22, 37, 3490, 18, 95};

    // for (i = 0; i < 10; i++) {  // BAD NEWS: printing too many elements!
    //     printf("%d\n", a[i]);
    // }

		// int row, col;

    // int a[2][5] = {      // Initialize a 2D array
    //     {0, 1, 2, 3, 4},
    //     {5, 6, 7, 8, 9}
    // };

    // for (row = 0; row < 2; row++) {
    //     for (col = 0; col < 5; col++) {
    //         printf("(%d,%d) = %d\n", row, col, a[row][col]);
    //     }
    // }

		// int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

		// printf("%d\n", a[0][0]);  // 1

		// int a[5] = {11, 22, 33, 44, 55};
    // int *p;

    // p = &a[0];  // p points to the array
    //             // Well, to the first element, actually

    // printf("%d\n", *p);  // Prints "11"

		// int x[5] = {11, 22, 33, 44, 55};

    // times2(x, 5);
    // times3(x, 5);
    // times4(x, 5);

		// int a[5] = {3, 2, 3, 4, 5};

		// view(a);

		// printf("%d\n", a[0]);
}