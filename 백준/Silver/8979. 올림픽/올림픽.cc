
#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;


struct Country 
{
    int id;
    int gold;
    int silver;
    int bronze;
};

bool cmp(const Country& a, const Country& b) 
{
    if (a.gold != b.gold) 
        return a.gold > b.gold;
    if (a.silver != b.silver) 
        return a.silver > b.silver;
    if (a.bronze != b.bronze) 
        return a.bronze > b.bronze;
    return false;  // 동점이면 순서 유지
}


int main()
{
    int n,k;
    cin >> n >> k;

    vector<Country>countries;
    vector<int>rank(n+1);
    
    for(int i =0;i<n;i++)
    {
        int id,g,s,b;
        cin >> id >> g >> s >>b;
        
        countries.push_back({id,g,s,b});
    }
    
    sort(countries.begin(),countries.end(),cmp);
   
    int current_rank = 1;
    rank[countries[0].id] = 1;
    for(int i =1;i<n;i++)
    {
        if(countries[i].gold == countries[i-1].gold &&
        countries[i].silver == countries[i-1].silver &&
        countries[i].bronze == countries[i-1].bronze)
        {
            rank[countries[i].id] = current_rank;
        }
        else
        {
            current_rank = i+1;
            rank[countries[i].id] = current_rank;
        }
    }

    cout << rank[k];
    return 0;
}