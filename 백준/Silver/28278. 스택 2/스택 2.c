#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int stack[1000000] = { 0 };
int top = -1;
void push(int x)
{
	top++;
	stack[top] = x;
}

int pop()
{
	int result = stack[top];
	stack[top--] = 0;
	return result;
}

int peek()
{
	return stack[top];
}

int main() {

	int n;
	scanf(" %d", &n);
	int x;
	int y;
	for (int i = 0; i < n; i++)
	{
		scanf( " %d", &x);
		switch (x)
		{
		case 1:
			scanf(" %d\n", &y);
			push(y);
			break;
		case 2:
			peek() != 0 ? printf("%d\n", pop()) : printf("-1\n");
			break;
		case 3:
			printf("%d\n", top+1);
			break;
		case 4:
			printf("%d\n", stack[0] == 0 ? 1 : 0);
			break;
		case 5:
			printf("%d\n", peek() != 0 ? peek():-1);
			break;
		}

	}

}