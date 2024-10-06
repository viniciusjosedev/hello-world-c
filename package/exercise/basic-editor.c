#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	system("clear");

	char character;
	char text[5000];
	char nextString[2];
	char option;

	printf("Type anything! To exit type CTRL + O + ENTER: \n\n\n");

	while((character = fgetc(stdin)) != 15) {
		*nextString = character;
		nextString[1] = '\0';
		strcat(text, nextString);
	}

	system("clear");
	printf("Your text is: \n\n%s\n\n", text);

	printf("Do you want save your text in some file (Y/N)? ");
	fgetc(stdin);
	option = fgetc(stdin);


	if (option == 'Y' || option == 'y') {
		printf("Generation your file...\n");
		FILE *textFile;

		textFile = fopen("yourText.txt", "w");

		fwrite(text, sizeof(char), strlen(text), textFile);
	
		fclose(textFile);
		printf("We generate your file!\n");
	}

	printf("Thanks to use we the best editor!\n");

	return 0;
}