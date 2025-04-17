#include <stdio.h>

struct Book {
	char title[1024];
	char author[1024];
	int published_year;
	int price;
};

int main() {
	struct Book bookWrite[1024] = {{.author="My", .price=123, .published_year=2025, .title="title"}};

	FILE *fw = fopen("output.bin", "wb");

	fwrite(bookWrite, sizeof(struct Book), sizeof(bookWrite) / sizeof(struct Book), fw);

	fclose(fw);

	struct Book bookRead[1024];

	FILE *fr = fopen("output.bin", "rb");

	fread(bookRead, sizeof(struct Book), sizeof(bookRead) / sizeof(struct Book), fr);

	fclose(fr);

	printf("%s\n", bookRead[0].title);
	
	return 0;
}
