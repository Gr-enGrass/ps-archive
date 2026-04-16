
#include <iostream>

using namespace std;

int main()
{
    int n,t,p;
    int size[6]={0};
    
    cin >> n;
    for(int i=0;i<6;i++)
    {
        cin >> size[i];
    }
    cin >> t >> p;
    
    int pen=0;
    
    for(int i=0;i<6;i++)
    {
        pen+=(size[i]+t-1)/t;
    }
    
    cout << pen << "\n" << n/p << " " << n%p;
    
    return 0;
}