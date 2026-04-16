
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char grid[n+3][n+3];
    char check;
    int bcnt=0, wcnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> check;
            grid[i][j]=check;
            if(check=='B')
                bcnt++;
            else
                wcnt++;
        }
        if(bcnt!=wcnt)
        {
            cout << '0';
            return 0;
        }
        bcnt=wcnt=0;
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            check=grid[j][i];
            if(check=='B')
                bcnt++;
            else
                wcnt++;
            
            check=grid[i][j];
            
            if(check=='B'&&grid[i][j+1]=='B'&&grid[i][j+2]=='B')
            {
                cout << '0';
                return 0;
            }
            else if(check=='B'&&grid[i+1][j]=='B'&&grid[i+2][j]=='B')
            {
                cout << '0';
                return 0;
            }
            else if(check=='W'&&grid[i][j+1]=='W'&&grid[i][j+2]=='W')
            {
                cout << '0';
                return 0;
            }
            else if(check=='W'&&grid[i+1][j]=='W'&&grid[i+2][j]=='W')
            {
                cout << '0';
                return 0;
            }
        }
        if(bcnt!=wcnt)
        {
            cout << '0';
            return 0;
        }
    }
    
    cout << '1';
    
    return 0;
}