#include <iostream>
#include <algorithm>

using namespace std;

string func(string str)
{
    int len = str.size();
    string result ={};
    if(len%3==2)
    {
        result+=(((str[0]-'0')*2+(str[1]-'0'))+'0');
        for(int i =2;i<len;i+=3)
        {
            result+=(((str[i]-'0')*4+(str[i+1]-'0')*2+(str[i+2]-'0'))+'0');
        }
    }
    else if(len%3==1)
    {
        result+=((str[0]-'0')+'0');
        for(int i =1;i<len;i+=3)
        {
            result+=(((str[i]-'0')*4+(str[i+1]-'0')*2+(str[i+2]-'0'))+'0');
        }
    }
    else
    {
        for(int i =0;i<len;i+=3)
        {
            result+=(((str[i]-'0')*4+(str[i+1]-'0')*2+(str[i+2]-'0'))+'0');
        }
    }
    return result;
}

int main()
{
    string str;
    cin >> str;
    cout << func(str);
    return 0;
}