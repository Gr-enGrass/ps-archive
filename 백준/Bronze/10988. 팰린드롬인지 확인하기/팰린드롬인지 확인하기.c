#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	int cnt = 0, result;

	scanf("%s", str);

	for (int i = 0; i < strlen(str)-1 / 2; i++)
	{
		if (str[i] == str[strlen(str) -1 - cnt])
		{
			result = 1;
		}
		else
		{
			result = 0;
		}
		cnt++;
		if (result == 0)
		{
			printf("0");
			return 0;
		}
	}
	printf("1");
	return 0;
}