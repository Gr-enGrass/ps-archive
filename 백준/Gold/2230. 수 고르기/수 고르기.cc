#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int>arr(n);
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	int left = 0, right = 1;
	int temp = INT32_MAX;
	while (right<n)
	{
		if (arr[right] - arr[left]>m)
		{
			if (temp > arr[right] - arr[left])
			{
				temp = arr[right] - arr[left];
			}
			left++;
		}
		else if (arr[right] - arr[left] < m)
		{
			right++;
		}
		else
		{
			cout << m;
			return 0;
		}
	}
	cout << temp;
}