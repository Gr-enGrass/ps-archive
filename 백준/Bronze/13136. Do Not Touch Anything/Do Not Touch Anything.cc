#include <iostream>

using namespace std;

int main()
{
    long long int r,c,n;
    cin >> r >> c >> n;
    
    cout << ((r+n-1)/n) * ((c+n-1)/n);

    return 0;
}