
#include <iostream>
#include <vector>
using namespace std;

int n,s;
int cnt;
int arr[20];
int sum;

void func(int cur,int tot)
{
    if(cur==n)
    {
        if(tot==s)
        {
            cnt++;
        }
        return;
    }
    func(cur+1,tot);
    func(cur+1,tot+arr[cur]);
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> n >> s;

    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    func(0,0);
    if(!s)
        cnt--;
    cout << cnt;
    return 0;
}