#include <stdio.h>

int main() {
	int nInput1 = 0, nInput2 = 0, nInput3 = 0, max = 0;
	scanf_s("%d %d %d", &nInput1, &nInput2, &nInput3);
	max = nInput1 > nInput2 ? nInput1 : nInput2;
	max = max > nInput3 ? max : nInput3;
	printf("Max: %d", max);
}