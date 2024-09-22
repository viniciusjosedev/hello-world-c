#include <stdio.h>

void increment(int *p)  // note that it accepts a pointer to an int
{
    *p = *p + 1;        // add one to the thing p points to
}

int main(void)
{
    // printf("an int uses %zu bytes of memory\n", sizeof(int));

		//  int i = 10;

    // printf("The value of i is %d\n", i);
    // printf("And its address is %p\n", (void *)&i);

		// int i;
    // int *p;  // this is NOT a dereference--this is a type "int*"

    // p = &i;  // p now points to i, p holds address of i

    // i = 10;  // i is now 10
    // *p = 20; // the thing p points to (namely i!) is now 20!!

    // printf("i is %d\n", i);   // prints "20"
    // printf("i is %d\n", *p);  // "20"! dereference-p is the same as i!

		// int i = 10;
    // int *j = &i;  // note the address-of; turns it into a pointer to i

    // printf("i is %d\n", i);        // prints "10"
    // printf("i is also %d\n", *j);  // prints "10"
		// printf("*j type is %zu\n", sizeof((void *)&i));

    // increment(j);                  // j is an int*--to i

    // printf("i is %d\n", i);        // prints "11"!

		// int *p = NULL;

		// *p = 12;

		int *p;

		// Prints size of an 'int'
		printf("%zu\n", sizeof(int));

		// p is type 'int *', so prints size of 'int*'
		printf("%zu\n", sizeof p);

		// *p is type 'int', so prints size of 'int'
		printf("%zu\n", sizeof *p);
}