#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[51];
	int N;
	scanf("%d", &N);
	scanf("%s", str);
	int cnt = N,cnt2=0;
	for (int i = 0; i < cnt; i++)
	{
		if (str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o')
			++cnt2;
	}
	printf("%d", cnt2);
}