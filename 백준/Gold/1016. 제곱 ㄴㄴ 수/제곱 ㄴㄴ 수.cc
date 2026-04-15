
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int min,max;
    cin >> min >> max;
    vector<bool> isPrime(max - min + 1, true);
    for(long long int i = 2; i <= sqrt(max) ; i++)
    {
        for(long long int j = min / (i*i); j <= max / (i*i); j++)
        {
            //소수 i제곱의 배수가 min 이상일때
            if(i*i*j>=min)
            {
                //isPrime배열의크기는 max-min
                isPrime[i*i*j-min] = false;
            }
        }
    }
    int cnt = 0;
    for(const auto &a : isPrime)
    {
        if(a)
            cnt++;
    }
    cout << cnt;
    return 0;
}