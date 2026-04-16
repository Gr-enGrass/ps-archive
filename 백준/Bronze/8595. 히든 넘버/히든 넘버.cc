#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long int sum = 0;
    cin >> n;
    string arr;
    string temp={};
    cin >> arr;
    
   for(int i=0;i<=n;i++)
   {
       if(arr[i]>=48&&arr[i]<=57)
       {
           temp+=arr[i];
       }
       else
       {
            if(temp.empty())
                continue;
            sum+=stoi(temp);
            temp="";
       }
   }

    cout << sum;
    return 0;
}
