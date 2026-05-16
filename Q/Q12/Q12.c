#include <stdio.h>

int main() {
	int age = 0, charge = 1000;
	scanf_s("%d", &age);

	if (age > 14) {
		if (age < 19) charge = 1000 - (charge / 4);
	}
	else { 
		if (age > 3) charge = charge / 2;
		else charge = 0;
	}
	printf("나이는: %d, 요금은: %d", age, charge);

}