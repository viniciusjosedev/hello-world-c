#include <stdio.h>
#include <string.h>

// int main() {

// 	char *s = "Hello, world!";

// 	printf("%s", s);

// 	return 0;
// }

int length(char *s) {
	int length = 0;

	while(s[length] != '\0' ) {
		length++;
	}

	return length;
}

void copy_string(char *s, char *c) {
	int index = 0;
	while(s[index] != '\0') {
		c[index] = s[index];
		index++;
	}
}

int main() {
	char *s = "Hello, world!";
	char c[100];

	// printf("%zu\n", strlen(s));
	// printf("%i\n", length(s));

	// copy_string(s, c);
	strcpy(c, s);

	c[0] = 'Z';

	printf("%s\n", s);
	printf("%s\n", c);
	

	return 0;
}


