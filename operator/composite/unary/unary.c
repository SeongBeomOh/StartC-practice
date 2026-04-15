#include <stdio.h>

int main()
{
	//변수 선언
	int x = 0;
	int nResult = 0;

	//단항 더하기,빼기연습
	++x;
	printf("%d\n", x);

	x++;
	printf("%d\n", x);

	nResult = ++x;
	printf("%d, %d\n", nResult,x);

	nResult = x--;
	printf("%d, %d\n", nResult, x);

	return 0;
}