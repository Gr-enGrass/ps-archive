#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n = n%3;
    switch(n)
    {
        case 1:
            cout << 'U';
            break;
        case 2:
            cout << 'O';
            break;
        case 0:
            cout << 'S';
    }
}