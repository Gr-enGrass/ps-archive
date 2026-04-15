
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string chess[8]={};
    bool check1[8]={};//가로
    bool check2[8]={};//세로
    bool check3[15]={};//대각선(우상)
    bool check4[15]={};//대각선(좌상)
    for(int i =0;i<8;i++)
    {
        cin >> chess[i];
    }
    int cnt =0;
    for(int i =0;i<8;i++)
    {
        for(int j =0;j<8;j++)
        {
            if(chess[i][j]=='*')
            {
                cnt++;
                if(!check1[i]&&!check2[j]&&!check3[i+j]&&!check4[i-j+7])
                {
                    check1[i]=true;
                    check2[j]=true;
                    check3[i+j]=true;
                    check4[i-j+7]=true;
                }
                else
                {
                    cout << "invalid";
                    return 0;
                }
            }
        }
    }
    if(cnt == 8)
        cout << "valid";
    else
        cout << "invalid";
    return 0;
}