
#include <iostream>

using namespace std;

int n;
int cnt;
bool isUsed1[15];//세로 확인 
bool isUsed2[29];//대각선 확인(우측상단-좌측하단)
bool isUsed3[29];//대각선 확인(좌측상단-우측하단)

int ang(int x)//x번째 행 부터
{
    if(x==n)
    {
        cnt++;
    }
    
    for(int i = 0;i<n;i++)//x행의 i 번째 칸
    {
        if(isUsed1[i]||isUsed2[i+x]||isUsed3[x-i+n-1])
        {
            continue;
        }
        isUsed1[i] = true;
        isUsed2[i+x] = true;
        isUsed3[x-i+n-1] = true;
        ang(x+1);
        isUsed1[i] = false;
        isUsed2[i+x] = false;
        isUsed3[x-i+n-1] = false;
    }
    return cnt;
}

int main()
{
    cin >> n;
    ang(0);
    cout << cnt;
    return 0;
}