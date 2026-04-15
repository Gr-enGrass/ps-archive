
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,string>a;
    int n =7;
    int max = 0;
    while(n--)
    {
        string temp;
        int cnt;
        cin >> temp >> cnt;
        max = cnt > max ? cnt : max; 
        a.insert(make_pair(cnt,temp));
    }
    cout << a[max];
    return 0;
}