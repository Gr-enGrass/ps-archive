
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long result = 1;
        int a,b;
        cin >> a >> b;
        int r = a;
        int n = b;
        for(int i =1;i<=a;i++)
        {
            result*= n--;
            result/=i;
        }
        cout << result <<'\n';
    }
    
}