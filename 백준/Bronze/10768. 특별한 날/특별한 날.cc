
#include <iostream>

using namespace std;

int main()
{
    int month,date;
    cin >> month >> date;
    if(month>2)
    {
        cout << "After";
        
    }
    else if(month<2)
    {
        cout << "Before";
    }
    else
    {
        if(date==18)
            cout << "Special";
        else if(date>18)
            cout << "After";
        else
            cout << "Before";
    }
    return 0;
}