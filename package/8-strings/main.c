#include <stdio.h>
#include <string.h>

int my_strlen(char *s) {
	int count = 0;

	while (s[count] != '\0') {
		count++;
	};

	return count;
}

int main(void)
{
    // char s[] = "Hello, world!";

    // for (int i = 0; i < 13; i++)
    //     printf("%c\n", s[i]);

		// char *s = "Hello, world!";   // char* here

    // for (int i = 0; i < 13; i++)
    //     printf("%c\n", s[i]);    // But still use arrays here...?

		// char *s = "Hello, world!";

    // printf("The string is %zu bytes long.\n", strlen(s));

		// char *s = "teste";

		// int length = my_strlen(s);

		// printf("%d\n", length);


		// char s[] = "Hello, world!";
    // char *t;

    // // This makes a copy of the pointer, not a copy of the string!
    // t = s;

    // // We modify t
    // t[0] = 'z';

    // // But printing s shows the modification!
    // // Because t and s point to the same string!

    // printf("%s\n", s);  // "zello, world!

    char s[] = "Hello, world!";
    char t[100];  // Each char is one byte, so plenty of room

    // This makes a copy of the string!
    strcpy(t, s);

    // We modify t
    t[0] = 'z';

    // And s remains unaffected because it's a different string
    printf("%s\n", s);  // "Hello, world!"

    // But t has been changed
    printf("%s\n", t);  // "zello, world!"

}