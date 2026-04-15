
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m;
int MIN = 987654321;
vector<pair<int,int>>house;
vector<pair<int,int>>chicken;
vector<pair<int,int>>selected;

int dist(int a,int b,int c,int d)
{
    return abs(a-c)+abs(b-d);
}

void find()
{
    int result = 0;
    for(const auto &a : house)
    {
        int temp_min = 987654321;
        for(const auto &b : selected)
        {
            temp_min=min(temp_min,dist(a.first,a.second,b.first,b.second));
        }
        result+=temp_min;
    }
    MIN = min(MIN,result);
}

void func(int x,int check)
{
    if(check==m)
    {
        find();
        return;
    }
    
    for(int i = x;i<chicken.size();i++)
    {
        selected.push_back(make_pair(chicken[i].first,chicken[i].second));
        func(i+1,check+1);
        selected.pop_back();
    }
}

int main()
{
    cin >> n >> m ;
    

    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            int temp;
            cin >> temp;
            if(temp==1)
            {
                house.push_back(make_pair(i,j));
            }
            else if(temp==2)
            {
                chicken.push_back(make_pair(i,j));
            }
        }
    }
    func(0,0);
    cout << MIN;
    return 0;
}