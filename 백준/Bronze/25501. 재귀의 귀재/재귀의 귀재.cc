#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

int cnt;

int recursion(string &s, int l, int r) {
	if (l >= r)
		return 1;
	else if (s[l] != s[r])
		return 0;
	else
	{
		cnt++;
		return recursion(s, l + 1, r - 1);
	}
}

int isPalindrome(string &str) {
	return recursion(str, 0, str.size() - 1);
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	while (n--)
	{
		string str;
		cin >> str;
		cnt = 1;
		cout << isPalindrome(str) << ' ' << cnt << '\n';
	}
}