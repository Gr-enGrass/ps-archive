#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	while (1)
	{
		int n, m;
		cin >> n >> m;

		if (!n && !m)
		{
			break;
		}

		vector<int>arr1(n);
		vector<int>arr2(m);
		int cnt = 0;

		for (int i = 0;i < n;i++)
		{
			cin >> arr1[i];
		}

		for (int i = 0;i < m;i++)
		{
			cin >> arr2[i];
		}

		int idx1 = 0, idx2 = 0;
		while (idx1 < n && idx2 < m)
		{
			if (arr1[idx1] > arr2[idx2])
			{
				idx2++;
			}
			else if (arr1[idx1] < arr2[idx2])
			{
				idx1++;
			}
			else
			{
				cnt++;
				idx1++;
				idx2++;
			}
		}

		cout << cnt << '\n';
	}
}