
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str="";
    getline(cin,str);
    
    string temp ="";
    int len = str.size();
    
    for(int i = 0 ;i<len;i++)
    {
        if('A'<=str[i]&&str[i]<='Z')
        {
            temp+=(str[i]-32);
            continue;
        }
        if('a'<=str[i]&&str[i]<='z')
        {
            temp+=(str[i]);
        }
        else
        {
            continue;
        }
    }
    temp = temp.substr(0,10);
    
    for(int i =0;i<26;i++)
    {
        if(temp=="northlondo")
        {
            cout << "NLCS";
            return 0;
        }
        else if(temp=="branksomeh")
        {
            cout << "BHA";
            return 0;
        }
        else if(temp=="koreainter")
        {
            cout << "KIS";
            return 0;
        }
        else if(temp=="stjohnsbur")
        {
            cout << "SJA";
            return 0;
        }
        for(int j =0;j<10;j++)
        {
            temp[j]++;
            if(temp[j]>'z')
                temp[j]-=26;
        }
    }
    return 0;
}