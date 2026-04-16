#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		char str[51];
		scanf("%[^\n]s", str);
		getchar();
		printf("%d. %s\n", i + 1, str);
	}
}