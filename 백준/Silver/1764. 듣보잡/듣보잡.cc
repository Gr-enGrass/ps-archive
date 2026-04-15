
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    string temp;
    unordered_map<string,int> um1;
    unordered_map<string,int> um2;
    vector<string> result;
    cin >> n >> m;
    int ncnt = n;

    while(n--) 
    {
        cin >> temp;
        um1.insert(make_pair(temp,n));
    }
    while(m--) 
    {
        cin >> temp;
        um2.insert(make_pair(temp,m));
    }
    
    for(const auto &a : um1)
    {
        if(um2.find(a.first)!=um2.end())
        {
            result.push_back(a.first);
        }
    }
    cout << result.size() << '\n';
    sort(result.begin(),result.end());
    for(const auto &a : result)
    {
        cout << a << '\n';
    }
    return 0;
}