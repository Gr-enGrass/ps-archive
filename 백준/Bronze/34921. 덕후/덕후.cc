
#include <iostream>

using namespace std;

int main()
{
    int a,t;
    cin >> a >> t;
    
    int result = 10+2*(25-a+t);\
    
    cout << (result<=0?0:result);

    return 0;
}