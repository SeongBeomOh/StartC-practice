#include <stdio.h>

int main() {
	int idxMin = 0, temp = 0;
	int nArray[5] = { 3,5,1,2,4 };

	for (int i = 0; i < 4; i++) {
		idxMin = i;
		temp = nArray[i];
		for (int j = i + 1; j < 5; j++) {
			if (nArray[idxMin] > nArray[j]) {
				idxMin = j;
			}
		}
		if(idxMin != i){
			nArray[i] = nArray[idxMin];
			nArray[idxMin] = temp;
		}

		for (int k = 0; k < 5; k++) {
			printf("%d ", nArray[k]);
		}
		putchar('\n');


	}

	
	return 0;

}