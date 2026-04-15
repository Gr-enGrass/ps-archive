#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int>arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	int left = 0,right = n-1;
	int cnt = 0;
	while (left < right)
	{
		int sum = arr[left] + arr[right];
		if (sum > m)
		{
			right--;
		}
		else if (sum < m)
		{
			left++;
		}
		else
		{
			cnt++;
			left++;
		}
	}
	cout << cnt;
}