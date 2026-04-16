
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c,ab,ac,bc,abc;
    int card[7]={0};
    for(int i = 0;i<7;i++)
    {
        cin >> card[i];
    }
    sort(card,card+7);
    a = card[0];
    b = card[1];
    abc = card[6];
    c = abc - a - b;
    ac = a+c;
    bc = b+c;
    ab = a+b;
    cout << a << " " << b << " " << c;
}