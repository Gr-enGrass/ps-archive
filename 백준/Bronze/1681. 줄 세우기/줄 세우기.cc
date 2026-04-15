
#include <iostream>

using namespace std;

int main()
{
    int N,L;
    cin >> N >> L;
    
    int num = 1;
    int cnt = 0;
    while(cnt!=N)
    {
        bool can = true;
        int temp = num;
        while(temp!=0)
        {
            if(temp%10==L)
            {
                can = false;
                break;
            }
            temp /= 10;
        }
        if(can)
        {
            cnt++;
        }
        num++;
    }
    cout << num-1;
    return 0;
}