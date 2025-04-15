#include <stdio.h>

int main() {
	FILE *f = fopen("quote.txt", "r");
	char s[1024];

	while(fgets(&s, sizeof(s),f) != NULL) {
		printf("%s", s);
	}

	fclose(f);

	return 0;
}
