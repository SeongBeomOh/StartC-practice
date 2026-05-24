#include <stdio.h>

int main() {
	int nArray[5];
	int temp = 0;
	for (int i = 0; i < sizeof(nArray) / sizeof(int); i++) {
		scanf_s("%d", &nArray[i]);
	}

	for (int i = 0; i < sizeof(nArray)/sizeof(int); i++){
		for (int j = i + 1; j < sizeof(nArray) / sizeof(int); j++) {
			if (nArray[i] > nArray[j]) {
				temp = nArray[i];
				nArray[i] = nArray[j];
				nArray[j] = temp;
			}
		}
	}

	for (int i = 0; i < sizeof(nArray) / sizeof(int); i++) {
		printf("%d ", nArray[i]);
	}
	
}