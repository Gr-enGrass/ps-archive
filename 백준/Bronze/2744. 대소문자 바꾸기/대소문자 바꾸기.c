#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[300] = { 0 };
	int strlen=0;

	scanf("%s", str);

	while (1)
	{
		if (str[strlen] == 0)
			break;
		strlen++;
	}
	for (int i = 0; i < strlen; i++)
	{
		if (str[i] >= 97)
		{
			str[i] -= 32;
		}
		else
		{
			str[i] += 32;
		}
	}
	for (int i = 0; i < strlen; i++)
	{
		printf("%c", str[i]);
	}
	return 0;
}