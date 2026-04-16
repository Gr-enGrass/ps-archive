
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int mx = max(x,y);
    int mn = min(x,y);
    if(mx - mn == 0)
    {
        for(int i = 0;i<x;i++)
            cout << '2';
        return 0;
    }
    
    for(int i = 1 ; i <= mx ; i++)
    {
        if(i <= mx - mn)
        {
            cout << '1';
        }
        else
        {
            cout << '2';
        }
    }
}