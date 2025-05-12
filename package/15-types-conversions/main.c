#include <stdio.h>
#include <stdlib.h>

int main()
{
	// char s[10];
	// float f = 3.14159;

	// snprintf(s, sizeof s, "%f", f);

	// printf("%s\n", s);

	// char *s = "teste 2.2";
	// double f;

	// f = atof(s);

	// printf("%f\n", f);

	// char *s = "101010";
	// int i;

	// i = strtol(s, NULL, 10);

	// printf("%i\n", i);

	// char *s = "34x90";  // "x" is not a valid digit in base 10!
	// char *badchar;

	// // Convert string s, a number in base 10, to an unsigned long int.

	// unsigned long int x = strtoul(s, &badchar, 10);

	// // It tries to convert as much as possible, so gets this far:

	// printf("%lu\n", x);  // 34

	// // But we can see the offending bad character because badchar
	// // points to it!

	// printf("Invalid character: %c\n", *badchar);  // "x"

	// int i = 10;
	// int *p = &i;

	// printf("%p\n", (void *)p);

	// int i = 10;
	// long int l = (long)i + 20;

	// printf("%lld\n", l);

	int i = 10;
	double d = 3.5;
	int result = i + d;

	printf("%d\n", result);

	return 0;
}
