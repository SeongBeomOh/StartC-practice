#include <stdio.h>
#include <conio.h>

int main()
{
	//변수선언
	char szName[32] = { 0 };

	printf("이름을 입력하세요: ");
	gets_s(szName,sizeof(szName));

	printf("당신의 이름은 ");
	puts(szName);
	puts("입니다.");

	return 0;
}