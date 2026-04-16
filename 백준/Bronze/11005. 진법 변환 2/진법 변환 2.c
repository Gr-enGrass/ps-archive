#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse(char str[])
{
	int len = strlen(str);
	char temp;
	for (int i = 0; i < len/2; i++)
	{
		temp = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = temp;
	}
}

int main()
{
	int N, B,result,cnt=0;
	char str[10000] = { 0 };
	scanf("%d %d", &N, &B);
	result = N;
	while (N/B!=0)
	{
		result =N % B;
		N /= B;
		if (result >= 10)
		{
			str[cnt] = result + 55;
		}
		else
			str[cnt] = result + 48;
		cnt++;
	}
	if (N >= 10)
		str[cnt] = N + 55;
	else
		str[cnt] = N + 48;
	reverse(str);
	printf("%s", str);
}