#include <stdio.h>

int main() {
	// printf("Hello, world!\n");
	// fprintf(stdout, "Hello, world!\n");  // printf to a file	

	// FILE *fp;                      // Variable to represent open file

	// fp = fopen("hello.txt", "r");  // Open file for reading

	// int c = fgetc(fp);             // Read a single character
	// printf("%c\n", c);             // Print char to stdout

	// fclose(fp);                    // Close the file when done

	// FILE *fp;
	// int c;

	// fp = fopen("hello.txt", "r");

	// while ((c = fgetc(fp)) == EOF)
	// 	printf("%c", c);

	// fclose(fp);
	// FILE *fp;
	// char s[1024];  // Big enough for any line this program will encounter
	// int linecount = 0;

	// fp = fopen("quote.txt", "r");

	// while (fgets(s, sizeof s, fp) != NULL) 
	// 		printf("%d: %s", ++linecount, s);

	// fclose(fp);

	  // FILE *fp;
    // char name[1024];  // Big enough for any line this program will encounter
    // float length;
    // int mass;

    // fp = fopen("whales.txt", "r");

    // while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF)
    //     printf("%s whale, %d tonnes, %.1f meters\n", name, mass, length);

    // fclose(fp);

		// FILE *fp;
    // int x = 32;

    // fp = stdout;

    // fputc('B', fp);
    // fputc('\n', fp);   // newline
    // fprintf(fp, "x = %d\n", x);
    // fputs("Hello, world!\n", fp);

    // fclose(fp);
		
		// FILE *fp;
    // unsigned char bytes[6] = {5, 37, 0, 88, 255, 12};

    // fp = fopen("output.bin", "wb");  // wb mode for "write binary"!

    // // In the call to fwrite, the arguments are:
    // //
    // // * Pointer to data to write
    // // * Size of each "piece" of data
    // // * Count of each "piece" of data
    // // * FILE*

    // fwrite(bytes, sizeof(char), 6, fp);

		FILE *fp;
    unsigned char c;

    fp = fopen("output.bin", "rb"); // rb for "read binary"!

    while (fread(&c, sizeof(char), 1, fp) > 0)
        printf("%d\n", c);

    fclose(fp);
}