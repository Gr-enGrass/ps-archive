#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<int>card;
    
    for(int i=0;i<n;i++)
    {
        card.push(i+1);        
    }
    
    for(int i =0;i<n-1;i++)
    {
        card.pop();
        int check = card.front();
        card.pop();
        card.push(check);
        
    }
    cout << card.front();
    return 0;
}