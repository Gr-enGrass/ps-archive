#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector <int> makeTable(string a)
{
    int length = a.size();
    vector <int> table(length,0);
    int j = 0;
    for(int i = 1; i < length; i++)
    {
        while(j>0 && a[i]!=a[j])
        {
            j = table[j-1];
        }
        if(a[i]==a[j])
        {
            table[i] = ++j;
        }
    }
    return table;
}

int KMPcnt(string parent, string pattern)
{
    vector <int> table = makeTable(pattern);
    int parentSize = parent.size();
    int patternSize = pattern.size();
    int j = 0;
    int cnt = 0;
    for(int i = 0;i < parentSize; i++)
    {
        while(j > 0 && parent[i] != pattern[j])
        {
            j = table[j-1];
        }
        if(parent[i] == pattern[j])
        {
            if(j == patternSize - 1)
            {
                cnt++;
                j = table[j];
            }
            else
            {
                j++; 
            }
        }
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    
    cin.ignore();
    
    string str;
    string check;
    getline(cin, str);
    getline(cin, check);
    str.erase(remove_if(str.begin(),str.end(),::isspace),str.end());
    check.erase(remove_if(check.begin(),check.end(),::isspace),check.end());
    
    check += check;
    check.pop_back();
    int cnt = KMPcnt(check,str);
    
    if(cnt > 1 && n%cnt==0)
    {
        n/=cnt;
        cnt/=cnt;
    }
    
    cout << cnt << '/' << n;
    
    return 0;
}