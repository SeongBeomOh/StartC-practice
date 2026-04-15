#include <stdio.h>

int main()
{
	// 시,분,초 입력값 초기화
	int InputSeconds = 0;
	int seconds = 0;
	int minutes = 0;
	int hours = 0;

	// 사용자로부터 초 입력받기
	scanf_s("%d", &InputSeconds);

	// 시분초 계산
	seconds = InputSeconds % 60;
	minutes = (InputSeconds / 60) % 60;
	hours = (InputSeconds / 60) / 60;

	
	//출력
	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", InputSeconds, hours, minutes, seconds);

	return 0;
}