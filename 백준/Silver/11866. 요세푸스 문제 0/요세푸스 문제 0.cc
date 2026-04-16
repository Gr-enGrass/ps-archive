#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    int k;
    int check;
    cin >> n >> k;
    queue<int>num;
    
    for(int i =0;i<n;i++)
    {
        num.push(i+1);
    }

    cout << "<";
    for (int i=0;i<n-1;i++)
    {
        for(int j=1;j<k;j++)
        {
            check=num.front();
            num.pop();
            num.push(check);
        }
        cout << num.front() << "," << " ";
        num.pop();
    }
    cout << num.front();
    cout << ">";
    return 0;
}