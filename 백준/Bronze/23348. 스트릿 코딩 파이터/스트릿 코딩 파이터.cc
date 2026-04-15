
#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    int n;
    int big = 0;
    cin>>A>>B>>C;
    cin >>n;
    while(n--)
    {
        int sum = 0;
        
        for(int i =0;i<3;i++)
        {
            int a,b,c;
            cin >> a >> b >> c;
            sum+=(a*A+b*B+c*C);
        }
        if(sum>big)
        {
            big= sum;
        }
    }
    cout << big;
    return 0;
}