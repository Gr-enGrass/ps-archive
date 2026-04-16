#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string BiteCode;
    cin >> n >> BiteCode;
    for(const auto &a : BiteCode)
    {
        if(a!='J'&&a!='A'&&a!='V')
        {
            cout << a;
        }
        else
        {
            n--;
            continue;
        }
    }
    if(!n)
    {
        cout << "nojava";
    }
}