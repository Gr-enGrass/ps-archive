#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;



int main()
{
    int n;
    cin>>n;
    string name;
    int age;
    vector<pair<int,string>>str;

    for(int i=0;i<n;i++)
    {
        cin >> age;
        cin >> name;
        
        str.push_back(make_pair(age,name));
    }

    stable_sort(str.begin(),str.end(),[](const pair<int,string>&a,const pair<int,string>&b){return a.first<b.first;});
    
    n=str.size();
    for(int i =0;i<n;i++)
    {
        cout<<str[i].first<<" "<<str[i].second<<endl;
    }
    return 0;
}