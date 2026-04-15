
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    
    while(n>=10)
    {
        int temp = 1;
        while(n)
        {
            temp = temp * (n % 10);
            n = n/10;
        }
        n = temp;
        cnt++;
    }
    
    cout << cnt;
    return 0;
}