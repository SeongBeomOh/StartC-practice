#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char szBuffer[12] = { "Helloworld" };
	char* pszData = NULL;
	pszData = (char*)malloc(sizeof(char) * 12);
	if (pszData == NULL) {
		return 1;
	}
	memcpy(pszData,szBuffer,12);
	puts(pszData);

	free(pszData);
	return 0;
}