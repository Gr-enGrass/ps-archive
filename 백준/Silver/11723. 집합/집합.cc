#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    string str;
    int x;
    int s = 0;

    while (n--)
    {
        cin >> str;

        if (str == "add") {
            cin >> x;
            s |= (1 << (x - 1));
        }
        else if (str == "remove") {
            cin >> x;
            s &= ~(1 << (x - 1));
        }
        else if (str == "check") {
            cin >> x;
            cout << (s & (1 << (x - 1)) ? "1\n" : "0\n");
        }
        else if (str == "toggle") {
            cin >> x;
            s ^= (1 << (x - 1));
        }
        else if (str == "all") {
            s = (1 << 20) - 1;
        }
        else if (str == "empty") {
            s = 0;
        }
    }

    return 0;
}