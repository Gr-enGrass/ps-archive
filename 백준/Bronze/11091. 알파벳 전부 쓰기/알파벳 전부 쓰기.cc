
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string str;
        getline(cin ,str);
        int abc[26]={};
        for(const auto &a : str)
        {
            if('A'<= a && a <= 'Z')
            {
                abc[a-'A']++;
            }
            else if('a' <= a && a <= 'z')
            {
                abc[a-'a']++;
            }
        }
        bool result[26]={};
        bool flag=1;
        for(int i =0;i<26;i++)
        {
            if(!abc[i])
            {
                flag = false;
                result[i]=true;
            }
            else
            {
                continue;
            }
        }
        if(flag)
        {
            cout << "pangram\n";
        }
        else
        {
            cout << "missing ";
            for(int i =0;i<26;i++)
            {
                if(result[i])
                {
                    cout << char(i+'a');   
                }
            }
            cout << '\n';
        }
    }

    return 0;
}