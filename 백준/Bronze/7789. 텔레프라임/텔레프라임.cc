#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int num;
int add;
int newnum;

void makevector(vector<bool>& isPrime, int x)
{
    for(int i = 2;i<=sqrt(x);i++)
    {
        if(isPrime[i])
        {
            for(int j =i*i;j<=x;j+=i)//i의 배수는 소수가 아님
            {
                isPrime[j]=false;
            }
        }
    }
}

int main()
{
    cin >> num >> add;
    newnum = num+1000000*add;
    vector<bool>isPrime(newnum+1,true);
    isPrime[0] = isPrime[1] = false;
    makevector(isPrime,newnum);
    
    if(isPrime[num]&&isPrime[newnum])
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}