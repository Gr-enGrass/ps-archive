
#include <iostream>

using namespace std;

int main()
{
    int n;
    int k=0;
    cin >> n;
    
    while(1)
    {
        if(1+k+k*k==n)
            break;
        
        k++;
    }
    
    cout << k;
    
    return 0;
}