
#include <iostream>

using namespace std;

int main()
{
    char s[101]={0};
    cin >> s;
    int cnt=1;
    for(auto const &it : s )
    {
        if(it==',')
            cnt++;
    }
    cout << cnt; 
}