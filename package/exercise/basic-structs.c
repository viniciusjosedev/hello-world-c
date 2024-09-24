#include <stdio.h>

struct Person {
	char name[100];
	int age;
	float size;
};

int main() {
	struct Person person;

	printf("Type your name: ");
	scanf("%s", person.name);

	printf("Type your age: ");
	scanf("%d", &person.age);

	printf("Type your size: ");
	scanf("%f", &person.size);


	printf("Your name are: %s\n", person.name);
	printf("Your age are: %d\n", person.age);
	printf("Your size are: %f\n", person.size);
	return 0;
}
