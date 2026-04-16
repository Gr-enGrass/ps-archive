
#include <iostream>

using namespace std;

short map[52][52];

void FloodFill(int x, int y)
{
    if(map[y][x]==1)
    {
        map[y][x]=2;
        FloodFill(x+1,y);//오른쪽
        FloodFill(x,y+1);//아래
        FloodFill(x-1,y);//왼쪽
        FloodFill(x,y-1);//위        
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m,n,k;
        int cnt=0;
        cin >> m >>n >> k;
        for (int i = 1; i <= n; i++)//맵 초기화
        {
            for (int j = 1; j <= m; j++)
            {
                map[i][j] = 0;
            }
        }
        while(k--)
        {
            int x,y;
            cin >> x >> y ;
            map[y+1][x+1]=1;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(map[i][j]==1)
                {
                    FloodFill(j,i);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}