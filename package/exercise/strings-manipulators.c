#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int strlen_vowels(char s[]) {
	int i = 0;
	const char vowels[] = {'a', 'e', 'i', 'o', 'u'};
	int count_vowels = 0;

	while(s[i] != '\0') {
		for (long unsigned int v = 0; v < sizeof(vowels); v++) {
			if (vowels[v] == s[i]) {
				count_vowels++;
			}
		};

		i++;
	}

	return count_vowels;
}

int main() {
	char all_s[1024];
	
	printf("Type your text for see how much vowels have: ");
	fscanf(stdin, "%s", &all_s);

	printf("\nThis strings have %d vowels.\n", strlen_vowels(all_s));

	return 0;
}

