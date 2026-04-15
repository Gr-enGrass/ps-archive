#include <iostream>
#include <vector>

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int slen;
    string s;
    
    cin >> slen >> s;
    
    string p ="I";
    for(int i =0;i<n;i++)
    {
        p+="OI";
    }
    
    int cnt = KMPcnt(s,p);
    cout << cnt;
    
    return 0;
}