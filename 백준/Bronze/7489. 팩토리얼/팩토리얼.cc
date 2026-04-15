#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;

    while(t--)
    {
        int result=1;
        cin >> n;
        for(int i =1;i<=n;i++)
        {
            result*=i;
            result%=1000000;
            while(result%10==0)
            {
                result/=10;
            }
        }
        cout << result%10 << '\n';
    }
    return 0;
}
