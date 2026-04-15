#include <iostream>

using namespace std;

int main()
{
    int x[5];
    for(int i =0;i<5;i++)
    {
        cin >> x[i];
    }
    int check[10]={0};
    for(int i =0;i<5;i++)
    {
        check[x[i]]++;
    }
    for(int i =0;i<10;i++)
    {
        if(check[i]%2!=0)
        {
            cout << i;
        }
    }
    return 0;
}