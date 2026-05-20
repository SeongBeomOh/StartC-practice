#include <stdio.h>

int main() {
	int star = 1;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5 - i; j++) {
			putchar('\t');
		}

		for (int k = 0; k < i+1; k++) {
			putchar('*');
			putchar('\t');
		}
		putchar('\n');
	}

}