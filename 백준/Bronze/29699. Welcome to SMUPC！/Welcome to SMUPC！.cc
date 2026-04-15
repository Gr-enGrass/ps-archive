
#include <iostream>

using namespace std;

int main()
{
    string str = "*WelcomeToSMUPC";
    int n;
    cin >> n;
    if(n%14==0)
    {
        cout << str[14];
    }
    else
    {
        cout << str[n%14];
    }
    return 0;
}