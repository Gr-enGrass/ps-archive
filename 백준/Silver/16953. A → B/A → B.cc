
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int cnt = 1;
    while(1)
    {
        if(a==b)
        {
            cout << cnt;
            return 0;
        }
        else if(a>b)
        {
            cout << -1;
            return 0;
        }
        
        if(b%2==0)
        {
            b /= 2;
            cnt++;
        }
        else if(b%10==1)
        {
            b = (b - 1)/10;
            cnt++;
        }
        else
        {
            cout << -1;
            return 0;
        }
    }

    return 0;
}