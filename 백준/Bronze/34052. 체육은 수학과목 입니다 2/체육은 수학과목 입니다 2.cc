#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int sum = 0;
    for(int i=0;i<4;i++)
    {
        int n;
        cin >> n;
        sum += n;
    }
    sum += 300;
    if(sum<=1800)
        cout << "Yes";
    else
        cout <<"No";
}