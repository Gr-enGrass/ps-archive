
#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k=0,y=0;
        for(int i =0;i<9;i++)
        {
            int a,b;
            cin >> a >> b;
            y+=a;
            k+=b;
        }
        if(y>k)
        {
            cout << "Yonsei\n";
        }
        else if(k>y)
        {
            cout << "Korea\n";
        }
        else
        {
            "Draw\n";
        }
    }

    return 0;
}