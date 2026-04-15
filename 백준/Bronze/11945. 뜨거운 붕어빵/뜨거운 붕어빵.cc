#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    string result={};
    while(n--)
    {
        string str;
        cin >> str;
        reverse(str.begin(),str.end());
        result+=(str + '\n');
    }
    cout << result;
    return 0;
}