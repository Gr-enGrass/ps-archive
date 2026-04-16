
#include <iostream>

using namespace std;

int num(int a,int b)
{
    if(b==1)
        return 1;
    else if(a==0)
        return b;
    else
        return (num(a,b-1)+num(a-1,b));
        
}

int main()
{
    int t;
    cin >> t;
    int k,n;
    
    for(int i=0;i<t;i++)
    {
        cin >> k >> n;
        cout << num(k,n) << "\n";
    }

    return 0;
}