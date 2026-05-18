#include <stdio.h>

int main() {
	int wi = 1, result1 = 0, result2 = 0;
	for (int i = 1; i < 11; ++i) {
		result1 += i;
	}

	while (wi < 11) {
		result2 += wi;
		++wi;
	}

	printf("Total1 : %d\n", result1);
	printf("Total2 : %d\n", result2);

	return 0;
}