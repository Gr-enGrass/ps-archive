
#include <iostream>

using namespace std;

int gcd(int a,int b)
{
    return b ? gcd(b,a % b) : a;
}

int main()
{
    int a,b,temp;
    cin >> a >> b;
    if(a<b)
    {
        a=a^b;
        b=a^b;
        a=a^b;
    }
    cout << gcd(a,b) << "\n";
    cout << a*b/gcd(a,b);
    return 0;
}