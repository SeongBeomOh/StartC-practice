#include <stdio.h>

int main() {
	int aList[5][5] = { 0 };
	int count = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++){
			count++;
			aList[i][j] = count;
			printf("%-2d ", aList[i][j]);
		}
		putchar('\n');
	}
}
