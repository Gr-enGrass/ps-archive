
#include <iostream>
#include <vector>
using namespace std;

vector<int> makeTable(string pattern)
{
    int patternlen = pattern.size();
    vector<int> Table(patternlen,0);
    int j =0;
    for(int i = 1;i<patternlen;i++)
    {
        while(j>0 && pattern[i]!=pattern[j])
        {
            j = Table[j-1];
        }
        if(pattern[i]==pattern[j])
        {
            Table[i] = ++j;
        }
    }
    return Table;
}

vector<int>KMP(string parent, string pattern)
{
    vector<int> Table = makeTable(pattern);
    vector<int> result;
    int patternlen = pattern.size();
    int parentlen = parent.size();
    int j =0;
    for(int i =0;i<parentlen;i++)
    {
        while(j>0 && parent[i]!=pattern[j])
        {
            j = Table[j-1];
        }
        if(parent[i]==pattern[j])
        {
            if(j==patternlen-1)
            {
                result.push_back(i-j);
                j = Table[j];
            }
            else
            {
                j++;
            }
        }
    }
    return result;
}

int main()
{
    string T,P;
    
    getline(cin,T);
    getline(cin,P);
    
    vector<int>result = KMP(T,P);
    
    cout << result.size() << '\n';
    for(const auto &a : result)
    {
        cout << a+1 << ' ';
    }
    

    return 0;
}