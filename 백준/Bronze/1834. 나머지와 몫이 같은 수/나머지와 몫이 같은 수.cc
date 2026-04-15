
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long int sum = 0;
    for(long long int i =1;i<N;i++)
    {
        sum+= N*i + i;
    }
    cout << sum;
    return 0;
}