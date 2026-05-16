#include <stdio.h>

int main() {
	int nInput = 0, max = 0;
	scanf_s("%d", &nInput);
	max = nInput;
	scanf_s("%d", &nInput);
	if (nInput > max) max = nInput;
	scanf_s("%d", &nInput);
	if (nInput > max) max = nInput;


	printf("Max: %d", max);
}