#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

int main() 
{
	int cnt, size;
	char str[101];
	scanf("%s", str);
	cnt = size = strlen(str);

	for (int i = 0; i < size; i++)
	{
		if (str[i] == '=')
		{
			if (str[i - 1] == 'c')
				cnt--;
			if (str[i - 1] == 's')
				cnt--;
			if (str[i - 1] == 'z')
			{ 
				cnt--;
				if (str[i - 2] == 'd')
					cnt--;
			}
		}
		if (str[i] == '-')
		{
			if (str[i - 1] == 'c')
				cnt--;
			if (str[i - 1] == 'd')
				cnt--;
		}
		if (str[i] == 'j')
		{
			if (str[i - 1] == 'l')
				cnt--;
			if (str[i - 1] == 'n')
				cnt--;
		}
	}
	printf("%d", cnt);
}