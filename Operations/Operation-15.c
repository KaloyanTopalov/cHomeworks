#include <stdio.h>
int main() {
	int nA;
	int nB;
	int nX;
	int nY;

	scanf("%d %d %d %d", &nA, &nB, &nX, &nY);

	if ( nX > nB && nA !=0 ) {
		printf("&& Operator : Both conditions are true\n");
	}
	if ( !(nX < nY) || nY == 20) {
 		printf("|| Operator : Only one condition is true\n");
 	}
 	if ( ! (nA > nY && nB !=0 ) ) {
 		printf(" ! Operator : Both conditions are true\n");
 	}
	 else {
 		printf("Both conditions are true.\n");
 	}

	return 0;
}

