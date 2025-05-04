#include <stdio.h>

struct animal {
	char *name;
	int leg_count;
};


int compar(const void *elem1, const void *elem2)
{
    // We know we're sorting struct animals, so let's make both
    // arguments pointers to struct animals
    const struct animal *animal1 = elem1;
    const struct animal *animal2 = elem2;

    // Return <0 =0 or >0 depending on whatever we want to sort by.

    // Let's sort ascending by leg_count, so we'll return the difference
    // in the leg_counts
    if (animal1->leg_count > animal2->leg_count)
        return 1;
    
    if (animal1->leg_count < animal2->leg_count)
        return -1;

    return 0;
}


int main() {
	// int a[5] = {11, 22, 33, 44, 55};

	// int *p = &a[0];  // Or "int *p = a;" works just as well

	// printf("%d\n", *p);  // Prints 11
	// printf("%d\n", *(p + 1));  // Prints 2
	// printf("%d\n", *(p + sizeof(int)));  // Prints 55


	// for (int i = 0; i < 5; i++) {
  //   printf("%d\n", *(p + i));  // Same as p[i]!
	// }

	// int a[] = {11, 22, 33, 44, 55, 999};  // Add 999 here as a sentinel

	// int *p = &a[0];  // p points to the 11

	// int i = 1;
	// while (*p != 999) {       // While the thing p points to isn't 999
  //   printf("%d\n", *p);   // Print it
  //   p++;                  // Move p to point to the next int!
	// }

	// int a[] = {11, 22, 33, 44, 55};

  // int *p = a;  // p points to the first element of a, 11

    // Print all elements of the array a variety of ways:

    // for (int i = 0; i < 5; i++)
    //     printf("%d\n", a[i]);      // Array notation with a

    // for (int i = 0; i < 5; i++)
    //     printf("%d\n", p[i]);      // Array notation with p

    // for (int i = 0; i < 5; i++)
    //     printf("%d\n", *(a + i));  // Pointer notation with a

    // for (int i = 0; i < 5; i++)
    //     printf("%d\n", *(p + i));  // Pointer notation with p

    // for (int i = 0; i < 5; i++)
    //     printf("%d\n", *(p++));    // Moving pointer p
    //     //printf("%d\n", *(a++));    // Moving array variable a--ERROR!

	// Let's build an array of 4 struct animals with different
	// characteristics. This array is out of order by leg_count, but
	// we'll sort it in a second.
	struct animal a[4] = {
		{.name="Dog", .leg_count=4},
		{.name="Monkey", .leg_count=2},
		{.name="Antelope", .leg_count=4},
		{.name="Snake", .leg_count=0}
	};

	// Call qsort() to sort the array. qsort() needs to be told exactly
	// what to sort this data by, and we'll do that inside the compar()
	// function.
	//
	// This call is saying: qsort array a, which has 4 elements, and
	// each element is sizeof(struct animal) bytes big, and this is the
	// function that will compare any two elements.
	qsort(a, 4, sizeof(struct animal), compar);

	// Print them all out
	for (int i = 0; i < 4; i++) {
			printf("%d: %s\n", a[i].leg_count, a[i].name);
	}

	return 0;
}
