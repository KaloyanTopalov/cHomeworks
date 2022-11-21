#include <stdio.h>

int main() {
	long long int A = 1;

	A ^= A << 13;
	printf("%lld\n", A);
	A ^= A >> 17;
	printf("%lld\n", A);
	A ^= A << 5;
	printf("%lld", A);

	return 0;
}

