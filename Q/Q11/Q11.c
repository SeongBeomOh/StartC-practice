#include <stdio.h>

int main() {
	int age = 0, charge = 1000;
	scanf_s("%d", &age);
	
	// 20살 이전엔 가격 25퍼할인
	if (age < 20)
		charge = charge / 4 * 3;

	// 20살 이후는 20살 고정시키고 가격은 기본요금
	if (age >= 20) age = 20;

	printf("나이: %d, 최종요금: %d원", age, charge);
}