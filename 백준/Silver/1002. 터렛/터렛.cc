#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t;
    int x1,y1,r1,x2,y2,r2;
    double distanse;
    int sub;
    cin >> t;
    
    while(t--)
    {
        cin >> x1>>y1>>r1>>x2>>y2>>r2;
        //두 점사이 거리 
        distanse=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        
        sub=abs(r1-r2);
        
        //조규현과 백승환의 좌표가 같을때
        if(distanse==0&&r1==r2)
        {
            cout << "-1\n";
        }
        else if(distanse==r1+r2||sub==distanse)//교점이 1개 인경우
        {
            cout << "1\n";
        }
        else if(distanse<r1+r2&&sub<distanse)//교점이 2개인 경우
        {
            cout << "2\n";
        }
        else//교점이 없는 경우
        {
            cout << "0\n";
        }
    }

    return 0;
}