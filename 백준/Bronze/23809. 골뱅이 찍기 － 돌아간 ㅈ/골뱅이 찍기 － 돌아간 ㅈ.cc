#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <limits>
#include <queue>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << '@';
		}
		for (int j = 0;j < n;j++)
		{
			cout << "   ";
		}
		for (int j = 0;j < n;j++)
		{
			cout << '@';
		}
		cout << '\n';
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << '@';
		}
		for (int j = 0;j < n;j++)
		{
			cout << "  ";
		}
		for (int j = 0;j < n;j++)
		{
			cout << '@';
		}
		cout << '\n';
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n*3;j++)
		{
			cout << '@';
		}
		cout << '\n';
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << '@';
		}
		for (int j = 0;j < n;j++)
		{
			cout << "  ";
		}
		for (int j = 0;j < n;j++)
		{
			cout << '@';
		}
		cout << '\n';
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << '@';
		}
		for (int j = 0;j < n;j++)
		{
			cout << "   ";
		}
		for (int j = 0;j < n;j++)
		{
			cout << '@';
		}
		cout << '\n';
	}
}