#include <iostream>
#include <algorithm>
using namespace std;

string func(string n)
{
    int sum = 0;
    for(const auto &a : n)
    {
        sum+=(a-'0');
    }
    if(sum/10!=0)
    {
        return func(to_string(sum));
    }
    else
    {
        return to_string(sum);
    }
}

int main()
{
    while(1)
    {
        string n;
        cin >> n;
        if(n=="0")
            break;
        cout << func(n) << '\n';
    }
}