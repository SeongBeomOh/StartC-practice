#include <stdio.h>
#include <conio.h>

int main(void)
{
	//변수 선언
	char ch = 0;
	printf("아무 키나 누르면 다음으로 넘어갑니다. \n");

	// 값입력
	ch = _getch();

	//출력
	printf("입력한 키는 ");
	putchar(ch);
	printf("입니다.\n");
	return 0;
}