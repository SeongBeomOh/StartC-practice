#include <stdio.h>

int main() {
	int score = 0;
	printf("점수를 입력하세요: ");
	scanf_s("%d", &score);
	(score >= 80) ? printf("결과: 합격\n") : printf("결과: 불합격");

}