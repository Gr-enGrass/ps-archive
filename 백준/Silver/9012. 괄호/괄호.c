#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	
	int n;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int top = -1;
		int result = 1;
		char check[51] = { 0 };
		char stack[51] = { 0 };
		scanf("%s", check);
		int size = strlen(check);

		for (int j = 0; j < size; j++)
		{
			if (check[j] == '(')
			{
				stack[++top] = check[j];
			}
			else 
			{
				if (stack[top] != '(')
				{
					result = 0;
				}
				else
				{
					stack[top--] = 0;
				}
			}
		}
		if (stack[0] != 0)
			result = 0;

		printf("%s\n", result == 1 ? "YES" : "NO");
	}
}