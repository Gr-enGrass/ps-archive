#include <iostream>

using namespace std;

int main()
{
    int n;
    int cnt=0;
    cin >> n;
    if(n>5)
    {
        if(n>=9)
        {
            cnt=1;
        }
        else if(n>=7)
        {
            cnt=2;
        }
        else
        {
            cnt=3;
        }
    }
    else
    {
        cnt=n/2+1;
    }
    cout << cnt;
    return 0;
}