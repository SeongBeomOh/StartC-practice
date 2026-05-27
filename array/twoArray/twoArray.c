#include <stdio.h>

int main() {
	int aList[3][4] = {
		{10, 20, 30},
		{40, 50, 60},
		{50, 70, 90}
	};


	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for(int j = 0; j < 4; j++){
			if (j == 3) {
				aList[i][j] = sum;
			}
			else {
				sum += aList[i][j];
			}
			printf("%d ", aList[i][j]);
		}	
		putchar('\n');
	}
}