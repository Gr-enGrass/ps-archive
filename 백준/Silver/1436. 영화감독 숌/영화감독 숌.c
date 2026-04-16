#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int temp;
	int check = 0;
	int cnt = 666;

	while (1) 
	{
		temp = cnt;
		while (temp)
		{
			if (temp % 1000 == 666)
			{
				check++;
				break;
			}
				temp /= 10;
		}
		if (check==n)
		{
			printf("%d", cnt);
			break;
		}		
		cnt++;
	}
}