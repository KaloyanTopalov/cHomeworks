#include <stdio.h>
int main() {
	int nX; /* homework, input with scanf */
	int nY;

	scanf("%d %d", &nX, &nY);

	if (nX == nY) {
	 	printf("%d and %d are equal\n", nX, nY);
	}
	else {
	 	printf("%d and %d are not equal\n", nX, nY);
	}
	if (nX < nY) { printf("%d is less than %d\n", nX, nY);
	}

	return 0;
}

