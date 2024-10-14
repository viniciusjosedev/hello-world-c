#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct telephone {
	char name[100];
	unsigned long int tel;
	char email[100];
};

void printSpaceOption() {
	printf("> ");
}

void printOptions() {
	printf("1 - List all telephones\n2 - Add telephone\n3 - Remove telephone\n\n");
	printSpaceOption();
}

void listTelephones(struct telephone *directory, unsigned long int lenDirectory) {
	unsigned long int totalTelephone = 0;
	for (unsigned long int i; i < lenDirectory; i++) {
		if (directory[i].name[0] != '\0') {
			totalTelephone++;
			printf("name: %s, number: %li, email: %s\n", directory[i].name, directory[i].tel, directory[i].email);
		}
	}

	if (totalTelephone == 0) {
		printf("\nno telephone found\n\n");
	} else {
		printf("\nTotal: %li\n\n", totalTelephone);
	}

	printOptions();
	fgetc(stdin);
}

void addTelephone(struct telephone *directory) {
	struct telephone newTelephone;
	unsigned long int i = 0;

	system("clear");
	printf("To add is need name, telephone and email\n");
	printf("Name: ");
	fgets(newTelephone.name, sizeof(newTelephone.name), stdin);
	newTelephone.name[strcspn(newTelephone.name, "\n")] = '\0';

	fgetc(stdin);
	printf("Telephone: ");
	scanf("%d", &newTelephone.tel);

	while (getchar() != '\n');
	
	fgetc(stdin);
	printf("Email: ");
	fgets(newTelephone.email, sizeof(newTelephone.email), stdin);
	newTelephone.name[strcspn(newTelephone.name, "\n")] = '\0';

	printf("teste: %s", newTelephone.name);


	while(1) {
		if (directory[i].name[0] == '\0') {
			directory[i] = newTelephone;
			break;
		}
	}

	printOptions();
	fgetc(stdin);
}

int main() {
	struct telephone directory[1000];
	char option;

	memset(directory, 0, sizeof(directory));

	printf("Welcome to telephone directory! To exit, press ESC\n\n");
	printOptions();

	while ((option = fgetc(stdin)) != 27) {
		if (option != '1' && option != '2' && option != '3' ) {
			printf("Option not found\n");
			printOptions();
		}

		if (option == '1') {
			listTelephones(directory, sizeof(directory) / sizeof(struct telephone));
		}

		if (option == '2') {
			addTelephone(directory);
		}


		if (option == '3') {
			printOptions();
			fgetc(stdin);
		}
	}


	return 0;
}