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
	string str;
	
	cin >> n;
	cin.ignore();
	getline(cin, str);
	stringstream ss(str);

	string temp;
	while (ss >> temp)
	{
		cout << temp << "DORO ";
	}
}