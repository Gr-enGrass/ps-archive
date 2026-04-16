
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while(n--)
    {
        bool IsAnagram = true;
        string str1, str2;
        char check1[26]={0};
        char check2[26]={0};
        cin >> str1 >> str2;
        for(const auto &a : str1)
        {
            check1[a-'a']++;
        }
        for(const auto &a : str2)
        {
            check2[a-'a']++;
        }
        for(int i =0;i<26;i++)
        {
            if(check1[i]!=check2[i])
            {
                IsAnagram = false;
            }
        }
        if(IsAnagram)
        {
            cout << str1 << " & " << str2 << " are anagrams.\n";
        }
        else
        {
            cout << str1 << " & " << str2 << " are NOT anagrams.\n";
        }
    }
}