#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int x;
	int y;
} point;
point sorted[100000];

void merge(point* arr, int left, int mid, int right)
{
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right)
	{
		if (arr[i].x < arr[j].x)
			sorted[k++] = arr[i++];
		else if (arr[i].x > arr[j].x)
			sorted[k++] = arr[j++];
		else {
			if (arr[i].y < arr[j].y)
				sorted[k++] = arr[i++];
			else if (arr[i].y > arr[j].y)
				sorted[k++] = arr[j++];
		}
	}

	if (i > mid)
	{
		for (l = j; l <= right; l++)
			sorted[k++] = arr[l];
	}
	else
	{
		for (l = i; l <= mid; l++)
			sorted[k++] = arr[l];
	}

	for (l = left; l <= right; l++)
	{
		arr[l] = sorted[l];
	}
}

void merge_sort(point* arr, int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort(arr, left, mid);
		merge_sort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	point arr[100000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}
	merge_sort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", arr[i].x, arr[i].y);
	}

	return 0;
}