#include <stdio.h>
#include <stdbool.h>

void loop() {
	long int i = 0;

	while (i <= 500000000) {
		i++;
		// printf("\nnumber: %ld", i);
	}
}

void switchPerson() {
	switch (1) {
    case 1:
			printf("um\n");
			// Fall through!
    case 2:
			printf("dois\n");
			break;
    case 3:
			printf("tres\n");
			break;
	}
}

int main() {
	int i;
	float f;

	i = 2000000;
	f = 34;
	char *s = "Hello, World!";

	printf("%s i = %d and f = %f\n", s, i, f);

	bool x = true;

	if (x) {
		printf("verdadeiro");
	};

	printf("\n%s", 1 == 2 ? "teste" : "nao teste");

	f = 34 + ++i;

	s = "oi";

	printf("\n %f %d", f, i);

	printf("\n%s", s);

	size_t sizeI = sizeof i;

	printf("\n %zu\n", sizeI);
	printf("\n %zu\n", sizeof (long));

	loop();

	switchPerson();

	return 0;
}

