#include <iostream>
#include <string>

using namespace std;

int main()
{
    int s,m;
    cin >> s >>m;
    if(s<=1023)
    {
        cout << "No thanks";
    }
    else
    {
        if(((s-1023)&m)==(s-1023))
        {
            cout << "Thanks";
        }
        else
        {
            cout << "Impossible";
        }
    }
}