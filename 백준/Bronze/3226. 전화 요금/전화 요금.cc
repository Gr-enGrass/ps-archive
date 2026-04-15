#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    while(n--) {
        string str;
        int dd;
        cin >> str >> dd;

        int hh = stoi(str.substr(0,2));
        int mm = stoi(str.substr(3,2));

        int S = hh*60 + mm;  // 시작 시간
        int E = S + dd;      // 종료 시간 (종료 미포함)

        int D1 = 7*60;    // 07:00
        int D2 = 19*60;   // 19:00
        
        int dayMinutes = max(0, min(E, D2) - max(S, D1));
        int nightMinutes = dd - dayMinutes;

        sum += dayMinutes*10 + nightMinutes*5;
    }
    cout << sum;
    return 0;
}