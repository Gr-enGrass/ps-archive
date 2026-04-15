
#include <iostream>

using namespace std;

int main()
{
    int n,m,a,b;
    cin >> n >> m >> a >>b;
    
    if(n*3<=m)
    {
        cout << 0;
    }
    else
    {
        cout << (n*3-m)*a + b;
    }

    return 0;
}