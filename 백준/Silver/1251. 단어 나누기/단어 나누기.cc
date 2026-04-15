
#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    
    string result = "{";//모든 영어 소문자보다 큼
    
    int len = str.size();
    for(int i =0;i<len-2;i++)
    {
        for(int j = i+1;j<len-1;j++)
        {
            string temp="";
            for(int k = i;k>=0;k--)
            {
                temp+=str[k];
            }
            
            for(int k = j;k>i;k--)
            {
                temp+=str[k];
            }
            
            for(int k = len-1;k>j;k--)
            {
                temp+=str[k];
            }
            if(temp<result)
            {
                result = temp;
            }
        }
    }
    cout << result;
    return 0;
}