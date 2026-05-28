// Max값 만드는 함수

#include <stdio.h>
int _Input() {
	int nInput = 0;

	printf("숫자를 입력해 주세요.\n");
	scanf_s("%d", &nInput);
	
	return nInput;
}

int Max_compare(int a, int b, int c) {
	int Max = 0;
	Max = a;
	if (Max < b) {
		Max = b;
		if (Max < c) {
			Max = c;
		}
	}

	else {
		if (Max < c) 
			Max = c;
	}

	return Max;
}


int main() {
	int aList[3] = { 0 };
	int Max = 0;

	for (int i = 0; i < 3; i++) {
		aList[i] = _Input();
	}

	Max = Max_compare(aList[0], aList[1], aList[2]);

	printf("Max값은: %d\n", Max);

}