
#include <iostream>

using namespace std;

int main()
{
    int r,c,a,b;
    cin >> r >> c >> a >> b;
    string result ="";
    for(int i = 1;i<=r;i++)
    {
        for(int j = 1;j<=a;j++)
        {
            for(int k = 1;k<=c;k++)
            {
                for(int l = 1;l<=b;l++)
                {
                    if((i+k)%2==1)
                    {
                        result+='.';
                    }
                    else
                    {
                        result+='X';
                    }
                }
            }
            result+='\n';
        }
    }
    cout << result;
    return 0;
}