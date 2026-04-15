#include <stdio.h>

int main() 
{
	int nData = 0x11223344;

	printf("%d\n", nData);
	printf("%08x\n", nData & 0x00FFFF00);
	printf("%08x\n", nData | 0x00FFFF00);
	printf("%08x\n", nData ^ 0x00FFFFF00);
	printf("%08x\n", ~nData);
	printf("%08x\n", nData >> 8);
	printf("%08x\n", nData << 8);

	return 0;
}