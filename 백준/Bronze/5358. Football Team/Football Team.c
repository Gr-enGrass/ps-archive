#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[30];
	while (scanf("%[^\n]s",str)!=EOF)
	{
		getchar();
		int size = strlen(str);
		for (int i = 0; i < size; i++)
		{
			if (str[i] == 'e' || str[i] == 'E')
			{
				str[i] += 4;
				continue;
			}
			if (str[i] == 'i' || str[i] == 'I')
			{
				str[i] -= 4;
			}
		}
		printf("%s\n", str);
	}
}
