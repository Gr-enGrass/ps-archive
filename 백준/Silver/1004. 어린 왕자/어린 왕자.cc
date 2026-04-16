
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    int x1,y1,x2,y2;
    
    int n;
    
    
    
    while(t--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        int sum=0;
        int enter=0,departure=0;
        while(n--)
        {
            int cx,cy,r;
            cin >> cx >> cy >> r;
            double distanse;
            double dis_start;
            double dis_end;
            distanse = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
            dis_start = sqrt(pow(cx-x1,2)+pow(cy-y1,2));
            dis_end = sqrt(pow(cx-x2,2)+pow(cy-y2,2));
            if(dis_start<r&&dis_end>r)//출발점이 행성계 안쪽에 있는경우
            {
                departure++;
            }
            else if(dis_end<r&&dis_start>r)//도착점이 행성계 안쪽에 있는경우
            {
                enter++;
            }
        }
        sum=departure+enter;
        cout << sum << "\n";
    }

    return 0;
}