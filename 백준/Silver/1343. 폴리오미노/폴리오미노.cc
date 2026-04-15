
#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int len = str.size();
    string result="";
    for(int i =0;i<len;i++)
    {
        if(str[i]=='X')
        {
            int cnt = 1;
            for(int j = i+1;j<len;j++)
            {
                if(str[j]=='X')
                {
                    cnt++;
                    i=j;
                }
                else
                {
                    break;
                }
            }
            if(cnt%2==1)
            {
                cout << "-1";
                return 0;
            }
            else if(cnt%4==0)
            {
                for(int j = 0;j<cnt/4;j++)
                {
                    result += "AAAA";
                }
            }
            else
            {
                for(int j = 0;j<cnt/4;j++)
                {
                    result += "AAAA";
                }
                result += "BB";
            }
        }
        else
        {
            result += '.';
        }
    }
    cout << result;
    return 0;
}