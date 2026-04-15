#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	int temp = n;
	vector<bool>IsPrime(n+1, true);
	IsPrime[1] = false;
	for (int i = 2;i <= temp;i++)
	{
		if (!IsPrime[i])
		{
			continue;
		}
		
		for (int j = i;j <= n;j += i)
		{
			if (IsPrime[j])
			{
				IsPrime[j] = false;
				k--;
				if (k == 0)
				{
					cout << j;
					return 0;
				}
			}
		}
	}
}