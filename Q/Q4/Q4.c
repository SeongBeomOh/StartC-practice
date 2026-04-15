#include <stdio.h>

int main()
{
	// 변수 할당
	int a = 0;
	int b = 0;
	int tmp = 0;
	

	// a,b 유저로부터 입력값 받아오기

	printf("숫자1 : ");
	scanf_s("%d", &a);
	printf("숫자2 : ");
	scanf_s("%d", &b);

	printf("a = %d, b = %d\n", a, b);

	// a,b 변경
	tmp = a;
	a = b;
	b = tmp;
	printf("a = %d, b = %d ", a, b);

	return 0;
	
}