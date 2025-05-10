#include <limits.h>
#include <float.h>

int main() {
	// printf("%d", CHAR_MIN);

	// long long int o = 10;
	// long long i = 10;

	// printf("%d\n", o);
	// printf("%d\n", i);
	// printf("%d\n", FLT_RADIX);
	printf("%d\n", FLT_DIG);
	printf("%d\n", DBL_DIG);
	printf("%d\n", LDBL_DIG);

	double x = 0.123456791;

	short i = 10;

	printf("%d\n", sizeof i);

	return 0;
}
