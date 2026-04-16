#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int n;
   int pot;
   int sum=0;
   cin >> n;
   for(int i=0;i<n;i++)
   {
       cin >> pot;
       sum+=pow(pot/10,pot%10);
   }
   cout << sum;
    return 0;
}