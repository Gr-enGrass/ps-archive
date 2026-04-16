
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;


int main()
{
    int n,m;
    while(cin >> n >> m)
    {
        int cnt=0;
        for(int i=n;i<=m;i++)
        {
            string temp= to_string(i);
            unordered_set<char>cheak;
            cheak.insert(temp.begin(),temp.end());
            if(cheak.size()==temp.size())
            {
                cnt++;
            }
            
        }
        cout << cnt << "\n";
    }

    return 0;
}