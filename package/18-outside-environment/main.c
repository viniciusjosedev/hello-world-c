#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	// float f = 0;

	// for (int i = 1; i < argc; i++) {
	// 	char *err;
	// 	float arg = strtod(argv[i], &err);

	// 	if (*err != '\0') {
	// 		printf("Only numbers!\n");
	// 		return 1;
	// 	}

	// 	f += arg;
	// }

	// printf("%f\n", f);

	char *env = getenv("port");

	printf("%s\n", env);

	return 0;
}
