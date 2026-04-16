
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int result= 0;
    if(a>=b && a>=c)
    {
        if(b>c)
            result = b;
        else
            result = c;
    }
    else if(b>=a && b>=c)
    {
        if(a>c)
            result = a;
        else
            result = c;
    }
    else if(c>=a && c>=b)
    {
        if(a>b)
            result = a;
        else
            result = b;
    }
    cout << result;
    return 0;
}