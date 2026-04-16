
#include <iostream>

using namespace std;

int main()
{
    int n;
    int n2;
    cin >> n;
    n2=~n+1;
    n = n^n2;
    int cnt = 0;
    for(int i =0;i<32;i++)
    {
        if(n&(1<<i))
            cnt++;
    }
    cout << cnt;
    return 0;
}