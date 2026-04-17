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

	string result;
	while (n--)
	{
		string str1, str2;
		cin >> str1 >> str2;

		if (str2 == "2026")
			result = str1;
	}
	cout << result;
}