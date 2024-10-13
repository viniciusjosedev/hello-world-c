#include <stdio.h>

struct book {
	char title[100];
	char author[100];
	int publishYear[100];
	float price;
};

int main() {
	struct book myBook = { .author = "teste", .title =  "title", .price = 12, .publishYear = 2024 };
	struct book afterRead;

	FILE *fp = fopen("data-serialization.bin", "wb");

	fwrite(&myBook, sizeof(myBook), 1, fp);

	fclose(fp);

	fp = fopen("data-serialization.bin", "r");

	fread(&afterRead, sizeof(afterRead), 1, fp);

	printf("%s\n", afterRead.title);

	return 0;
}