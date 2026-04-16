#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char str[51] = { 0 };
	char str_copy[51] = { 0 };
	char check[51] = { 0 };
	scanf("%d", &n);
	scanf("%s", str);

	if (n == 1)
	{
		printf("%s", str);
		return 0;
	}

	int size = strlen(str);


	for (int j = 0; j < size; j++)
	{
		check[j] = 1;
		str_copy[j] = str[j];
	}

	for (int i = 1; i < n; i++)
	{
		scanf("%s", str);

		for (int j = 0; j < size; j++)
		{
			if (str_copy[j] == str[j])
			{
				check[j]++;
			}
		}
	}
	for (int k = 0; k < size; k++)
	{
		if (check[k] ==  n)
		{
			if (str_copy[k] == '.')
				printf(".");
			else
				printf("%c", str_copy[k]);
		}
		else
			printf("?");
	}

	return 0;
}