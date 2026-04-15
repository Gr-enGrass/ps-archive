#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int arr[4];
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
	int x, y, r;
	cin >> x >> y >> r;
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] == x)
		{
			cout << i + 1;
			return 0;
		}
	}
	cout << 0;
}