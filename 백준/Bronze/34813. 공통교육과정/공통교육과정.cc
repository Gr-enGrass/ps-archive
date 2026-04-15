
#include <iostream>

using namespace std;

int main()
{
    string str;
    string arr[4]={"Foundation","Claves","Veritas","Exploration"};
    int result = 0;
    cin >> str;
    
    if(str[0]=='F')
    {
        result = 0;
    }
    else if(str[0]=='C')
    {
        result = 1;
    }
    else if(str[0]=='V')
    {
        result = 2;
    }
    else
    {
        result = 3;
    }
    cout << arr[result];
    return 0;
}