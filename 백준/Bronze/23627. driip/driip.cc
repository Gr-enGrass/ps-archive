#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    cin >> a;
    reverse(a.begin(),a.end());
    if(a[0]=='p'&&a[1]=='i'&&a[2]=='i'&&a[3]=='r'&&a[4]=='d')
    {
        cout << "cute";
        return 0;
    }
    cout << "not cute";
    return 0;
}