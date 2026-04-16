
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int n;
    cin >> n;
    while(n--)
    {
        cin >> a >> b >> c;
        if(a+b+c==180)
        {
            cout << a << " " << b << " " << c << " " << "Seems OK\n";
        }
        else
        {
            cout << a << " " << b << " " << c << " " << "Check\n";
        }
    }

}