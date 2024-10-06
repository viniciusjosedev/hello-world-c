#include <stdio.h>

int main() {
	FILE *file;
	char text[1024];

	file = fopen("hello.txt", "r");
	
	while(fgets(text, sizeof text, file) != NULL) {
		printf("%s\n", text);
	}

	return 0;
}
