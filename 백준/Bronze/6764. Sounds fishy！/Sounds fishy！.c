#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[4];
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &arr[i]);
	}
	if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3])
	{
		printf("Fish At Constant Depth");
	}
	else if (arr[0] < arr[1] && arr[1] < arr[2] && arr[2] < arr[3])
	{
		printf("Fish Rising");
	}
	else if (arr[0] > arr[1] && arr[1] > arr[2] && arr[2] > arr[3])
	{
		printf("Fish Diving");
	}
	else
		printf("No Fish");
	return 0;
}