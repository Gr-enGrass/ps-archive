
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int v ,e;
        cin >> v >> e ;
        cout << e+2-v << '\n';
    }

    return 0;
}