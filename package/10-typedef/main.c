#include <stdio.h>

typedef int new_int;

struct new_struct
{
	char name[1024];
};

typedef struct new_struct new_struct_def;

typedef struct new_2_struct
{
	char name[1024];
} new_2_struct_def;

typedef struct
{
	char name[1024];
} new_3_struct_def;

typedef int *intp;

typedef int five_intp[];

int main()
{
	int i = 10;

	new_struct_def new = {.name = "test"};
	new_2_struct_def new2 = {.name = "test"};
	new_3_struct_def new3 = {.name = "test"};

	printf("%s", new3.name);

	intp p = &i;
	five_intp array = {0};

	return 0;
}
