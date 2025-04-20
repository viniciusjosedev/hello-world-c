#include <stdio.h>
#include <string.h>

int main() {
	char s[1024];
	char sf[1024];

	printf("Type your phrase: ");
	fgets(s, sizeof(s), stdin);

	int intervals[1024][1024];
	
	int length = strlen(s);
	s[length - 1] = ' ';

	int start = 0;
	int indexInterval = 0;

	int qtdSpaces = 0;

	for(int i = 0; i < length; i++) {
		if (s[i] == ' ' || s[i] == '\n') {
			intervals[indexInterval][0] = start;
			intervals[indexInterval][1] = i - 1;
			start = i + 1;
			qtdSpaces++;
			indexInterval++;
		}
	}

	int lengthInterval = qtdSpaces - 1;

	int fi = 0;

	for (int i = lengthInterval; i >= 0; i--) {
    int startInterval = intervals[i][0];
    int endInterval = intervals[i][1];


		for (int o = startInterval; o <= endInterval; o++) {
			if (s[o] != '\n') {
				sf[fi] = s[o];
				fi++;
			}
		}

		sf[fi] = ' ';
		fi++;
	}

	sf[fi] = '\0';

	
	printf("\nstrint default: %s\n", s);
	printf("strint inverse: %s\n", sf);

	return 0;
}
