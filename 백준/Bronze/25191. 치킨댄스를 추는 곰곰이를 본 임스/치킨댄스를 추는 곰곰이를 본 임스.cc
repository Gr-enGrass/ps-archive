
#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    cout << ((a/2+b >= n) ? n : a/2+b);
    return 0;
}