
#include <iostream>

using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;
    
    for(int i = str.size()-5;i<str.size();i++)
    {
        cout << str[i];
    }

    return 0;
}