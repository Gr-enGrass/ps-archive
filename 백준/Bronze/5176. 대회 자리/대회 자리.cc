#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p,m;
    while(n--){
        cin >> p >> m;
        int cnt = 0;
        bool seat[m+1] = {0};
        for(int i =0;i<p;i++)
        {
            int temp;
            cin >> temp;
            if(seat[temp]==true)
                cnt++;
            seat[temp]= true;
        }
        cout << cnt << "\n";
    }
}