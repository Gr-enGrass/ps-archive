
#include <iostream>

using namespace std;

int main()
{
    int X;
    cin >> X;
    int result = 0;
    while(X)
    {
        X = X & (X-1);
        result++;
    }
    cout << result;
    return 0;
}