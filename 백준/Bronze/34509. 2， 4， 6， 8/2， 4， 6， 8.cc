
#include <iostream>

using namespace std;

int main()
{
    int cnt = 10;
    while(cnt<100)
    {
        int one = cnt % 10;
        int ten = cnt / 10;
        if(one!=8&&ten!=8&&(one+ten)%6==0&&(one*10+ten)%4==0)
        {
            cout << cnt;
            break;
        }
        cnt++;
    }
}