#include <stdio.h>

// int main() {
// 	FILE *f;

// 	f = fopen("hello.txt", "r");

// 	char c;


// 	while((c = fgetc(f)) != EOF) {
// 		printf("%c", c);
// 	}

// 	return 0;
// }

// int main() {

// 	FILE *f;

// 	f = fopen("quote.txt", "r");

// 	char phrases[1024];

// 	while(fgets(phrases, sizeof phrases, f) != NULL) {
// 		printf("%s", phrases);
// 	}

// 	return 0;
// }

// int main() {
// 	FILE *fp;

// 	fp = fopen("whales.txt", "r");

// 	char s[1024];
// 	float f;
// 	int i;

// 	while(fscanf(fp, "%s %f %d", &s, &f, &i) != EOF) {
// 		printf("%s, %f, %i\n", s, f, i);
// 	}

// 	return 0;
// }


// int main() {
// 	FILE *fp = fopen("output.txt", "w");
// 	int i = 10;

// 	fputc('B', fp);
// 	fputc('\n', fp);
// 	fprintf(fp, "X = %d\n", i);
// 	fputs("Hello, world!\n", fp);
	
// 	fclose(fp);


// 	return 0;
// }


// int main() {
// 	FILE *fp = fopen("output.bin", "wb");

// 	unsigned char caracters[6] = {1, 2, 3, 4, 5, 6};

// 	fwrite(caracters, sizeof(char), 6, fp);

// 	fclose(fp);

// 	return 0;
// }


int main() {
	FILE *fp = fopen("output.bin", "rb");

	unsigned char c;

	while(fread(&c, sizeof(char), 1, fp) > 0) {
		printf("%d\n", c);
	}

	fclose(fp);

	return 0;
}
