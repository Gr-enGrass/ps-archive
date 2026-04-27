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

    for (int i = 0; i < 30; i++) 
    {
        for (int j = 0; j < 30; j++)
            if (i == 15 && j < 14)
                cout << "1 ";
            else if (i == 15 && j > 14)
                cout << "15 ";
            else if (i < 15 && j == 14)
                cout << "225 ";
            else if (i > 15 && j == 14)
                cout << "3375 ";
            else
                cout << "0 ";
        cout << '\n';
    }
}