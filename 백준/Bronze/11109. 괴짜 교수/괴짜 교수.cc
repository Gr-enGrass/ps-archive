#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int d,n,s,p;
        cin >> d >> n >>s >> p;
        if(d+p*n<n*s)
        {
            cout << "parallelize\n";
        }
        else if(d+p*n>n*s)
        {
            cout << "do not parallelize\n";
        }
        else
        {
            cout << "does not matter\n";
        }
    }
    return 0;
}