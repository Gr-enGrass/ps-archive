#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    int n;
    int index = 0;
    int num = 1;
    string str ="";
    cin >> n;
    
    int check[n] ={0};
    stack<int> arr;
    for(int i =0;i<n;i++)
    {
        cin >> check[i];
    }
    arr.push(0);
    while(index < n)
    {
        if(arr.top()<check[index])
        {
            arr.push(num++);
            str += "+\n";
        }
        else if(arr.top()==check[index])
        {
            arr.pop();
            index++;
            str += "-\n";
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << str;
}