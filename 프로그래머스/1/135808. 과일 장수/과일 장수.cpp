#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(),score.end());
    while(score.size()>=m)
    {
        int price = 0;
        for(int i =0;i<m;i++)
        {
            price = score.back();
            score.pop_back();
        }
        answer += (price * m);
    }
    
    return answer;
}