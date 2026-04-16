
#include <iostream>

using namespace std;

int main()
{
    char time[4]={0};
    int a,b,c;
    cin >> a >> b >> c;
    if(c % 2 == 0)
    {
        cout << a;
    }
    else
    {
        cout << (a^b);
    }

    return 0;
}