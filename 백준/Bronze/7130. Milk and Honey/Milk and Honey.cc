#include <iostream>

using namespace std;

int main()
{
    int m,h,n;
    cin >> m >> h >> n;
    
    int total =0;
    
    for(int i =0;i<n;i++)
    {
        int c,b;
        cin >> c >> b;
        total += max(m*c,h*b);
    }
    cout << total;

}