#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
	char* str = (char*)malloc(sizeof(char) * 1000001);
	int alpha[26] = { 0 };
	int sel=0;
	
	scanf("%s", str);
	int cnt = 0;

	int size = strlen(str);
	for (int i = 0; i < size; i++)
	{
		if (str[i] >= 97)
		{
			str[i] -= 32;
		}

		if (str[i] >= 65)
		{
			alpha[str[i]-65]++;
		}
	}
	int max = alpha[0];
	for (int i = 1; i < 26; i++)
	{
		if (alpha[i] > max)
		{
			max = alpha[i];
			sel = i;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] == max)
		{
			cnt++;
		}
	}
	if (cnt > 1)
	{
		printf("?");
	}
	else
	{
		printf("%c", sel+65);
	}
	free(str);
}