
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,m,b;
    cin >> n >>m >>b;
    vector<vector<int>>block(n,vector<int>(m,0));
    int big = 0;
    int small = 257;
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin >> block[i][j];
            if(block[i][j]>big)
            {
                big = block[i][j];
            }
            if(block[i][j]<small)
            {
                small = block[i][j];
            }
        }
    }
    
    
    int mintime = 2147483647;
    int height;
    for(int i = small;i<=big;i++)
    {
        int time1 = 0;//제거
        int time2 = 0;//설치
        int temp_b = b;
        
        for(int j =0;j<n;j++)
        {
            for(int k = 0;k<m;k++)
            {
                if(block[j][k]<=i)//설치
                {
                    temp_b = temp_b + block[j][k] - i;//인벤토리 감소
                    time2 = time2 + i - block[j][k];
                }
                else//제거
                {
                    temp_b = temp_b + block[j][k] - i;//인벤토리 증가
                    time1 = time1 + (block[j][k]-i)*2;
                }
            }
        }
        if(temp_b>=0)
        {
            if(time1+time2 < mintime || (time1+time2 == mintime && i > height))
            {
                mintime = time1 + time2;
                height = i;
            }
        }
    }
    cout << mintime << ' ' << height;
    
    return 0;
}