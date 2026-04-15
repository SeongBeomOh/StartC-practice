#include <stdio.h>
#include <conio.h>

int main() 
{
	char Name[9];
	int age = 0;

	printf("나이를 입력하세요 : ");
	scanf_s("%d%*c", &age);
	printf("이름을 입력하세요 : ");
	gets_s(Name, sizeof(Name));

	printf("당신의 나이는 %d살이고, 이름은 \'%s\' 입니다.", age, Name);

	return 0;
}