
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,n;
    cin >> t >> n;
    int sum =0;
    while(n--)
    {
        int a;
        cin >> a;
        sum+=a;
    }
    if(sum>=t)
        cout << "Padaeng_i Happy";
    else
        cout << "Padaeng_i Cry";
    return 0;
}