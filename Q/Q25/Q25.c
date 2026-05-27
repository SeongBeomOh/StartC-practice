//달팽이 배열 문제

#include <stdio.h>
int main() {
	int aList[5][5] = { 0 };
	int count = 0, flag = 1, rows = 0, cols = 0;

	for (int i = 9; i > 0; i -= 2) {
		for (int j = i-1; j > 0; j--) {
			if((flag == 1) && (j > (i/2))) {
				aList[rows][cols] = ++count;
				cols++;
			}
			else if ((flag == 1) && (j <= (i / 2))) {
				aList[rows][cols] = ++count;
				rows++;
			}
			else if ((flag == 0) && (j > (i / 2))) {
				aList[rows][cols] = ++count;
				cols--;
			}

			else {
				aList[rows][cols] = ++count;
				rows--;
			}
			
			
		}
		aList[rows][cols] = ++count;

		if (flag){
			cols--;
			flag = 0;
		}
		else {
			cols++;
			flag = 1;
		}
			
	}


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%-2d ", aList[i][j]);
		}
		putchar('\n');
	}
}