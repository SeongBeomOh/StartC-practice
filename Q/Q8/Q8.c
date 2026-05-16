#include <stdio.h>

int main() {
	int nInput = 0, max = 0;
	scanf_s("%d", &nInput);
	max = nInput;
	scanf_s("%d", &nInput);
	//(nInput > max) ? (max = nInput) : (max = max);
	max = (nInput > max) ? nInput : max;
	scanf_s("%d", &nInput);
	//(nInput > max) ? (max = nInput) : (max = max);
	max = (nInput > max) ? nInput : max;
	printf("Max: %d", max);
}