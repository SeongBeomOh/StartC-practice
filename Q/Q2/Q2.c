#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	printf("두 정수를 입력하세요: ");
	scanf_s("%d%d", &num1, &num2);

	sum = num1 + num2;

	printf("AVG: %.2f", (double)sum / 2);


}