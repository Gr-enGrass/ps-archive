
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >>b >> c>>d;
    
    if(a+d==0||b+c==0)
    {
        cout << 0;
    }
    else if(a+d>b+c)
    {
        cout << b+c;
    }
    else
    {
        cout << a+d;
        
    }
    
    
}