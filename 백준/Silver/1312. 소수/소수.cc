
#include <iostream>

using namespace std;

int main()
{
    int A,B,N;
    cin >> A >> B >> N;
    
    int result;
    for(int i =0;i<N+1;i++)
    {
        result=A/B;
        A=A%B*10;
    }
    cout << result;
    return 0;
}