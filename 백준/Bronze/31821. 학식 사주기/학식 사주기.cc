
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int price;
    int total=0;
    int count;
    cin >> n;
    vector<int>menu;
    
    for(int i=0;i<n;i++)
    {
        cin >> price;
        menu.push_back(price);
    }
    int m;
    cin >> m;
    for(int i =0;i<m;i++)
    {
        cin >> count;
        total += menu[count-1];
    }
    cout << total;
    return 0;
}