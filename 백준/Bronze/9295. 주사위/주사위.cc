
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cnt =1;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        cout << "Case " << cnt++ << ": " <<a+b<<'\n';
    }

    return 0;
}