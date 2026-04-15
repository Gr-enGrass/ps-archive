
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    unordered_map<string,string>passwords;
    string a , b;
    for(int i =0;i<n;i++)
    {
        cin >> a >> b;
        passwords.insert(make_pair(a,b));
    }
    for(int i = 0;i<m;i++)
    {
        cin >> a;
        cout << passwords[a] << '\n';
    }
    return 0;
}