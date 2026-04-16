#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	queue<int> s;
	cin >> n;
	while (n--)
	{
		string str = "";
		int x;
		
		
		cin >> str;
		
		switch (str[0])
		{
			case 'p':
				if (str[1] == 'u')
				{
					cin >> x;
					s.push(x);
				}
				else
				{
					if (s.empty())
					{
						cout << "-1\n";
					}
					else
					{
						cout << s.front() << '\n';
						s.pop();
					}
				}
				break;
			case 's':
				cout << s.size() << '\n';
				break;
			case 'e':
				cout << (s.empty() ? "1\n" : "0\n");
				break;
			case 'f':
				if (s.empty())
				{
					cout << "-1\n";
				}
				else
				{
					cout << s.front() << '\n';
				}
				break;
			case 'b':
				if (s.empty())
				{
					cout << "-1\n";
				}
				else
				{
					cout << s.back() << '\n';
				}
				break;
		}
	}
}