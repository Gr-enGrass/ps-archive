
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char star[3072][6144];
void PrintStar(int x,int y,int n)
{
    if(n==3)
    {
        star[x][y]='*';
        star[x+1][y-1]='*';
        star[x+1][y+1]='*';
        star[x+2][y-2]='*';
        star[x+2][y-1]='*';
        star[x+2][y]='*';
        star[x+2][y+1]='*';
        star[x+2][y+2]='*';
    }
    else
    {
        PrintStar(x,y,n/2);
        PrintStar(x + n / 2, y - n / 2, n / 2);
		PrintStar(x + n / 2, y + n / 2, n / 2);
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2*n - 1; j++)
        {
            star[i][j] = ' ';            
        }
    }
        
    PrintStar(0,n-1,n);
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<n*2-1;j++)
        {
            cout << star[i][j];
        }
        cout << '\n';
    }
    return 0;
}