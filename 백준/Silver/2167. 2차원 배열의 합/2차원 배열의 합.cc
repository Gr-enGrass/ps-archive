#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    int arr[301][301]={};
    for(int i =1;i<=n;i++)
    {
        for(int j =1;j<=m;j++)
        {
            cin >> arr[i][j];
        }
    }
    
    int result[301][301]={};
    for(int i =1;i<=n;i++)
    {
        for(int j =1;j<=m;j++)
        {
            result[i][j]=result[i][j-1]+result[i-1][j]-result[i-1][j-1]+arr[i][j];
        }
    }
    
    cin >> n;
    while(n--)
    {
        int a,b,c,d;
        cin >> a >>b >>c>>d;
        cout << (result[c][d]-result[c][b-1]-result[a-1][d]+result[a-1][b-1]) << '\n';
    }
    return 0;
}