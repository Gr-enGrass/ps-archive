
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<short>arr;
    while(n!=0)
    {
        arr.push_back(n%2);
        n/=2;
    }
    reverse(arr.begin(),arr.end());
    for(auto const &it : arr)
    {
        cout << it;
    }
    return 0;
}