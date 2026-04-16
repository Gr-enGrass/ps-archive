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

	int h, w;
	cin >> h >> w;

	cout << min(h, w) * 50;
	//min(h,w)*100/2
	
}