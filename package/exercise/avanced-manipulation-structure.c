#include <stdio.h>
#include <string.h>

struct book {
	char title[100];
	char author[100];
	int publishYear[100];
	float price;
};

void findByName(struct book *books, struct book *booksFiltered, int lengthBook, char *name) {
	int count = 0;

	for (int i = 0; i < lengthBook; i++) {
		if (strcmp(books[i].author, name) == 0) {
			booksFiltered[count++] = books[i];
		} else {
			booksFiltered[count++].author[0] = '\0';
		}
	}
}

void addBook(struct book *books, struct book book) {
	int count = 0;

	while (books[count].author[0] != '\0') {
		count++;
	};

	books[count] = book;
}

void deleteByName(struct book *books, char *name) {
	int count = 0;
	while (strcmp(books[count].author,  name) != 0) {
		count++;
	}

	books[count] = (struct book){.author = "\0"};
}

int main() {
	struct book books[1000] = { { .author = "teste", .title =  "title", .price = 12, .publishYear = 2024 } };
	struct book booksFiltered[sizeof books / sizeof(struct book)];

	addBook(books, (struct book){ .author = "hanas frozen", .title =  "title", .price = 12, .publishYear = 2024 });
	findByName(books, booksFiltered, sizeof books / sizeof(struct book), "teste");
	


	for (int i = 0; i < sizeof books / sizeof(struct book); i++) {
		if (booksFiltered[i].author[0] != '\0') {
			printf("author filtered: %s\n", booksFiltered[i].author);
		}
	}

	printf("befor delete\n");

	for (int i = 0; i < sizeof books / sizeof(struct book); i++) {
		if (books[i].author[0] != '\0') {
			printf("author all: %s\n", books[i].author);
		}
	}

	deleteByName(books, "hanas frozen");
	printf("after delete\n");


	for (int i = 0; i < sizeof books / sizeof(struct book); i++) {
		if (books[i].author[0] != '\0') {
			printf("author all: %s\n", books[i].author);
		}
	}

	return 0;
}
