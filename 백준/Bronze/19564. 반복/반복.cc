
#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.size();
    int cnt = 1;
    for(int i =1;i<len;i++)
    {
        if(str[i-1]>=str[i])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}