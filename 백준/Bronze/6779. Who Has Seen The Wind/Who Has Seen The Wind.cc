#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int h,m;
  int check;
  cin >> h >> m;
  for(int t =1;t<=m;t++)
  {
      check=-6*pow(t,4)+h*pow(t,3)+2*pow(t,2)+t;
      if(check<=0)
      {
          cout << "The balloon first touches ground at hour: " << t;
          return 0;
      }
  }
  cout << "The balloon does not touch ground in the given time.";
}