
#include <iostream>

using namespace std;

int main()
{
    long long h1,h2,h3,n;
    cin >> h1 >> h2 >> h3;
    cin >>n;
    long long result;
    if(n%2==0)
    {
        result = (h2+h3*2)*(n/2);
    }
    else
    {
        result = h1+h2*((n/2)+1)+h3*n;
    }
    cout << result;
    

    return 0;
}