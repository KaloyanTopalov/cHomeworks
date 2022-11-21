#include <stdio.h>
#include <unistd.h>

int runLight(char *light, int position) {
	light[position - 1] = '-';
	printf("%s\n", light);
	sleep(1.5);
    light[position - 1] = '.';
}

int main() {
	int l1,l2,l3,l4;
	char light[] = ".................";

	scanf("%d %d %d %d", &l1, &l2, &l3, &l4);

	runLight(light, l1);
	runLight(light, l2);
	runLight(light, l3);
	runLight(light, l4);

	return 0;
}
