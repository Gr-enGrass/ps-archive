#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int temp = INT32_MAX;
	int n;
	cin >> n;

	vector<int> arr(n);
	
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int left = 0;
	int right = n - 1;
	int ans1, ans2;

	while (left < right)
	{
		if (temp > abs(arr[left] + arr[right]))
		{
			temp = abs(arr[left] + arr[right]);
			ans1 = arr[left];
			ans2 = arr[right];
		}
		if (arr[left] + arr[right] > 0)
			--right;
		else if (arr[left] + arr[right] < 0)
			++left;
		else
		{
			cout << arr[left] << ' ' << arr[right];
			return 0;
		}
	}
	cout << ans1 << ' ' << ans2;
}