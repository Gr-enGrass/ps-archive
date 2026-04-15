#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	int sum = 0;
	int cnt = 2;
	vector<int>arr;
	cin >> sum;
	arr.push_back(sum);
	n--;

	while (n--)
	{
		int temp;
		cin >> temp;
		arr.push_back((temp * cnt) - sum);
		sum += ((temp * cnt++) - sum);
	}
	for (const int& a : arr)
	{
		cout << a << ' ';
	}
}