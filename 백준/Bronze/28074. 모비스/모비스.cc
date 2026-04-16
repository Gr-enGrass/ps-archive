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
		switch (a)
		{
			case 'M':
				arr[a - 'A']++;
				break;
			case 'O':
				arr[a - 'A']++;
				break;
			case 'B':
				arr[a - 'A']++;
				break;
			case 'I':
				arr[a - 'A']++;
				break;
			case 'S':
				arr[a - 'A']++;
				break;
		}
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