
#include <iostream>

using namespace std;

int main()
{
    string str1,str2;
    int n;
    cin >> n;
    cin >> str1;
    cin >> str2;
    if(n%2==0)
    {
        if(str1==str2)
        {
            cout << "Deletion succeeded\n";
            return 0;
        }
        else
        {
            cout << "Deletion failed\n";
            return 0;
        }
    }
    else
    {
        for(int i =0;i<str1.size();i++)
        {
            if(str1[i]=='1')
                str1[i]='0';
            else
                str1[i]='1';
        }
        if(str1==str2)
        {
            cout << "Deletion succeeded\n";
            return 0;
        }
        else
        {
            cout << "Deletion failed\n";
            return 0;
        }
    }
    return 0;
}