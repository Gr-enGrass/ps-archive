#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int h, w, n;
		int roomnum = 0;
		cin >> h >> w >> n;
		if (n % h == 0)
		{
			roomnum = h;
			roomnum *= 100;
			roomnum += (n / h);
		}
		else
		{
			roomnum = n % h;
			roomnum *= 100;
			roomnum += (n / h + 1);
		}
		cout << roomnum << '\n';
	}
}