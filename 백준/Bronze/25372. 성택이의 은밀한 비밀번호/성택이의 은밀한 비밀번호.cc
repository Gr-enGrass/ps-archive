
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string password ="";
        cin >> password;
        int i = 0;
        while(1)
        {
            if(password[i++]=='\0')
            {
                i -= 1;
                break;
            }
        }
        if(i>=6 && i<=9)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    return 0;
}