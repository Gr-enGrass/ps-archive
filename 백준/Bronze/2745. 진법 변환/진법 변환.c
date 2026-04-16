#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int n,cnt=0;
	int sum = 0;
	char* str = (char*)malloc(sizeof(char) * 10000);
	scanf("%s %d", str,&n);
	int size = strlen(str);
	for (int i = size-1; i >= 0; i--)
	{
		if (str[i] >= 65)
		{
			str[i] -= 55;
			sum += (str[i]*pow(n,cnt++));
		}
		else
		{
			str[i] -= 48;
			sum += (str[i] * pow(n, cnt++));
		}
	}
	printf("%d", sum);
	free(str);
}