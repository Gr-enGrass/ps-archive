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

	string str;
	cin >> str;

	int arr[26] = {};
	
	for (const char& a : str)
	{
		arr[a - 'A']++;
	}

	if (arr['M' - 'A'] && arr['O' - 'A'] && arr['B' - 'A'] && arr['I' - 'A'] && arr['S' - 'A'])
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}