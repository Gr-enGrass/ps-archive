
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int cnt=1;
    cin >> n;
    while(n!=0)
    {
        cout << cnt++ << ". ";
        int n1=n*3;
        int n2;
        int n3;
        int n4;
        if(n1%2==0)
        {
            cout << "even ";
            n2=n1/2;
        }
        else
        {
            n2=(n1+1)/2;
            cout << "odd ";
        }
        n3=3*n2;
        n4=n3/9;
        cout << n4 << "\n";
        cin >> n;
    }
    return 0;
}