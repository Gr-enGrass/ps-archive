#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int cnt = 0;
	int check = 1;

	int left = 1, right = 1;
	while (left <= n && right <= n)
	{
		if (check < n)
		{
			right++;
			check += right;
		}
		else if (check > n)
		{
			check -= left;
			left++;
		}
		else
		{
			cnt++;
			right++;
			check += right;
		}
	}
	cout << cnt;
}