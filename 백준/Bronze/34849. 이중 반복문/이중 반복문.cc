
#include <iostream>

using namespace std;
int main()
{
    long long int n;
    cin >> n;
    if(n*n>100000000)
    {
        cout << "Time limit exceeded";
    }
    else
    {
        cout << "Accepted";
    }

    return 0;
}