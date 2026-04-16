#include <iostream>

using namespace std;
int main(){
    int gift;
    int n;
    int cnt =0;
    cin >> n;
    for(int i =0;i<n;i++)
    {
        cin.ignore(100,'-');
        cin >> gift;
        if(gift<=90)
        {
            cnt++;
        }
    }
    cout << cnt;
}