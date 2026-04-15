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

	int xcnt = 0, ocnt = 0;
	for (const char& a : str)
	{
		if (a == 'X')
			xcnt++;
		else
			ocnt++;
	}
	if (xcnt <= ocnt)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}