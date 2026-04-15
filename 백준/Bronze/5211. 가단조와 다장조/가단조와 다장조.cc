#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int C = 0,A = 0;
    
    if(str[0]=='A'||str[0]=='D'||str[0]=='E')  
        A++;
    else if(str[0]=='C'||str[0]=='F'||str[0]=='G')
        C++;
    int len = str.size();
    for(int i = 1;i<len;i++)
    {
        if(str[i]=='|')
        {
            if(str[i+1]=='A'||str[i+1]=='D'||str[i+1]=='E')  
                A++;
            else if(str[i+1]=='C'||str[i+1]=='F'||str[i+1]=='G')
                C++;
        }
    }
    if(A>C)
    {
        cout << "A-minor";
    }
    else if(A<C)
    {
        cout << "C-major";
    }
    else
    {
        if(str[len-1]=='A'||str[len-1]=='D'||str[len-1]=='E')
            cout << "A-minor";
        else
            cout << "C-major";  
    }
    return 0;
}