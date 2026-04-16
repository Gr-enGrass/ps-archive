#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    int n;
    
    int check = 1;
    
    stack<int> line;
    
    short flag = 1;
    
    int arr[1000]={0};
    
    
    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int j=0;j<n;j++)
    {
        if (arr[j]!=check)
        {
            if(line.empty()||line.top()>arr[j])
            {
                line.push(arr[j]);
            }
            else
            {
                if(line.empty())
                {
                    continue;
                }
                else 
                {
                    flag=0;
                    break;
                }
            }
        }
        else
        {
            check++;
            {
                while(!line.empty()&&line.top()==check)
                {
                    line.pop();
                    check++;
                }
            }
        }
    }
    flag ? cout << "Nice" : cout << "Sad";
}
     