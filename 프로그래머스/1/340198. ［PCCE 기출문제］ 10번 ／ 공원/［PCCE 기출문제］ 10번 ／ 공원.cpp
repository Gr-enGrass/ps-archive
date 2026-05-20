#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    int answer = -1;
    int maxSize = 0;

    int n = park.size();
    int m = park[0].size();

    vector<int> dp(m, 0);

    for (int i = 0; i < n; i++) 
    {
        int prev = 0; 

        for (int j = 0; j < m; j++) 
        {

            int temp = dp[j];

            if (park[i][j] == "-1")
            {
                if (i == 0 || j == 0) 
                {
                    dp[j] = 1;
                }
                else 
                {
                    dp[j] = min({dp[j], dp[j-1], prev}) + 1;
                }
                maxSize = max(maxSize, dp[j]);
            }
            else 
            {
                dp[j] = 0;
            }

            prev = temp;
        }
    }

    sort(mats.rbegin(), mats.rend());

    for (int mat : mats) 
    {
        if (mat <= maxSize) 
        {
            answer = mat;
            break;
        }
    }

    return answer;
}