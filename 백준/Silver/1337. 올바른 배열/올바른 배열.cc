#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int>arr(n);

	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int left = 0, right = 0;
	int result = 0;

	while (right < n)
	{
		int temp = arr[right] - arr[left];
		int len = right - left + 1;
		if (temp <= 4)
		{
			result = max(result, len);
			right++;
		}
		else
		{
			left++;
		}
	}
	cout << 5 - result;
}