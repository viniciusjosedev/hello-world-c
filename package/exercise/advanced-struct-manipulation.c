#include <stdio.h>
#include <string.h>

struct Book {
	char title[1024];
	char author[1024];
	int published_year;
	int price;
};

void addBook(struct Book b[], int l, struct Book nb) {
	for (int i = 0; i < l; i++) {
		if (b[i].published_year == 0) {
			// *b[i].author = nb.author;
			strcpy(b[i].author, nb.author);
			b[i].price = nb.price;
			b[i].published_year = nb.published_year;
			strcpy(b[i].title, nb.title);
			return;
		}
	}
}

void findAll(struct Book b[]) {
	int i = 0;
	while(b[i].published_year != 0) {
		printf("author: %s\n", b[i].author);
		printf("price: %d\n", b[i].price);
		printf("published_year: %d\n", b[i].published_year);
		printf("title: %s\n", b[i].title);
		i++;
	}
}

struct Book findByTitle(struct Book b[], int l, char *p) {
	for(int i = 0; i < l; i++) {
		if (strcmp(b[i].title, p) == 0) return b[i];
	}
}

int main() {
	struct Book books[1024] = {0};

	struct Book newBook = {.author="my", .price=12, .published_year=2025, .title="teste"};
	addBook(&books, sizeof(books), newBook);
	findAll(&books);
	
	struct Book findBook = findByTitle(books, sizeof(books), newBook.title);

	printf("findBook title: %s\n", findBook.title);
	
	return 0;
}