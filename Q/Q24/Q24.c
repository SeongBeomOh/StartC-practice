// 교차 배열 문제

#include <stdio.h>

int main() {
	int aList[5][5] = { 0 };
	int aList2[5][5] = { 0 };
	int count = 0, count2 = 0;

	// 내가 한거
	for (int i = 0; i < 5; i++) {
		if (!(i & 1)) {
			for (int j = 0; j < 5; j++) {
				count++;
				aList[i][j] = count;
			}
		}
		else {
			for (int j = 4; j > -1; j--){
				count++;
				aList[i][j] = count;
			}
		}

	}

	//수업 해설
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i % 2 == 0)
				aList2[i][j] = ++count2;
			else
				aList2[i][4 - j] = ++count2;
		}

	}

	for (int k = 0; k < 5; k++) {
		for (int l = 0; l < 5; l++) {
			printf("%-2d ", aList[k][l]);
		}
		putchar('\n');
	}
}

