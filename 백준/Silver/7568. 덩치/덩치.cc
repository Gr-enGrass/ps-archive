
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   int x,y;
   int n;
   int rank =1;
   cin >> n;
   vector<pair<int,int>>a(n);
   for(int i=0;i<n;i++)
   {
       cin >> x >> y;
       a[i].first=x;
       a[i].second=y;
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(a[i].first<a[j].first&&a[i].second<a[j].second)
           {
               rank++;
           }
       }
       cout << rank << "\n";
       rank=1;
   }

    return 0;
}