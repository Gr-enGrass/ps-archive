
#include <iostream>

using namespace std;
int main()
{
    double temp1,temp2;
    cin >> temp1 >> temp2;
    cout << fixed;
    cout.precision(2);
    cout << temp2 - temp1 << '\n';
    while(1)
    {
        temp1=temp2;
        cin >> temp2;
        if(temp2==999)
            break;
        cout << temp2-temp1<<'\n';
    }
    return 0;
}