#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int total=0;
    long long cnt=1;
    
    for(auto const &it : str)
    {
        total=(total+((it-96)*cnt) % 1234567891)%1234567891;
        cnt=(cnt*31)% 1234567891;
    }
    cout << total;
    
    return 0;
}
