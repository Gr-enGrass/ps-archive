#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int>arr(n);
	int temp;
	int check=0;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	for (int i = 0;i < k;i++)
	{
		check += arr[i];
	}
	temp = check;
	int s = 0, e = k;
	for (;e < n;e++)
	{		
		check -= arr[s++];
		check += arr[e];
		
		if (check > temp)
			temp = check;
	}
	cout << temp;
}