
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m ;
    vector<pair<int,int>> card;
    for(int i = 0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        card.push_back(make_pair(a,b));
    }
    
    for(int i = 0;i<m;i++)
    {
        int k;
        cin >> k;
        for(int j = 0;j<card.size();j++)
        {
            if(card[j].first<=k)
            {
                swap(card[j].first, card[j].second);
            }
        }
    }
    int sum=0;
    for(const auto &a : card)
    {
        sum+=a.first;
    }
    cout << sum;
}