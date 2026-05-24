#include <stdio.h>

int main() {
	int nArray[5] = { 3, 5, 10, 2, 8 };
	int temp = 0;
	for (int i = 0; i < sizeof(nArray) / sizeof(int); i++) {
		if (i == 0) {
			temp = nArray[i];
		}
		else if (nArray[0] > nArray[i]) {
			temp = nArray[i];
			nArray[i] = nArray[0];
			nArray[0] = temp;
		}
	}
	for (int j = 0; j < sizeof(nArray) / sizeof(int) ; j++) {
		printf("%d ", nArray[j]);
	}
	putchar('\n');
	printf("Min : %d\n", nArray[0]);
}