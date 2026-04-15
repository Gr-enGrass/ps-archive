
#include <iostream>

using namespace std;

int func(int x)
{
    return x * (x+1)/2;
}

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int result=0;
        int temp;
        cin >> temp;
        for(int i =1;i<=temp;i++)
        {
            result += i * func(i+1);
        }
        cout << result << '\n';
    }

    return 0;
}