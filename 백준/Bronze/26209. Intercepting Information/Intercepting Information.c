#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[17] = {0};
	scanf("%[^\n]s",str);
	for (int i = 0; i < 16; i++)
	{
		if (str[i] == '9')
		{
			printf("F");
			return 0;
		}
	}
	printf("S");
}