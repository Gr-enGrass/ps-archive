
#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <limits.h>

using namespace std;

int GCD(int a,int b)
{
    if(b==0)
        return a;
    return GCD(b,a%b);
}

int LCM(int a,int b)
{
    return a * b / GCD(a,b);
}

int ThreeLCM(int a,int b,int c)
{
    return LCM(LCM(a,b),c);    
}

int main()
{
    int num[5];
    for(int i =0;i<5;i++)
    {
        cin >> num[i];
    }
    int current_min = INT_MAX;
    
    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            for (int k = j + 1; k < 5; ++k) {
                
                int temp = ThreeLCM(num[i],num[j],num[k]);
                if(temp<current_min)
                    current_min = temp;
            }
        }
    }
    cout << current_min;
    return 0;
}