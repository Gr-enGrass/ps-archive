#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if((8+(n-1)*7)%12==0)
    {
        cout << 2024+(8+(n-1)*7)/12-1 << ' ' << 12;
    }
    else
    {
        cout << 2024+(8+(n-1)*7)/12 << ' ' << (8+(n-1)*7)%12;
    }
}