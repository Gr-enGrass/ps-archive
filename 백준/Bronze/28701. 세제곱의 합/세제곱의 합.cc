
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int sum = 0;
    for(int i =1;i<=n;i++)
    {
        sum += i;
    }
    int sumcube = 0;
    for(int i =1;i<=n;i++)
    {
        sumcube += (i*i*i);
    }
    cout << sum << '\n' << sum*sum <<'\n' << sumcube;
    return 0;
}