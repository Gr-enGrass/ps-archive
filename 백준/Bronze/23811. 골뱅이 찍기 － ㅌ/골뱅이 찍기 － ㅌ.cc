
#include <iostream>

using namespace std;

int main()
{
    int n;
    string e1 = "@@@@@";
    string e2 = "@";
    cin >> n;
    for(int i = 0; i< n ;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout << e1;
        }
        cout << '\n';
    }
    for(int i = 0; i< n ;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout << e2;
        }
        cout << '\n';
    }
    for(int i = 0; i< n ;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout << e1;
        }
        cout << '\n';
    }
    for(int i = 0; i< n ;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout << e2;
        }
        cout << '\n';
    }
    for(int i = 0; i< n ;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout << e1;
        }
        cout << '\n';
    }
    return 0;
}