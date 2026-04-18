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
	string str;
	cin >> str;

	int cnt = 0;
	for (int i = 0;i < n;i++)
	{
		if (str[i] == 'L')
			i++;
		cnt++;
	}
	cnt++;
	if (cnt > n)
		cnt = n;
	cout << cnt;
}