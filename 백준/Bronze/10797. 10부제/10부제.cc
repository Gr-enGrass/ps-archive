
#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    n %= 10;
    int car[5]= {0};
    int cnt = 0;
    for(int i =0;i<5;i++)
    {
        cin >> car[i];
        if(car[i]==n)
            cnt++;
    }
    cout << cnt;
    return 0;
}