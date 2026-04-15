#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int k,d,a;
    
    cin >> k;
    cin.ignore();
    cin >> d;
    cin.ignore();
    cin >> a;
    
    if(k+a<d||d==0)
    {
        cout << "hasu";
    }
    else
    {
        cout << "gosu";
    }
    return 0;
}