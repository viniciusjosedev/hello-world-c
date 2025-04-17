#include <stdio.h>

struct Book {
	char title[1024];
	char author[1024];
	int published_year;
	int price;
};

int main() {
	struct Book bookWrite = {.author="My", .price=123, .published_year=2025, .title="title"};

	FILE *fw = fopen("output.bin", "wb");

	fwrite(&bookWrite, sizeof(bookWrite), 1, fw);

	fclose(fw);

	struct Book bookRead;

	FILE *fr = fopen("output.bin", "rb");

	fread(&bookRead, sizeof(bookRead), 1, fr);

	fclose(fr);

	printf("%s", bookRead.title);
	
	return 0;
}
