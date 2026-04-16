#include <iostream>
#include <string>

using namespace std;

int bitcnt(long long int a)
{
    int cnt = 0;
    while(a)
    {
        a = (a & (a-1));
        cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    long long int m;

    cin >> n;
    while(n--)
    {
        cin >> m;
        
        if(bitcnt(m)==1)
        {
            for(int i =0;i<64;i++)
            {
                if(m&(1LL<<i))
                {
                    cout << i-1 << ' ' << i-1;
                    break;
                }
            }
        }
        else
        {
            for(int i =0;i<64;i++)
            {
                if(m&(1LL<<i))
                {
                    cout << i << ' ';
                }
            }
        }
        cout <<'\n';
    }
}