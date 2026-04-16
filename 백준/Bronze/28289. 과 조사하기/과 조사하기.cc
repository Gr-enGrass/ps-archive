
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int p;
    cin >> p;
    int result1 = 0, result2 = 0, result3 = 0, result4 = 0;
    while(p--)
    {
        int g, c, n;
        cin >> g >> c >> n;
        if(g==1)
        {
            result4++;
        }
        else if(c <= 2)
        {
            result1++;
        }
        else if(c <= 3)
        {
            result2++;
        }
        else
        {
            result3++;
        }
    }
    cout << result1 << '\n';
    cout << result2 << '\n';
    cout << result3 << '\n';
    cout << result4 << '\n';
}