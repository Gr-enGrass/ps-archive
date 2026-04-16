#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char str[n+1];
    char str2[n+1];
    cin >> str;
    cin >> str2;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]==str2[i])
        {
            cnt++;
        }
    }
    cout << cnt;
}