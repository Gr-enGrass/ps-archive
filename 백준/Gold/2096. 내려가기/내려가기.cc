
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    
    vector<int> maxscore(3);
    vector<int> minscore(3);
    vector<int> tempmax(3);
    vector<int> tempmin(3);
    vector<int> input(3);
    for(int i =0;i<3;i++)
    {
        cin >> tempmax[i];
        tempmin[i]=tempmax[i];
    }
    
    if (n == 1) 
    {
        int result_max = max({tempmax[0], tempmax[1], tempmax[2]});
        int result_min = min({tempmin[0], tempmin[1], tempmin[2]});
        cout << result_max << ' ' << result_min;
        return 0;
    }
    
    for (int i = 2; i <= n; i++) {
        cin >> input[0] >> input[1] >> input[2];
        
        // maxscore 갱신
        maxscore[0] = max(tempmax[0], tempmax[1]) + input[0];
        maxscore[1] = max({tempmax[0], tempmax[1], tempmax[2]}) + input[1];
        maxscore[2] = max(tempmax[1], tempmax[2]) + input[2];
        
        // minscore 갱신
        minscore[0] = min(tempmin[0], tempmin[1]) + input[0];
        minscore[1] = min({tempmin[0], tempmin[1], tempmin[2]}) + input[1];
        minscore[2] = min(tempmin[1], tempmin[2]) + input[2];
        
        // temp 갱신
        tempmax = maxscore;
        tempmin = minscore;
    }

    int result_max = max({maxscore[0],maxscore[1],maxscore[2]});
    int result_min = min({minscore[0],minscore[1],minscore[2]});
    cout << result_max << ' ' << result_min;
    return 0;
}