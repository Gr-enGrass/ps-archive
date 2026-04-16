#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	int n;
	scanf("%d", &n);
	int cnt = n;
	
	for (int i = 0; i < n; i++)
	{
		char str[101];
		char first = '0';
		int alphabet[26] = { 0 };
		scanf("%s", str);
		int size = strlen(str);

		for (int j = 0; j < size; j++)
		{
			if (first!=str[j])
			{
				first = str[j];
				alphabet[str[j] - 97]++;
			}
			if (alphabet[str[j] - 97] == 2)
			{
				cnt--;
				break;
			}
		}

	}
	printf("%d", cnt);
	return 0;
}