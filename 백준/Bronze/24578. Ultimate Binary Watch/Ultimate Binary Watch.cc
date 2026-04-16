#include <iostream>
#include <string>

using namespace std;

int main()
{
    char time[5]={0};
    cin >> time;
    
    string result="";
    for(int i = 3;i>=0;i--)
    {
        for(int j=0;j<2;j++)
        {
            if(((time[j]-'0')&(1<<i))==(1<<i))
            {
                result+="* ";
            }
            else 
            {
                result+=". ";
            }
        }
        result+="  ";
        for(int j = 2;j<4;j++)
        {
            if(((time[j]-'0')&(1<<i))==(1<<i))
            {
                result+="* ";
            }
            else 
            {
                result+=". ";
            }
        }
        result.pop_back();
        result+='\n';
    }
    result.pop_back();
    cout << result;

    return 0;
}