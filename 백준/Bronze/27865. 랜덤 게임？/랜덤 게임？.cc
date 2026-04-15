
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    char c = 0;
    cin >> n;
    while(c != 'Y')
    {
        cout << "? 1\n";
        cout << flush;
        cin >> c;
    }
    cout << "! 1";
    cout << flush;
    return 0;
}