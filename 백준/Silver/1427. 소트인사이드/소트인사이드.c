#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[11];
	int cheak[10] = { 0 };
	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		cheak[str[i] - 48]++;
	}
	for (int k = 9; k >= 0; k--) {
		for (int j = 0; j<cheak[k]; j++) {
			printf("%d", k);
		}
	}	
}