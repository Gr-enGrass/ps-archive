#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    int big = max(bill[0],bill[1]);
    int small = min(bill[0],bill[1]);;
    while((big>wallet[0]||small>wallet[1])&&(big>wallet[1]||small>wallet[0]))
    {
        big/=2;
        int temp = big;
        big = max(temp,small);
        small = min(temp,small);
        answer++;
    }
    
    return answer;
}