
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int y,c,p;
    cin >> y >> c >> p;
    c = c/2;
    cout << min({y,c,p});

    return 0;
}