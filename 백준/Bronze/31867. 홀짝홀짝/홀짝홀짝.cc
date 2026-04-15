#include <iostream>

using namespace std;

int main()
{
    int even_cnt=0,odd_cnt=0;
    
    int n;
    string k;
    cin >> n >> k;
    for(const char &a : k)
    {
        if((a-48)%2==1)
            odd_cnt++; 
        else
            even_cnt++; 
    }
    if(even_cnt>odd_cnt)
        cout << 0;
    else if(even_cnt<odd_cnt)
        cout << 1;
    else
        cout << -1;
    return 0;
}