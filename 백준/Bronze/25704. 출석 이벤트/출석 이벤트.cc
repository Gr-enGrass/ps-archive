
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double n,p;
    cin >> n >> p;
    
    if(n>=20)
        p=min(p*0.75,p-2000);
    else if(n>=15)
        p=min(p-2000,p*0.9);
    else if(n>=10)
        p=min(p*0.9,p-500);
    else if(n>=5)
        p-=500;
    
    if(p<0)
        p = 0;

    cout << p;
    return 0;
}