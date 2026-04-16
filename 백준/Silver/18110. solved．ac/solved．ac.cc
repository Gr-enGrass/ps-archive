
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
   int n;
   double total=0;
   cin >>n;
   if(n==0)
   {
       cout << 0;
       return 0;
   }
   vector<int>diflev(n);
   for(int i=0;i<n;i++)
   {
       cin >> diflev[i];
   }
   sort(diflev.begin(),diflev.end());
   
   int cut = round(double(n)*0.15);
   
   for(int i=cut;i<n-cut;i++)
   {
       total += diflev[i];
   }
   total=total/(n-cut*2);
   total=round(total);
   
   cout << total;
   
   return 0;
}