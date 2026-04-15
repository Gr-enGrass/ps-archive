#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int ax,ay,bx,by;
	ax=(a-1)%4;
	ay=(a-1)/4;
	bx=(b-1)%4;
	by=(b-1)/4;
	int result = abs(ax-bx)+abs(ay-by);
	cout << result;
}