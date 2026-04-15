#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int cnt = 1;
    while(1)
    {
        string str1;
        string str2;
        bool isSame = true;
        int check1[26]={};
        int check2[26]={};
        cin >> str1 >> str2;
        if(str1=="END"&&str2=="END")
            break;
        if(str1.size()!=str2.size())
        {
            cout << "Case " << cnt++ << ": different\n";
            continue;
        }
        int len = str1.size();
        for(int i =0;i<len;i++)
        {
            check1[str1[i]-'a']++;
            check2[str2[i]-'a']++;
        }
        for(int i =0;i<26;i++)
        {
            if(check1[i]!=check2[i])
            {
                isSame=false;
                break;
            }
        }
        cout << "Case " << cnt++ << ": ";
        cout << (isSame ? "same" : "different") << '\n';
    }
}