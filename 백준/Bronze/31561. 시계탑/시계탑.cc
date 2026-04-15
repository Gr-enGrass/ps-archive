
#include <iostream>

using namespace std;

int main()
{
    double minute;
    cin>>minute;
    cout.precision(1);
    cout << fixed;
    if(minute>30)
    {
        cout << 15+(minute-30)*1.5;
    }
    else if(minute<30)
    {
        cout << minute * 0.5;
    }
    else
    {
        cout << "15.0";
    }
    return 0;
}