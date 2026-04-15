#include <stdio.h>

int main()
{
	int num1 = 0, sum = 0;

	scanf_s("%d", &num1);
	sum += num1;
	scanf_s("%d", &num1);
	sum += num1;
	scanf_s("%d", &num1);
	sum += num1;

	printf("Total: %d", sum);

}