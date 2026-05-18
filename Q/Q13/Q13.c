#include <stdio.h>

int main() {
	
	int nInput = 0;
	scanf_s("%d", &nInput);

	if (nInput < 0 && nInput > 10)
	{
		printf("끝입니다");
	}

	while (nInput > 0 && nInput < 10)
	{
		putchar('*');
		nInput--;
	}
	putchar('\n');
	return 0;

}