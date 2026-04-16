#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int strlen;
	char S[101], abc[26]; 
	int str[26];

	for (int n = 0; n < 26; ++n)
	{
		str[n] = -1;
	}
	scanf("%s", S);

	for (int j = 0; j < 101; ++j)
	{
		if (S[j] == NULL)
		{
			strlen = j-1;
			break;
		}
	}
	
	for (int i = 0; i < 26; ++i)
	{
		abc[i] = 'a' + i;
	}

	for (int k = strlen; k >= 0; --k)
	{
		for (int l = 26; l >= 0; --l)
		{
			if (S[k] == abc[l])
			{
				str[l] = k;
			}
		}
	}
	
	for (int m = 0; m < 26; ++m)
	{
		printf("%d ", str[m]);
	}
	return 0;
}