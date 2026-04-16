#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{

	while (1)
	{
		int top = -1;
		int result = 1;
		char check[101] = { 0 };
		char stack[101] = { 0 };
		gets(check);

		if (check[0] == '.')
			break;

		int size = strlen(check);

		for (int j = 0; j < size; j++)
		{
			if (check[j] == '(')
			{
				stack[++top] = check[j];
			}
			else if (check[j] == ')')
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
			if (check[j] == '[')
			{
				stack[++top] = check[j];
			}
			else if (check[j] == ']')
			{
				if (stack[top] != '[')
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

		printf("%s\n", result == 1 ? "yes" : "no");
	}
}