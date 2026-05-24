#include <stdio.h>

int main() {
	int nArray[5] = { 50, 40, 10, 50 , 20 };
	int nMax = 0;
	for (int i = 0; i < sizeof(nArray)/sizeof(int); i++) {
		if (i == 0) {
			nMax = nArray[0];
		}
		else if(nArray[i] > nMax) {
			nMax = nArray[i];
		}
	}
	
	for (int j = 0; j < sizeof(nArray)/sizeof(int); j++) {
		printf("%d ", nArray[j]);
	}
	putchar('\n');
	printf("Max: %d\n", nMax);
}