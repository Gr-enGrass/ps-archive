
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    string str;
    cin >> str;
    long long int sum = 0;
    int digits = str.size();
    for(const char &a : str)
    {
        sum+=((a-64)*pow(26,--digits));    
    }
    cout << sum;
    return 0;
}