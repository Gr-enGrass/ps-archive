#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char arr[101] = { 0 };
	char arr_c[101] = { 0 };

	scanf("%s", arr);
	int len = strlen(arr);
	for (int i = 0; i < len; i++)
	{
		arr_c[i]=arr[len-i-1];
	}

	int flag = strncmp(arr, arr_c, len / 2);
	printf("%d", flag ? 0 : 1);
}