#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int>arr1(n+1);
	vector<int>arr2(m+1);
	for (int i = 0;i < n;i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0;i < m;i++)
	{
		cin >> arr2[i];
	}
	int idx1 = 0;
	int idx2 = 0;
	vector<int>result;
	while (idx1!=n||idx2!=m)
	{
		if (idx1 == n)
		{
			result.push_back(arr2[idx2++]);
			continue;
		}
			
		if (idx2 == m)
		{
			result.push_back(arr1[idx1++]);
			continue;
		}

		if (arr1[idx1] < arr2[idx2])
		{
			result.push_back(arr1[idx1++]);
		}
		else
		{
			result.push_back(arr2[idx2++]);
		}
	}
	for (const int& a : result)
	{
		cout << a << ' ';
	}
}