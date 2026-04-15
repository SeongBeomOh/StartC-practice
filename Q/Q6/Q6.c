#include <stdio.h>

int main()
{
	int Input1 = 0, Input2 = 0;
	int sum = 0;

	printf("첫번쩨 숫자를 입력해주세요: ");
	scanf_s("%d", &Input1);
	printf("두번째 숫자를 입력해주세요: ");
	scanf_s("%d", &Input2);

	sum = Input1 + (~Input2 + 1);

	printf("Input1 - Input2 = %d", sum);

	return 0;
}