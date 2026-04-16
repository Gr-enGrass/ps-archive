
#include <iostream>

using namespace std;

int lastDigitOfFactorial(int n) {
    if(n<2)
        return 1;
    
    return (n*lastDigitOfFactorial(n-1))%10;
}

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a;
        cin >> a;
        cout << lastDigitOfFactorial(a) << "\n";
    }
    return 0;
}