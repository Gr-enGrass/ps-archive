
#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int total = 0;
    
    if(a>n)
        a = n;
    if(b>n)
        b = n;
    if(c>n)
        c = n;
    
    total = a+b+c;
    cout << total;
    return 0;
}