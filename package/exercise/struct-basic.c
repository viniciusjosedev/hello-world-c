#include <stdio.h>

struct Person {
	char name[1024];
	int age;
  float height;
};

int main() {
	struct Person person;

	printf("Type your name: ");
	fscanf(stdin, "%s", &person.name);

	printf("Type your age: ");
	fscanf(stdin, "%d", &person.age);

	printf("Type your height: ");
	fscanf(stdin, "%f", &person.height);

	printf("\nname: %s\n", person.name);
	printf("age: %d\n", person.age);
	printf("height: %f\n", person.height);

	return 0;
}
