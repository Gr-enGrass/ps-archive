
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n,m;
    
    cin >> n >> m;
    
    bool prime[m+1]={};
    fill_n(prime,m+1,true);
    prime[1]=false;
    
    for(int i=2;i*i<m+1;i++)
    {
        if(prime[i])
        {
            for(int j = i*i;j<m+1;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    
    for(int i=n;i<m+1;i++)
    {
        if(prime[i])
            cout << i << "\n";
    }
}