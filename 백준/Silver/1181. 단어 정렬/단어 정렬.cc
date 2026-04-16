#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;



int main()
{
    int n;
    cin>>n;
    string word;
    int len;
    vector<pair<int,string>>str;

    for(int i=0;i<n;i++)
    {
        cin >> word;
        len = word.length();
        str.push_back(make_pair(len,word));
    }

    sort(str.begin(),str.end());
    auto trash = unique(str.begin(),str.end(),
    [](const pair<int,string>&a,const pair<int,string>&b){return a.second==b.second;});
    str.erase(trash,str.end());
    
    n=str.size();
    for(int i =0;i<n;i++)
    {
        cout<<str[i].second<<endl;
    }
    return 0;
}