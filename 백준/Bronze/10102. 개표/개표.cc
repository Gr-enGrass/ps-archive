#include <iostream>

using namespace std;

int main()
{
    int even_cnt=0,odd_cnt=0;
    
    int n;
    string k;
    cin >> n >> k;
    int a_cnt=0;
    for(const char &a : k)
    {
        if(a=='A')
            a_cnt++;
    }
    int b_cnt = n-a_cnt;
    if(a_cnt>b_cnt)
        cout << 'A';
    else if(a_cnt <b_cnt)
        cout << 'B';
    else
        cout <<"Tie";
    return 0;
}