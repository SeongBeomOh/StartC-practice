#include <stdio.h>

int main() {
START:
	printf("메뉴를 선택하세요. \n");
	printf("\t[A] 산술연산 (나눗셈) \n");
	printf("\t[B] 비트 연산 (AND)\n");
	printf("\t[Q] 프로그램 종료\n");

	char menu = 0;
	int nInput1 = 0, nInput2 = 0, bitResult = 0;
	double result = 0;
	menu = getchar();
	getchar();

	switch (menu)
	{
	case 'A' :
	case 'a' :
		scanf_s("%d%d%*c", &nInput1, &nInput2);
		if (nInput2 == 0) {
			printf("0으로 나눌 수 없습니다.");
			goto START;
			break;
		}
		else {
			result = (double)nInput1 / nInput2;
			printf("%.2f\n", result);
			printf("%s입니다", (result >= 10.00 ? "10 이상" : " 10 미만"));
			goto START;
			break;
		}

	case 'B' :
	case 'b' :
		scanf_s("%d%d%*c", &nInput1, &nInput2);
		bitResult = nInput1 & nInput2;
		printf("두 정수 비트 AND값은 : %d, 메모리 크기는 각각 : %zu, %zu", bitResult, sizeof(nInput1), sizeof(nInput2));
		goto START;
		break;

	case 'Q' :
	case 'q' :
		printf("프로그램은 종료합니다.");
		break;

	default :
		printf("잘못된 입력입니다.");
		goto START;


	}

}