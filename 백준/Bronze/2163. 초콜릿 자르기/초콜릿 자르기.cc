
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int result = (n-1)+(m-1)*n;
    
    cout << result;
    
    return 0;
}