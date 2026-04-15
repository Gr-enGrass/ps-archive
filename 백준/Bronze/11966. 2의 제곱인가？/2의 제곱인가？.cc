
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = 1;
    int cnt = 0;
    
    while(n>=temp)
    {
        if(n==pow(2,cnt))
        {
            cout << 1;
            return 0;
        }
        temp = pow(2,cnt++);
    }
    cout << 0;
    return 0;
}