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

int KMP(string parent, string pattern)
{
    vector <int> table = makeTable(pattern);
    int parentSize = parent.size();
    int patternSize = pattern.size();
    int j = 0;
    int cnt = 0;
    for(int i = 1;i < parentSize; i++)
    {
        while(j > 0 && parent[i] != pattern[j])
        {
            j = table[j-1];
        }
        if(parent[i] == pattern[j])
        {
            if(j == patternSize - 1)
            {
                return i - j;
                j = table[j];
            }
            else
            {
                j++; 
            }
        }
    }
}

int main()
{
    while(1)
    {
        string str;
        cin >> str;
        if(str==".")
            break;
        int cnt = KMP((str+str),str);
        int size = str.size();
        cout << (size/cnt) <<'\n';
    }
    
    
    return 0;
}