
#include <iostream>

using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    
    //첫째항이 1이고 공차가 a-2인 b+1째 항까지의 등차수열의 합
    // 첫째항 1 마지막항 1 + b * (a-2) 더하고 n/2곱하기
    long long int result = (2 + b * (a-2)) * (b+1) / 2;
    cout << result;
    
    return 0;
}