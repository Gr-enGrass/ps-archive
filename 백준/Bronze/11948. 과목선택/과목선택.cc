
#include <iostream>

using namespace std;

int main()
{
    int temp = 100;
    int sum = 0;
    int a;
    for(int i =0;i<4;i++)
    {
        cin >> a;
        sum+=a;
        if(temp>a)
        {
            temp = a;
        }
    }
    sum-=temp;
    temp = 100;
    for(int i =0;i<2;i++)
    {
        cin >> a;
        sum+=a;
        if(temp>a)
        {
            temp = a;
        }
    }
    sum-=temp;
    cout << sum;
    return 0;
}