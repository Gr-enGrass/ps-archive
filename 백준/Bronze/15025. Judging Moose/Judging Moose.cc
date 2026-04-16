
#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    if(n==0&&m==0)
        cout << "Not a moose";
    else if(n==m)
        cout << "Even " << n+m;
    else
        cout << "Odd " << max(n,m)*2;

    return 0;
}